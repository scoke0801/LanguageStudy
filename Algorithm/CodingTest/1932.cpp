//#include <iostream>
//#include <climits>
//using namespace std;
//
//constexpr int MAX_CASE = 500;
//
//
//int dp[MAX_CASE + 1][MAX_CASE + 1] = { 0, };
//short input[MAX_CASE + 1][MAX_CASE + 1] = { 0, };
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	int N;
//	cin >> N;
//
//	for (int i = 0; i < N; ++i) 
//	{
//		for (int j = 0; j <= i; ++j)
//		{
//			cin >> input[i][j];
//		}
//	}
//	
//	dp[0][0] = input[0][0];
//
//	int ans = 0;
//	for (int i = 1; i <= N; ++i)
//	{
//		for (int j = 0; j <= i; ++j)
//		{
//			int left = j - 1, right = j;
//			if (left >= 0)
//			{
//				left = dp[i - 1][left];
//			}
//			else {
//				left = INT_MIN;
//			}
//
//			if (right < i)
//			{
//				right = dp[i - 1][right];
//			}
//			else {
//				right = INT_MIN;
//			}
//
//			dp[i][j] = std::max(left, right) + input[i][j];
//			ans = std::max(ans, dp[i][j]);
//		}
//	}
//
//	std::cout << ans << "\n";
//}