//#include <iostream>
//#include <algorithm>
//#include <algorithm>
//#include <climits>
//using namespace std;
//
//int N, M;
//int board[8];
//int path[8];
//
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
//	for (int i = idx; i < N; ++i)
//	{
//		path[level] = board[i];
//		Dfs(i, level + 1);
//	}
//}
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	std::fill_n(std::begin(board), sizeof(board) / sizeof(int), INT_MAX);
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
//	Dfs(0, 0);
//}