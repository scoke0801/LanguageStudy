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

	// 목적지 도착하기 전에는 계속 실행
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
		// 1. 현재 바라보는 방향을 기준으로 오른쪽으로 갈 수 있는지 확인.
		int32 newDir = (_dir - 1 + DIR_COUNT) % DIR_COUNT;
		if (CanMove(pos + front[newDir]))
		{
			// 오른쪽 방향으로 90도 회전.
			_dir = newDir;
			// 앞으로 한 보 전진.
			pos += front[_dir];

			_path.push_back(pos);
		}
		// 2. 현재 바라보는 방향을 기준으로 전진할 수 있는지 확인.
		else if (CanMove(pos + front[_dir]))
		{
			// 앞으로 한 보 전진.
			pos += front[_dir];

			_path.push_back(pos);
		}
		else
		{
			// 왼쪽 방향으로 90도 회전.
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
	// 목적지 도착
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

	// 목적지 도착하기 전에는 계속 실행
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

	// parent[a] = b; :: a는 b로 인해 발견함.
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

			// 이미 발견한 지역인지 확인.
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
	// 점수 매기기?
	// 다익스트라에서는 가중치의 합

	// AStar 평가 식
	// F = G + H
	// F = 최종 점수( 현재 코드에서는 작을 수록 좋음, 경로에 따라 달라짐)
	// G = 시작점에서 해당 좌표까지 이동하는데 드는 비용( 작을 수록 좋음, 경로에 따라 달라짐 )
	// H = 목적지에서 얼마나 가까운지 ( 작을 수록 좋음, 고정 )

	Pos start = _pos;
	Pos dest = _board->GetExitPos();

	// 대각성을 사용하면 8, 사용안하면 4
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

	// 방문한 목록(ClosedList)
	vector < vector<bool>> closed(boardSize, vector<bool>(boardSize, false));

	// best[y][x] = 지금까지 (y,x)에 대한 가장 좋은 비용
	vector<vector<int32>> best(boardSize, vector<int32>(boardSize, INT32_MAX));

	// 부모 추적 용도.
	map<Pos, Pos> parent;

	// OpenList
	priority_queue<PQNode, vector<PQNode>, greater<PQNode>> pq;
	// TODO
	// 1) 예약 (발견)시스템 구현
	// - 이미 더좋은 경로를 찾았다면 스킵하도록 구현
	// 2) 뒤늦게 더 좋은 경로가 발견될 수 있음 - > 예외 처리 필요.
	// - openList에서 찾아서 제거하거나
	// - pq에서 pop한 다음에 무시하거나	

	// 초기값
	{
		int32 g = 0;
		int32 h = 10 * (abs(dest.y - start.y) + abs(dest.x - start.x));

		pq.push(PQNode{ g + h, g, start });
		best[start.y][start.x] = g + h;
		parent[start] = start;
	}

	while (pq.empty() == false) {
		// 제일 좋은 후보를 찾는다.
		PQNode node = pq.top();
		pq.pop();

		// 동일한 좌표를 여러 경로로 찾아서
		// 더 빠른 경로로 인해서 이미 방문(Closed)된 경우는 스킵.

		// [선택] :: closedList를 사용하든, best값을 통해서 사용하든, 아래 두 식 중 한가지를 사용하면 됨
		if (closed[node.pos.y][node.pos.x]) { continue; }
		// if (best[node.pos.y][node.pos.x] < node.f) { continue;  }

		// 방문
		closed[node.pos.y][node.pos.x] = true;

		// 목적지에 도착했으면 바로 종료.
		if (node.pos == dest) { break; }

		for (int32 dir = 0; dir < DIR_COUNT; ++dir)
		{
			Pos nextPos = node.pos + front[dir];
			
			// 갈 수 있는 지역이 맞는지
			if (CanMove(nextPos) == false) { continue; }

			// [ 선택사항 ] 이미 방문한 곳이라면 스킵.
			// 안해도 pq.pop하는 과정에서 스킵되긴 할건데, 이게 좀 더 좋은가?
			if (closed[nextPos.y][nextPos.x]) { continue; }

			// 비용 계산
			int32 g = node.g + cost[dir];
			int32 h = 10 * (abs(dest.y - nextPos.y) + abs(dest.x - nextPos.x));

			// 다른 경로에서 더 빠른 길을 찾았으면 스킵.
			if (best[nextPos.y][nextPos.x] <= g + h) { continue; }

			// 예약 진행
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
