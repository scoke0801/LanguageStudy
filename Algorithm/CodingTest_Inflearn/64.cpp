//#include <iostream>
//#include <vector>
//using namespace std;
//
//int N, M;
//int answer;
//bool visitied[21];
//
//void dfs(const vector<vector<int>>& vec, int from)
//{
//	if (from == N) {
//		++answer;
//		return;
//	}
//	if (visitied[from]) { return; }
//
//	visitied[from] = true;
//	for (int to : vec[from]) {
//		dfs(vec, to);
//	}
//	visitied[from] = false;
//}
//
//int main()
//{
//	int M;
//	cin >> N >> M;
//
//	vector<  vector<int> > vec(N + 1);
//
//	for (int i = 0; i < M; ++i) {
//		int from, to;
//		cin >> from >> to;
//
//		vec[from].push_back(to);
//	}
//
//	visitied[1] = true;
//	for (int from : vec[1]) {
//		dfs(vec, from);
//	}
//
//	cout << answer;
//}