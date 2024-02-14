//#include <iostream>
//
//using namespace std;
//
//constexpr int MAX_CASE = 10000;
//
//int main() 
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	int N;
//	cin >> N;
//
//	int juice[MAX_CASE] = { 0, };
//	for (int i = 0; i < N; ++i)
//	{
//		cin >> juice[i];
//	}
//
//	int dp[MAX_CASE] = { 0, };
//	dp[0] = juice[0];
//	dp[1] = juice[0] + juice[1];
//	dp[2] = std::max(dp[1], std::max(dp[0] + juice[2], juice[1] + juice[2]));
//
//	for (int i = 3; i < N; ++i)
//	{
//		dp[i] = std::max(dp[i - 3] + juice[i - 1] + juice[i], dp[i - 2] + juice[i]);
//		dp[i] = std::max(dp[i - 1], dp[i]);
//	}
//
//	std::cout << dp[N - 1] << "\n";
//	return 0;
//}