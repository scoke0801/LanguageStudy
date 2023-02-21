#include<iostream>
#include <vector>
using namespace std;

vector<vector<char>>board;
int cache[20000];

enum
{
	DEFAULT = 2,
	WIN = 1,
	DRAW = 0,
	LOSE = -1,
};

bool IsFinished(char turn)
{
	// �¿�
	for (int i = 0; i < 3; ++i)
	{
		if (board[i][0] == turn && board[i][1] == turn && board[i][2] == turn) {
			return true;
		}
	}
	// ����
	for (int i = 0; i < 3; ++i)
	{
		if (board[0][i] == turn && board[1][i] == turn && board[2][i] == turn) {
			return true;
		}
	}
	// �밢��
	if (board[0][0] == turn && board[1][1] == turn && board[2][2] == turn) {
		return true;
	}

	if (board[0][2] == turn && board[1][1] == turn && board[2][0] == turn) {
		return true;
	}

	return false;
}
int HashKey()
{
	int ret = 0;
	for (int y = 0; y < 3; ++y)
	{
		for (int x = 0; x < 3; ++x)
		{
			ret = ret * 3;
			if (board[y][x] == 'o') {
				ret += 1;
			}
			else if(board[y][x] == 'x'){
				ret += 2;
			}
		}
	}
	return ret;
}

int CanWin(char turn)
{
	// ���� ���
	if (IsFinished('o' + 'x' - turn)) {
		return LOSE;
	}

	// ĳ�� Ȯ��.
	int key = HashKey();
	int& ret = cache[key];
	if (ret != DEFAULT) {
		return ret;
	}

	// Ǯ��
	int minValue = DEFAULT;
	for (int y = 0; y < 3; ++y)
	{
		for (int x = 0; x < 3; ++x) {
			if (board[y][x] != '.')
			{
				continue;
			}
			board[y][x] = turn;
			
			// ������ �й��ϴ°� ���� ���� ���̽�.
			minValue = min(minValue, CanWin('o' + 'x' - turn));

			board[y][x] = '.';
		}
	}

	if (minValue == DRAW || minValue == DEFAULT) {
		return ret = DRAW;
	}

	return ret = -minValue;
}

int main()
{
	board = vector<vector<char>>
	{
		{'o','x','x'},
		{'.','o','.'},
		{'o','.','.'},
	};

	for (int i = 0; i < 20000; ++i) {
		cache[i] = DEFAULT;
	}

	int win = CanWin('x');

	switch (win)
	{
	case WIN:
		cout << "win\n";
		break;
	case LOSE:
		cout << "lose\n";
		break;
	case DRAW:
		cout << "draw\n";
		break;
	}
}