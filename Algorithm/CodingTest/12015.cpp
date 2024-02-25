//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int board[1000000];
//int dp[1000000];
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//	cout.tie(nullptr);
//
//	int N;
//
//	cin >> N;
//	for (int i = 0; i < N; ++i)
//	{
//		cin >> board[i];
//	}
//
//	dp[0] = board[0];
//	int idx = 1; 
//	for (int i = 1; i < N; ++i)
//	{
//		std::cout << "[i:" << i << "] ";
//		if (dp[idx - 1] < board[i]) {
//			dp[idx++] = board[i];
//		}
//		else
//		{
//			int value = std::lower_bound(std::begin(dp), std::begin(dp) + idx, board[i]) - std::begin(dp);
//		
//			dp[value] = board[i];
//
//		}
//
//		std::cout << "L-Idx: " << idx << " ";
//		for (int j = 0; j < idx; ++j)
//		{
//			std::cout << dp[j] << " ";
//		}
//		std::cout << "board[" << i << "]:" << board[i] << "\n";
//	}
//
//	std::cout << idx << "\n";
//}