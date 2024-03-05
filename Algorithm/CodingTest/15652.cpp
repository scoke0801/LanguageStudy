//#include <iostream>
//
//using namespace std;
//
//int N, M;
//int path[9];
//void Dfs(int cur, int level)
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
//	for (int i = cur; i <= N; ++i)
//	{
//		path[level] = i;
//		Dfs(i, level + 1);
//	}
//}
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	cin >> N >> M;
//
//	Dfs(1, 0);
//}