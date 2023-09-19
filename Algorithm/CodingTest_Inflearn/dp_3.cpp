//#include <iostream>
//
//int dp[100];
//
//int Dfs(int n) {
//	if (dp[n] != 0) { return dp[n]; }
//	if (n == 1) { return 1; }
//	if (n == 2) { return 2; }
//
//	return dp[n] = Dfs(n - 2) + Dfs(n - 1);
//}
//int main()
//{
//	std::cout << Dfs(30);
//}