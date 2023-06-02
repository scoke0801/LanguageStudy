//#include <iostream>
//#include <vector>
//using namespace std;
//
//struct Node {
//	int to, cost;
//	Node(int to, int cost) : to(to), cost(cost) {}
//};
//int main()
//{
//	int N, M;
//	cin >> N >> M;
//
//	vector<vector<int>> path(N + 1, vector<int>(N + 1));
//	for (int i = 0; i < M; ++i) {
//		int from, to, cost;
//		cin >> from >> to >> cost;
//
//		path[from][to] = cost;
//	}
//
//	vector<int> dist(N + 1, INT_MAX);
//	dist[1] = 0;
//
//	for (int i = 1; i <= N; ++i) {
//		for (int j = 1; j <= N; ++j) {
//			if (path[i][j] == 0) { continue; }
//
//			dist[j] = std::min(dist[j], dist[i] + path[i][j]);
//		}
//	}
//
//	cout << dist[N];
//}