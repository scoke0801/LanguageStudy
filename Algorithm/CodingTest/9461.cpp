//#include <iostream>
//using namespace std;
//long long dp[101];
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	int T;
//	cin >> T;
//
//	dp[0] = dp[1] = dp[2] = dp[3] = 1;
//
//	for (int i = 4; i <= 100; ++i)
//	{
//		dp[i] = dp[i - 2] + dp[i - 3];
//	}
//
//	int num;
//	for (int i = 0; i < T; ++i)
//	{
//		cin >> num;
//		std::cout << dp[num] << "\n";
//	}
//}