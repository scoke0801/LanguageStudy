#pragma once

class Board;

constexpr uint32 MOVE_TICK = 100;

class Player
{	

public:
	void			Init(Board* board);
	void			Update(uint64 deltaTick);
	
	void			SetPos(Pos pos) { _pos = pos; }
	Pos				GetPos() { return _pos; }
	
private:	
	bool			CanMove(Pos pos);
	
private:
	// ¿ì¼ö¹ý
	void			FindPath_RIghtHand();
	void			FindPath_BFS();

private:	
	Pos				_pos = {};
		
	int32			_dir = DIR_UP;
		
	Board*			_board = nullptr;

	vector<Pos>		_path;
	uint32			_pathIndex = 0;
	uint64			_sumTick = 0;
};

