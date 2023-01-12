#pragma once
#include "ConsoleHelper.h"

constexpr uint8 BOARD_MAX_SIZE = 100;

enum class TileType : uint8
{
	NONE =0,
	EMPTY,
	WALL,
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
	void			CreateMap();

	TileType		GetTileType(Pos pos);
	ConsoleColor	GetTileColor(Pos pos);

	Pos				GetEnterPos() { return Pos{ 1,1 }; }
	Pos				GetExitPos() { return Pos{ _size - 2, _size - 2 }; }

private:
	TileType		_tile[BOARD_MAX_SIZE][BOARD_MAX_SIZE] = {};
	
	int32			_size = 0;

	Player*			_player;
};

