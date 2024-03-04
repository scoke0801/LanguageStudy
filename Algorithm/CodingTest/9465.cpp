//#include <iostream>
//#include <cstring>
//using namespace std;
//
//int board[2][100000];
//int dp[2][100000];
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//	cout.tie(nullptr);
//
//	int T;
//	cin >> T;
//
//	for (int t = 0; t < T; ++t)
//	{
//		int N;
//		cin >> N;
//		memset(board, -1, sizeof(board));
//		memset(dp, -1, sizeof(dp));
//		for (int j = 0; j < 2; ++j)
//		{
//			for (int i = 0; i < N; ++i)
//			{
//				cin >> board[j][i];
//			}
//		}
//
//		if (N == 1) 
//		{
//			std::cout << std::max(board[0][0], board[1][0]) << "\n";
//			continue;
//		}
//		 
//		dp[0][0] = board[0][0];
//		dp[1][0] = board[1][0]; 
//
//		dp[0][1] = dp[1][0] + board[0][1];
//		dp[1][1] = dp[0][0] + board[1][1]; 
//
//		for (int i = 2; i < N; ++i)
//		{ 
//			int prevMax = std::max(dp[0][i - 2], dp[1][i - 2]);
//			int up = std::max(dp[1][i - 1], prevMax);
//			int down = std::max(dp[0][i - 1], prevMax);
//
//			dp[0][i] = up + board[0][i];
//			dp[1][i] = down + board[1][i]; 
//		}
//
//		std::cout << std::max(dp[0][N-1], dp[1][N-1]) << "\n";
//	}
//}
