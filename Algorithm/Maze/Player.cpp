#include "stdafx.h"
#include "Player.h"
#include "board.h"
#include <stack>

void Player::Init(Board* board)
{
	_pos = board->GetEnterPos();
	_board = board;

	//	FindPath_RIghtHand();
	FindPath_BFS();
}

void Player::Update(uint64 deltaTick)
{
	if (_pathIndex >= _path.size()) { return; }

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
