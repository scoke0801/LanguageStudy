//#include <iostream>
//using namespace std;
//
//constexpr int MAX_CASE = 1000;
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	int N;
//	cin >> N;
//
//	int dp[MAX_CASE][2] = {0,};
//	int nums[MAX_CASE] = { 0, };
//	for (int i = 0; i < N; ++i)
//	{
//		cin >> nums[i];
//	}
//
//	for (int i = 0; i < N; ++i)
//	{
//		dp[i][0] = 1;
//
//		int temp = 0;
//		for (int j = i - 1; j >= 0; --j)
//		{
//			if (nums[j] >= nums[i]) { continue; }
//			temp = std::max(temp, dp[j][0]);
//		}
//
//		dp[i][0] = temp + 1;
//	}
//
//	for (int i = N - 1; i >= 0; --i)
//	{
//		dp[i][1] = 1;
//
//		for (int j = i + 1; j < N; ++j) 
//		{
//			if (nums[j] >= nums[i]) { continue; }
//			dp[i][1] = std::max(dp[i][1], dp[j][1] + 1);
//		}
//	}
//	int ans = 0;
//	for (int i = 0; i < N; ++i)
//	{
//		ans = std::max(ans, dp[i][0] + dp[i][1]);
//	}
//	// 1 2 3 4 5 2 1
//	// 1 2 3 4 5 2 1
//
//	std::cout << ans - 1;
//}