//#include <iostream>
//#include <vector>
//#include <climits>
//using namespace std;
//
//std::vector<std::vector<int>> board;
//int N;
//int ans = INT_MAX;
//
//std::vector<bool> visit;
//int start = 0;
//void dfs(int sum, int idx, int level)
//{
//	if (level == N)
//	{
//		if (board[idx][start] == 0) { return; }
//
//		ans = std::min(ans, sum + board[idx][start]);
//		
//		return;
//	}
//
//	for (int i = 0; i < N; ++i) {
//		if (board[idx][i] == 0) { continue; }
//		if (visit[i]) { continue; }
//
//		visit[i] = true;
//		dfs(sum + board[idx][i], i, level + 1);
//		visit[i] = false;
//	}
//}
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	cin >> N;
//
//	visit.resize(N);
//	board = std::vector<std::vector<int>>(N, std::vector<int>(N));
//	for (int i = 0; i < N; ++i) {
//		for (int j = 0; j < N; ++j) {
//			cin >> board[i][j];
//		}
//	}
//
//	for (int i = 0; i < N; ++i) {
//		visit[i] = true;
//		start = i;
//		dfs(0, i, 1);
//		visit[i] = false;
//	}
//
//	std::cout << ans << "\n";
//}