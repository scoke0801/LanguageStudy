//#include <iostream>
//using namespace std;
//
//int N, M;
//
//bool visited[10];
//int start = 0;
//int path[10];
//void Dfs(int level)
//{
//	if (level == M)
//	{
//		for (int i = 0; i < M; ++i) {
//			std::cout << path[i] << " ";
//		}
//
//		std::cout << "\n";
//	}
//
//	for (int i = 1; i <= N; ++i)
//	{
//		if (visited[i]) { continue; }
//		visited[i] = true;
//		path[level] = i;
//		Dfs(level + 1);
//		path[level] = 0;
//		visited[i] = false;
//	}
//}
//
//int main()
//{
//	cin >> N >> M;
//
//	for (int i = 1; i <= N; ++i)
//	{
//		visited[i] = true;
//		path[0] = i;
//		start = i;
//		Dfs(1);
//		path[i] = 0;
//		visited[i] = false;
//	}
//}