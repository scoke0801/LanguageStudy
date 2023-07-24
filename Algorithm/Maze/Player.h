#pragma once

class Board;

constexpr uint32 MOVE_TICK = 100;

class Player
{	

public:
	void			Init(Board* board);
	void			Update(uint64 deltaTick);
	
	void			SetPos(Info pos) { _pos = pos; }
	Info				GetPos() { return _pos; }
	
private:	
	bool			CanMove(Info pos);
	
private:
	// ¿ì¼ö¹ý
	void			FindPath_RIghtHand();
	void			FindPath_BFS();
	void			FindPath_AStar();

private:	
	Info				_pos = {};
		
	int32			_dir = DIR_UP;
		
	Board*			_board = nullptr;

	vector<Info>		_path;
	uint32			_pathIndex = 0;
	uint64			_sumTick = 0;
};

