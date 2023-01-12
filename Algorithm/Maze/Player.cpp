#include "stdafx.h"
#include "Player.h"
#include "board.h"

void Player::Init(Board* board)
{
	_pos = board->GetEnterPos();

	_board = board;
}

void Player::Update(uint64 deltaTick)
{

}
