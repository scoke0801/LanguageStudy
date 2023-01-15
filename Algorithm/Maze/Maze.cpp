#include "stdafx.h"
#include "ConsoleHelper.h"
#include "Board.h"
#include <ctime>
#include "Player.h"

Board board;
Player player;
int main()
{
	srand(UINT(time(nullptr)));

	board.Init(25, &player);
	player.Init(&board);

	uint64 lastTick = 0;

	while (true)
	{
#pragma region ������ ����
		const uint64 currentTick = ::GetTickCount64();
		const uint64 deltaTick = currentTick - lastTick;
		lastTick = currentTick;
#pragma endregion
		// �Է�
		
		// ����
		player.Update(deltaTick);
		
		// ������
		board.Render();
	
	}
}