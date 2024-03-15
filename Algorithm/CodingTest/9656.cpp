//#include <iostream>
//
//using namespace std;
//constexpr int MAX_NUM = 2222;
//
//int N;
//int dp[MAX_NUM];
// 
//int main(void)
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//	cout.tie(nullptr);
//
//	cin >> N;
//
//	dp[1] = 0;
//	dp[2] = 1;
//	dp[3] = 0;
//
//	for (int i = 4; i <= N; ++i)
//	{
//		if (dp[i - 1] == 0 || dp[i - 3] == 0)
//		{
//			dp[i] = 1;
//		}
//		else
//		{
//			dp[i] = 0;
//		}
//	}
//	if (dp[N] == 1) {
//		std::cout << "SK";
//	}
//	else {
//		std::cout << "CY";
//	}
//	return 0;
//}
//