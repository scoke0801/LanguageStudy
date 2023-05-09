//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//int N, M;
//int ans;
//
//bool visit[21];
//void dfs(const vector<vector<int>> vec, int cur)
//{
//	if (cur == N) {
//		++ans;
//		return;
//	}
//	
//	if (visit[cur]) { return; }
//
//	visit[cur] = true;
//	for (size_t i = 0; i < vec[cur].size(); ++i) {
//		if (visit[vec[cur][i]]) {
//			continue;
//		}
//		dfs(vec, vec[cur][i]);
//	}
//	visit[cur] = false;
//}
//
//int main()
//{
//	cin >> N >> M;
//
//	vector<vector<int> > vec(N + 1);
//	for (int i = 0; i < M; ++i) {
//		int from, to;
//		cin >> from >> to;
//		vec[from].push_back(to);
//	}
//
//	visit[1] = true;
//	for (size_t i = 0; i < vec[1].size(); ++i) {
//		dfs(vec, vec[1][i]);
//	}
//
//	cout << ans;
//}