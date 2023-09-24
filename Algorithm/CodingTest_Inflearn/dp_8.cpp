//#include <iostream>
//#include <vector>
//using namespace std;
//
//vector<vector<int>> vec;
//vector<vector<int>> dp;
//
//int DFS(int x, int y) {
//	if (dp[x][y] != 0) { return dp[x][y]; }
//
//	if (x == 0 && y == 0) { return vec[0][0];}
//
//	if (y == 0) { return dp[x][y] = DFS(x - 1, y) + vec[x][y]; }
//	else if (x == 0) { return dp[x][y] = DFS(x, y - 1) + vec[x][y]; }
//
//	return dp[x][y] = std::min(
//		DFS(x - 1, y),
//		DFS(x, y - 1)
//	) + vec[x][y];
//}
//int main()
//{
//	int N = 0;
//
//	cin >> N;
//	vec.resize(N);
//	dp.resize(N);
//	for (int i = 0; i < N; ++i) {
//		vec[i].resize(N);
//		dp.resize(N);
//		for (int j = 0; j < N; ++j) {
//			cin >> vec[i][j];
//		}
//	}
//
//	cout << DFS(N - 1, N - 1);
//}