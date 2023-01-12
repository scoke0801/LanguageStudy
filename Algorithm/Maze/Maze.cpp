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
#pragma region 프레임 관리
		const uint64 currentTick = ::GetTickCount64();
		const uint64 deltaTick = currentTick - lastTick;
		lastTick = currentTick;
#pragma endregion
		// 입력
		
		// 로직
		player.Update(currentTick);
		
		// 렌더링
		board.Render();
	
	}
}