//#include <iostream>
//#include <algorithm>
//#include <climits> 
//#include <cmath>
//using namespace std;
//
//int N, M;
//int board[8];
//int path[8];
//bool visited[8]; 
//void Dfs(int level)
//{
//	if (level == M)
//	{ 
//		for (int i = 0; i < level; ++i)
//		{
//			std::cout << path[i] << " ";
//		}
//		std::cout << "\n";
//		return;
//	}
//
//	int prev = 0;
//	for (int i = 0; i < N; ++i)
//	{
//		if (visited[i]) { continue; }
//		if (board[i] == prev) { continue; }
//		
//		visited[i] = true;
//		prev = path[level] = board[i];
//		Dfs(level + 1);
//		visited[i] = false;
//	}
//}
//int main()
//{
//	std::fill_n(board, sizeof(board) / sizeof(int), INT_MAX);
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	cin >> N >> M;
//
//	for (int i = 0; i < N; ++i)
//	{
//		cin >> board[i];
//	}
//
//	std::sort(std::begin(board), std::end(board));
//
//	Dfs(0);
//}