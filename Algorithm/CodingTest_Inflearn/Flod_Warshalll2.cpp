//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	int N;
//	cin >> N;
//
//	vector<vector<int>> dist(N + 1, vector<int>(N + 1, 100));
//	vector<int> res(N + 1);
//	for (int i = 1; i <= N; ++i) {
//		dist[i][i] = 0;
//	}
//
//	while (true) {
//		int a, b;
//		cin >> a >> b;
//
//		if (a == -1 && b == -1) break;
//		dist[a][b] = 1;
//		dist[b][a] = 1;
//	}
//
//	for (int k = 1; k <= N; ++k) {
//		for (int i = 1; i <= N; ++i) {
//			for (int j = 1; j <= N; ++j) {
//				dist[i][j] = std::min(dist[i][j], dist[i][k] + dist[k][j]);
//			}
//		}
//	}
//
//	int ans = INT_MAX;
//	for (int i = 1; i <= N; ++i) {
//		for (int j = 1; j <= N; ++j) { 
//			res[i] = std::max(res[i], dist[i][j]);
//		}
//		ans = std::min(ans, res[i]);
//	}
//
//	int count = 0;
//	for (int i = 1; i <= N; ++i) {
//		if (res[i] == ans) {
//			++count;
//		}
//	}
//	cout << ans << " " << count << "\n";
//
//	for (int i = 1; i <= N; ++i) {
//		if (res[i] == ans) {
//			cout << i << " ";
//		}
//	}
//}