#include "stdafx.h"
#include "ConsoleHelper.h"

int main()
{
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
		
		// ������
	

	
	}
}