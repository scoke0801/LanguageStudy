//#include <iostream>
//using namespace std;
//
//constexpr int MAX_CASE = 50000;
//int dp[MAX_CASE + 1];
//int N;
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	cin >> N;
//	
//	for (int i = 1; i * i <= N; ++i)
//	{
//		dp[i * i] = 1;
//	}
//
//	for (int i = 2; i <= N; ++i)
//	{
//		int cur = dp[i-1] + 1;
//		for (int j = 1; j * j <= i; ++j)
//		{
//			cur = std::min(dp[i - j * j] + 1, cur);
//		}
//		dp[i] = cur;
//	}
//	std::cout << dp[N];
//}