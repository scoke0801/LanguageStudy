//#include <iostream>
//#include <vector>
//using namespace std;
//
//constexpr int MAX_CASE = 1000;
//int main()
//{
//	int N;
//	cin >> N;
//	
//	std::vector<int> nums(N);
//	std::vector<int> dp(N);/*
//	int nums[MAX_CASE] = { 0, };
//	int dp[MAX_CASE] = { 0, };*/
//	for (int i = 0; i < N; ++i)
//	{
//		cin >> nums[i];
//	}
//
//	dp[0] = nums[0];
//	
//	int ans = dp[0];
//	for (int i = 1; i < N; ++i)
//	{
//		int temp = 0;
//		for (int j = i - 1; j >= 0; --j)
//		{
//			if (nums[i] <= nums[j]) { continue; }
//
//			temp = std::max(temp, dp[j]);
//		}
//		dp[i] = temp + nums[i];
//		ans = std::max(ans, dp[i]);
//	}
//
//	std::cout << ans << "\n";
//}