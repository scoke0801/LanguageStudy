//#include <iostream>
//#include <climits>
//using namespace std;
//
//constexpr int R = 0;
//constexpr int G = 1;
//constexpr int B = 2;
//int house[1000][3];
//int dp[1000][3];
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
//		for (int j = 0; j < 3; ++j)
//		{
//			cin >> house[i][j];
//		}
//	}
//
//	int ans = 10000001;
//	for (int RGB = R; RGB <= B; ++RGB)
//	{
//		for (int i = R; i <= B; ++i)
//		{
//			if (i == RGB) {
//				dp[0][i] = house[0][i];
//			}
//			else {
//				dp[0][i] = 10000001;
//			}
//		}
//
//		for (int i = 1; i < N; ++i)
//		{ 
//			dp[i][R] = std::min(dp[i - 1][G], dp[i - 1][B]) + house[i][R];
//			dp[i][G] = std::min(dp[i - 1][R], dp[i - 1][B]) + house[i][G];
//			dp[i][B] = std::min(dp[i - 1][R], dp[i - 1][G]) + house[i][B];
//		}
//
//		for (int i = R; i <= B; ++i)
//		{
//			if (i == RGB) { continue; }
//			ans = std::min(ans, dp[N - 1][i]);
//		}
//	}
//
//	std::cout << ans << "\n"; 
//}