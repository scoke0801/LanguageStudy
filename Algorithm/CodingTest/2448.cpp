//#include <iostream>
//using namespace std;
// 
//char board[3072][6144];
//
//int N;
//
//void Recursive(int x, int y, int level)
//{
//	if (level == 3)
//	{
//		board[x][y] = '*';
//		board[x + 1][y - 1] = '*';
//		board[x + 1][y + 1] = '*';
//		for (int i = y - 2; i <= y + 2; ++i)
//		{
//			board[x + 2][i] = '*';
//		}
//		return;
//	}
//
//	Recursive(x, y, level / 2);
//	Recursive(x + level / 2, y - level / 2, level / 2);
//	Recursive(x + level / 2, y + level / 2, level / 2);
//}
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//	cout.tie(nullptr);
//
//	cin >> N;
//
//	for (int i = 0; i < N; ++i)
//	{
//		for (int j = 0; j < 2 * N; ++j)
//		{
//			board[i][j] = ' ';
//		}
//	}
//
//	Recursive(0, N - 1, N);
//
//	for (int i = 0; i < N; ++i)
//	{
//		for (int j = 0; j < 2 * N; ++j)
//		{
//			std::cout << board[i][j];
//		}
//		cout << "\n";
//	}
//
//	return 0;
//}