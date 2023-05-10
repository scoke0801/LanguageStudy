//#include <iostream>
//#include <vector>
//using namespace std;
//int ans = INT_MAX;
//int N, M;
//
//vector< vector<int>> vec;
//vector<bool> visit;
//
//void dfs(int cur, int costAcc)
//{
//	if (cur == N) {
//		ans = std::min(costAcc, ans);
//		return;
//	}
//
//	if (visit[cur]) { return; }
//
//	visit[cur] = true;
//	for (int i = 1; i <= N; ++i) {
//		if (vec[cur][i] == 0) { continue; }
//
//		dfs(i, vec[cur][i] + costAcc);
//	}
//	visit[cur] = false;
//}
//int main()
//{
//	cin >> N >> M;
//
//	vec.resize(N + 1);
//	for (int i = 0; i <= N; ++i) {
//		vec[i].resize(N + 1);
//	}
//
//	visit.resize(N + 1);
//	for (int i = 0; i < M; ++i)
//	{
//		int from, to, cost;
//		cin >> from >> to >> cost;
//
//		vec[from][to] = cost;
//	}
//
//	visit[1] = true;
//
//	for (int i = 1; i <= N; ++i) {
//		if (vec[1][i] == 0) { continue; }
//
//		dfs(i, vec[1][i]);
//	}
//
//	cout << ans << "\n";
//}