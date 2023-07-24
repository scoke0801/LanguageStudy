#pragma once
#include "ConsoleHelper.h"

constexpr uint8 BOARD_MAX_SIZE = 100;

enum class TileType : uint8
{
	NONE =0,
	EMPTY,
	WALL,
};

struct CostEdge
{
	int cost;
	Info u;
	Info v;

	bool operator<(const CostEdge& other) {
		return cost < other.cost;
	}
};
class Player;

class Board
{
public:
	Board();
	~Board();
	
	void			Init(int32 size, Player* player);
	void			Render();

	//Binary Tree 미로 생성 
	void			CreateMap_Kruskal();
	void			CreateMap_Prim();

	TileType		GetTileType(Info pos);
	ConsoleColor	GetTileColor(Info pos);

	Info				GetEnterPos() { return Info{ 1,1 }; }
	Info				GetExitPos() { return Info{ _size - 2, _size - 2 }; }

	int32			GetSize() { return _size; }
private:
	TileType		_tile[BOARD_MAX_SIZE][BOARD_MAX_SIZE] = {};
	
	int32			_size = 0;

	Player*			_player;
};

