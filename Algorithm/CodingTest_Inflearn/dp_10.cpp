//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	int N, M;
//	cin >> N;
//
//	std::vector<int> coins(N);
//	for (int i = 0; i < N; ++i) {
//		cin >> coins[i];
//	}
//	cin >> M;
//
//	std::vector<int> dp(M+1, INT_MAX);
//	for (int i = 0; i < N; ++i) {
//		for (int j = coins[i]; j <= M; ++j) {
//			dp[j] = std::min(dp[j - coins[i]] + 1, dp[j]);
//		}
//	}
//
//	cout << dp[M] << "\n";
//}