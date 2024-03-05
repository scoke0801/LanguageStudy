//#include <iostream>
//#include <algorithm>
//#include <algorithm>
//#include <climits>
//using namespace std;
//
//int N, M;
//int board[8];
//int path[8];
//bool visited[8];
//void Dfs(int idx, int level)
//{
//	if (level == M)
//	{
//		for (int i = 0; i < M; ++i)
//		{
//			std::cout << path[i] << " ";
//		}
//		std::cout << "\n";
//		return;
//	}
//
//	for (int i = 0; i < N; ++i)
//	{
//		if (visited[i]) { continue; }
//		visited[i] = true;
//		path[level] = board[i];
//		Dfs(i, level + 1);
//		visited[i] = false;
//	}
//}
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//	
//	std::fill_n(std::begin(board), _countof(board), INT_MAX);
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//	cin >> N >> M;
//
//	for (int i = 0; i < N; ++i)
//	{
//		cin >> board[i];
//	}
//
//	std::sort(std::begin(board), std::end(board));
//
//	Dfs(-1, 0);
//}