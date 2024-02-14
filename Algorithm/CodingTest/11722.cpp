//#include <iostream>
//#include <vector>
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
//	int nums[MAX_CASE] = { 0, };
//	int dp[MAX_CASE] = { 0, };
//
//	for (int i = 0; i < N; ++i)
//	{
//		cin >> nums[i];
//	}
//
//	int ans = 0;
//	for (int i = 0; i < N; ++i)
//	{
//		dp[i] = 1;
//		int temp = 0;
//		for (int j = 0; j < i; ++j)
//		{
//			if (nums[i] >= nums[j]) { continue; }
//			dp[i] = std::max(dp[j] + 1, dp[i]);
//		}
//		ans = std::max(ans, dp[i]);
//	}
//	std::cout << ans << "\n";
//}