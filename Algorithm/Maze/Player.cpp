#include "stdafx.h"
#include "Player.h"
#include "board.h"
#include <stack>

void Player::Init(Board* board)
{
	_pos = board->GetEnterPos();
	_board = board;
	_pathIndex = 0;

	//	FindPath_RIghtHand();
	//	FindPath_BFS();
	FindPath_AStar();
}

void Player::Update(uint64 deltaTick)
{
	if (_pathIndex >= _path.size())
	{
		_board->CreateMap();
		Init(_board);
		return; 
	}

	_sumTick += deltaTick;
	if (_sumTick > MOVE_TICK) {
		_sumTick = 0;

		_pos = _path[_pathIndex++];
	}
}

bool Player::CanMove(Pos pos)
{
	TileType tileType = _board->GetTileType(pos);
	return tileType == TileType::EMPTY;
}

void Player::FindPath_RIghtHand()
{
	Pos pos = _pos;

	_path.clear();
	_path.push_back(pos);

	// ������ �����ϱ� ������ ��� ����
	Pos dest = _board->GetExitPos();

	Pos front[4] =
	{
		Pos { -1, 0},	// UP
		Pos { 0, -1},	// LEFT
		Pos { 1, 0},	// DOWN
		Pos { 0, 1},	// RIGHT
	};

	while (pos != dest)
	{
		// 1. ���� �ٶ󺸴� ������ �������� ���������� �� �� �ִ��� Ȯ��.
		int32 newDir = (_dir - 1 + DIR_COUNT) % DIR_COUNT;
		if (CanMove(pos + front[newDir]))
		{
			// ������ �������� 90�� ȸ��.
			_dir = newDir;
			// ������ �� �� ����.
			pos += front[_dir];

			_path.push_back(pos);
		}
		// 2. ���� �ٶ󺸴� ������ �������� ������ �� �ִ��� Ȯ��.
		else if (CanMove(pos + front[_dir]))
		{
			// ������ �� �� ����.
			pos += front[_dir];

			_path.push_back(pos);
		}
		else
		{
			// ���� �������� 90�� ȸ��.
			_dir = (_dir + 1) % DIR_COUNT;
			/*
			switch (_dir)
			{
			case DIR_UP:
				_dir = DIR_LEFT;
				break;
			case DIR_LEFT:
				_dir = DIR_DOWN;
				break;
			case DIR_DOWN:
				_dir = DIR_RIGHT;
				break;
			case DIR_RIGHT:
				_dir = DIR_UP;
				break;
			}
			*/
		}
	}
	stack<Pos> s;

	for (size_t i = 0; i < _path.size() - 1; ++i) {
		if (s.empty() == false && s.top() == _path[i + 1]) {
			s.pop();
		}
		else {
			s.push(_path[i]);
		}
	}
	// ������ ����
	if (s.empty() == false) {
		s.push(_path.back());
	}

	vector<Pos> path;
	while (s.empty() == false) {
		path.push_back(s.top());
		s.pop();
	}

	std::reverse(path.begin(), path.end());

	//	std::swap(_path, path);
	_path = path;
}

void Player::FindPath_BFS()
{
	Pos pos = _pos;

	// ������ �����ϱ� ������ ��� ����
	Pos dest = _board->GetExitPos();

	Pos front[4] =
	{
		Pos { -1, 0},	// UP
		Pos { 0, -1},	// LEFT
		Pos { 1, 0},	// DOWN
		Pos { 0, 1},	// RIGHT
	};

	const int32 boardSize = _board->GetSize();
	vector<vector<bool>> discovered(boardSize, vector<bool>(boardSize, false));

	// parent[a] = b; :: a�� b�� ���� �߰���.
	map<Pos, Pos> parent;

	queue<Pos> q;
	q.push(pos);
	discovered[pos.y][pos.x] = true;
	parent[pos] = pos;

	while (q.empty() == false) {
		pos = q.front();
		q.pop();

		// visit
		if (pos == dest) {
			break;
		}
		

		for (int32 dir = 0; dir < 4; ++dir) {
			Pos nextPos = pos + front[dir];

			if (CanMove(nextPos) == false) { continue; }

			// �̹� �߰��� �������� Ȯ��.
			if (discovered[nextPos.y][nextPos.x] == true) { continue; }

			q.push(nextPos);
			discovered[nextPos.y][nextPos.x] = true;
			parent[nextPos] = pos;
		}
	}
	
	_path.clear();

	pos = dest;
	while (true) {
		_path.push_back(pos);

		if (pos == parent[pos]) { break; }

		pos = parent[pos];
	}

	std::reverse(_path.begin(), _path.end());
}

struct PQNode {
	int32	f;
	int32	g;
	Pos		pos;

	bool operator<(const PQNode& other) const { return f < other.f; }
	bool operator>(const PQNode& other) const { return f > other.f; }
};

void Player::FindPath_AStar()
{
	// ���� �ű��?
	// ���ͽ�Ʈ�󿡼��� ����ġ�� ��

	// AStar �� ��
	// F = G + H
	// F = ���� ����( ���� �ڵ忡���� ���� ���� ����, ��ο� ���� �޶���)
	// G = ���������� �ش� ��ǥ���� �̵��ϴµ� ��� ���( ���� ���� ����, ��ο� ���� �޶��� )
	// H = ���������� �󸶳� ������� ( ���� ���� ����, ���� )

	Pos start = _pos;
	Pos dest = _board->GetExitPos();

	// �밢���� ����ϸ� 8, �����ϸ� 4
	constexpr int DIR_COUNT = 8;
	Pos front[] =
	{
		Pos { -1, 0},	// UP
		Pos { 0, -1},	// LEFT
		Pos { 1, 0},	// DOWN
		Pos { 0, 1},	// RIGHT
		Pos {-1,-1},	// Up_Left
		Pos { 1, -1},	// Down_Left
		Pos {1,1},		// Down_Right
		Pos {-1,1},		// Up_Right
	};

	int32 cost[] = {
		10, // UP
		10, // LEFT
		10, // DOWN
		10, // RIGHT
		14, // Up_Left
		14,	// Down_Left
		14,	// Down_Right
		14,	// Up_Right
	};

	const int32 boardSize = _board->GetSize();

	// �湮�� ���(ClosedList)
	vector < vector<bool>> closed(boardSize, vector<bool>(boardSize, false));

	// best[y][x] = ���ݱ��� (y,x)�� ���� ���� ���� ���
	vector<vector<int32>> best(boardSize, vector<int32>(boardSize, INT32_MAX));

	// �θ� ���� �뵵.
	map<Pos, Pos> parent;

	// OpenList
	priority_queue<PQNode, vector<PQNode>, greater<PQNode>> pq;
	// TODO
	// 1) ���� (�߰�)�ý��� ����
	// - �̹� ������ ��θ� ã�Ҵٸ� ��ŵ�ϵ��� ����
	// 2) �ڴʰ� �� ���� ��ΰ� �߰ߵ� �� ���� - > ���� ó�� �ʿ�.
	// - openList���� ã�Ƽ� �����ϰų�
	// - pq���� pop�� ������ �����ϰų�	

	// �ʱⰪ
	{
		int32 g = 0;
		int32 h = 10 * (abs(dest.y - start.y) + abs(dest.x - start.x));

		pq.push(PQNode{ g + h, g, start });
		best[start.y][start.x] = g + h;
		parent[start] = start;
	}

	while (pq.empty() == false) {
		// ���� ���� �ĺ��� ã�´�.
		PQNode node = pq.top();
		pq.pop();

		// ������ ��ǥ�� ���� ��η� ã�Ƽ�
		// �� ���� ��η� ���ؼ� �̹� �湮(Closed)�� ���� ��ŵ.

		// [����] :: closedList�� ����ϵ�, best���� ���ؼ� ����ϵ�, �Ʒ� �� �� �� �Ѱ����� ����ϸ� ��
		if (closed[node.pos.y][node.pos.x]) { continue; }
		// if (best[node.pos.y][node.pos.x] < node.f) { continue;  }

		// �湮
		closed[node.pos.y][node.pos.x] = true;

		// �������� ���������� �ٷ� ����.
		if (node.pos == dest) { break; }

		for (int32 dir = 0; dir < DIR_COUNT; ++dir)
		{
			Pos nextPos = node.pos + front[dir];
			
			// �� �� �ִ� ������ �´���
			if (CanMove(nextPos) == false) { continue; }

			// [ ���û��� ] �̹� �湮�� ���̶�� ��ŵ.
			// ���ص� pq.pop�ϴ� �������� ��ŵ�Ǳ� �Ұǵ�, �̰� �� �� ������?
			if (closed[nextPos.y][nextPos.x]) { continue; }

			// ��� ���
			int32 g = node.g + cost[dir];
			int32 h = 10 * (abs(dest.y - nextPos.y) + abs(dest.x - nextPos.x));

			// �ٸ� ��ο��� �� ���� ���� ã������ ��ŵ.
			if (best[nextPos.y][nextPos.x] <= g + h) { continue; }

			// ���� ����
			best[nextPos.y][nextPos.x] = g + h;
			pq.push(PQNode{ g + h, g, nextPos });
			parent[nextPos] = node.pos;
		}
	}

	_path.clear();

	Pos pos = dest;
	while (true) {
		_path.push_back(pos);

		if (pos == parent[pos]) { break; }

		pos = parent[pos];
	}

	std::reverse(_path.begin(), _path.end());
}
