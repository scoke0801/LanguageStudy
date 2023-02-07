#include "stdafx.h"
#include "Board.h"
#include "Player.h"
#include "DisjointSet.h"
Board::Board()
{
}

Board::~Board()
{
}

void Board::Init(int32 size, Player* player)
{
	_size = size;
	_player = player;

	CreateMap();
}

void Board::Render()
{
	const char* TILE = "■";

	ConsoleHelper::SetCursorPosition(0, 0);
	ConsoleHelper::ShowConsoleCursor(false);

	for (int32 y = 0; y < 25; ++y)
	{
		for (int32 x = 0; x < 25; ++x)
		{
			ConsoleColor color = GetTileColor(Pos{ y,x });
			ConsoleHelper::SetCursorColor(color);

			cout << TILE;
		}

		cout << endl;
	}
}

void Board::CreateMap()
{
	for (int32 y = 0; y < _size; ++y)
	{
		for (int32 x = 0; x < _size; ++x)
		{
			if (x % 2 == 0 || y % 2 == 0)
			{
				_tile[y][x] = TileType::WALL;
			}
			else
			{
				_tile[y][x] = TileType::EMPTY;
			}
		}
	}

	vector<CostEdge> edges;

	// edges후보를 랜덤 cost로 등록한다.
	for (int32 y = 0; y < _size; ++y) {
		for (int32 x = 0; x < _size; ++x) {
			if (x % 2 == 0 || y % 2 == 0) {
				continue;
			}

			if (x < _size - 2) {
				const int32 randValue = ::rand() % 100;
				edges.push_back(CostEdge{ randValue, Pos{y,x}, Pos{y, x + 2} });
			}

			if (y < _size - 2) {
				const int32 randValue = ::rand() % 100;
				edges.push_back(CostEdge{ randValue, Pos{y,x}, Pos{y + 2, x} });
			}
		}
	}

	std::sort(edges.begin(), edges.end());

	DisjointSet sets(_size * _size);

	for (CostEdge& edge : edges) {
		int u = edge.u.y * _size + edge.u.x;
		int v = edge.v.y * _size + edge.v.x;
		// 같은 그룹이면 스킵 ( 안그러면 사이클 발생 )
		if (sets.Find(u) == sets.Find(v)) {
			continue;
		}

		// 두 그룹을 합친다.
		sets.Merge(u, v);

		//맵에 적용.
		int y = (edge.u.y + edge.v.y) / 2;
		int x = (edge.u.x + edge.v.x) / 2;

		_tile[y][x] = TileType::EMPTY;
	}
}

TileType Board::GetTileType(Pos pos)
{
	if (pos.x < 0 || pos.y >= _size) {
		return TileType::NONE;
	}

	if (pos.y < 0 || pos.y >= _size) {
		return TileType::NONE;
	}
	return _tile[pos.y][pos.x];
}

ConsoleColor Board::GetTileColor(Pos pos)
{
	if (_player && _player->GetPos() == pos) {
		return ConsoleColor::YELLOW;
	}

	if (GetExitPos() == pos) {
		return ConsoleColor::BLUE;
	}

	TileType tileType = GetTileType(pos);

	switch (tileType) 
	{
	case TileType::EMPTY:	return ConsoleColor::GREEN;
	case TileType::WALL:	return ConsoleColor::RED;
	}

	return ConsoleColor::WHITE;
}
