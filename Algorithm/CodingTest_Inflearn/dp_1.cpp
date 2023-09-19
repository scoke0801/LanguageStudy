//#include <iostream>
//using namespace std;
//
//int dp[100];
//
//void Init() {
//	for (int i = 0; i < _countof(dp); ++i) {
//		dp[i] = -1;
//	}
//	dp[0] = 0;
//	dp[1] = 1;
//	dp[2] = 2;
//}
//
//void Calc(int N) {
//	if (dp[N] != -1) {
//		return;
//	}
//
//	for (int i = 3; i <= N; ++i) {
//		dp[i] = dp[i - 1] + dp[i - 2];
//	}
//}
//
//int main()
//{
//	Init();
//
//	int N = 7;
//	Calc(N);
//
//	cout << dp[N];
//}