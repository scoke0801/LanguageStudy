//#include <iostream>
//using namespace std;
//
//int N, M;
//int path[9];
//bool visited[9];
//void Dfs(int cur, int level)
//{
//	if (level == M)
//	{
//		for (int i = 0; i < level; ++i)
//		{
//			std::cout << path[i] << " ";
//		}
//		std::cout << "\n";
//	}
//	 
//	for (int i = cur; i <= N; ++i)
//	{
//		if (visited[i]) { continue; }
//		path[level] = i;
//		visited[i] = true;
//		Dfs( i + 1, level + 1);
//		visited[i] = false;
//	}
//
//}
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//	cin >> N >> M;
//
//	Dfs(1, 0);
//
//	return 0;
//}