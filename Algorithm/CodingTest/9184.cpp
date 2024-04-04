//#include <iostream>
//using namespace std;
//
//int dp[21][21][21];
//
//int W(int a, int b, int c)
//{
//	if (a <= 0 || b <= 0 || c <= 0)
//	{
//		return 1;
//	}
//
//	if (a > 20 || b > 20 || c > 20)
//	{
//		return W(20, 20, 20);
//	}
//
//	if (dp[a][b][c] != 0) { return dp[a][b][c]; }
//
//	if (a < b && b < c)
//	{
//		return dp[a][b][c] = W(a, b - 1, c - 1) + W(a, b - 1, c - 1) - W(a, b - 1, c);
//	}
//
//	return dp[a][b][c] = W(a - 1, b, c) + W(a - 1, b - 1, c) + W(a - 1, b, c - 1) - W(a - 1, b - 1, c - 1);
//}
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//	cout.tie(nullptr);
//
//	int a, b, c;
//	while (true)
//	{
//		cin >> a >> b >> c;
//		if (a == -1 && b == -1 && c == -1)
//		{
//			break;
//		}
//
//		int num = W(a, b, c);
//		std::cout << "w(" << a << ", " << b << ", " << c << ") = " << num << "\n";
//	}
//	return 0;
//}