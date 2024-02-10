//#include <iostream>
//#include <vector>
//using namespace std;
//
//std::vector<int> dp;
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	int N;
//	cin >> N;
//
//	if (N == 1) { std::cout << 1; return 0; }
//
//	dp.resize(N + 1);
//
//	dp[0] = 0;
//	dp[1] = 1;
//
//	dp[2] = 3;
//
//	for (int i = 3; i <= N; ++i)
//	{
//		dp[i] = (dp[i - 1] + dp[i - 2] * 2) % 10007;
//	}
//
//	std::cout << dp[N];
//}