//#include <iostream>
//#include <vector>
//using namespace std;
//
//std::vector<std::vector<int>> buffer;
//std::vector<int> parent;
//void Dfs(int prev, int cur)
//{
//	if (parent[cur] != 0) { return; }
//
//	for (int i = 0; i < buffer[cur].size(); ++i)
//	{
//		parent[cur] = prev;
//		Dfs(cur, buffer[cur][i]);
//	}
//}
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//	cout.tie(nullptr);
//
//	int N;
//	cin >> N;
//
//	buffer.resize(N + 1);
//	parent.resize(N + 1);
//	for (int i = 0; i < N - 1; ++i)
//	{
//		int from, to;
//		cin >> from >> to;
//		buffer[from].push_back(to);
//		buffer[to].push_back(from);
//	}
//
//	for (int i = 0; i < buffer[1].size(); ++i)
//	{
//		Dfs(1, buffer[1][i]);
//	}
//
//	for (int i = 2; i <= N; ++i)
//	{
//		std::cout << parent[i] << "\n";
//	}
//}