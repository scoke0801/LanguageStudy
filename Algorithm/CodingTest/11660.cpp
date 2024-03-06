//#include<iostream>
//using namespace std;
//
//int N, M;
//int board[1025][1025];
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//	cout.tie(nullptr);
//
//	cin >> N >> M;
//	for (int i = 1; i <= N; ++i)
//	{
//		for (int j = 1; j <= N; ++j)
//		{
//			cin >> board[i][j];
//		}
//	}
//
//	for (int i = 1; i <= N; ++i)
//	{
//		for (int j = 1; j <= N; ++j)
//		{
//			board[i][j] += board[i-1][j];
//		}
//	}
//
//	for (int i = 1; i <= N; ++i)
//	{
//		for (int j = 1; j <= N; ++j)
//		{
//			board[i][j] += board[i][j - 1];
//		}
//	}
//
//	for (int i = 0; i < M; ++i)
//	{
//		int x1, y1, x2, y2;
//		cin >> x1 >> y1 >> x2 >> y2;
//
//		std::cout << board[x2][y2] - board[x1 - 1][y2] - board[x2][y1 - 1] + board[x1 - 1][y1 - 1] << "\n";
//	}
//}
