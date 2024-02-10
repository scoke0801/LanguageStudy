//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int N;
//std::vector<int> cost;
//std::vector<int> dp;
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	cin >> N;
//
//	cost.resize(N + 1);
//	dp.resize(N + 1);
//	for (int i = 1; i <= N; ++i) 
//	{
//		cin >> cost[i];
//	}
//
//	dp[1] = cost[1];
//
//	for (int i = 2; i <= N; ++i) 
//	{
//		int cur = 0;
//		for (int j = 1; j < cost.size(); ++j)
//		{
//			if (i - j < 0) { break; }
//			cur = std::max(cur, dp[i - j] + cost[j]);
//		}
//
//		dp[i] = cur;
//	}
//
//	std::cout << dp[N];
//}