//#include<iostream>
//#include <vector>
//using namespace std;
//
//int dp[21][21];
//
//int Binomal(int n, int r)
//{
//	if (r == 0 || n == r) {
//		return 1;
//	}
//
//	if (dp[n][r] == 0) {
//		dp[n][r] = Binomal(n - 1, r - 1) + Binomal(n - 1, r);
//	}
//	return dp[n][r];
//}
//
//int main()
//{
//	int N, R;
//	cin >> N >> R;
//	
//	//n - 1	    n - 1
//	//	r		r - 1
//
//	cout << Binomal(N, R);
//
//}