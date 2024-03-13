//#include <iostream>
//#include <vector>
//#include <queue>
//#include <algorithm>
//using namespace std;
//
//using Pair = std::pair<int, int>;
//int V;
//std::vector<std::vector<Pair>> graph;
//int visited[100001];
//
//int maxDist, maxPos;
//void Dfs(int cur, int distSum)
//{
//	if (visited[cur]) { return; }
//
//	if (maxDist < distSum)
//	{
//		maxDist = distSum;
//		maxPos = cur;
//	}
//	visited[cur] = true;
//
//	for (int i = 0; i < graph[cur].size(); ++i)
//	{
//		int to = graph[cur][i].first;
//		int dist = graph[cur][i].second;
//		Dfs(to, distSum + dist);
//	}
//}
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//	cout.tie(nullptr);
//
//	int V;
//	cin >> V;
//	graph.resize(V + 1);
//
//	for (int i = 0; i < V; ++i)
//	{
//		int from;
//		cin >> from;
//
//		while (true)
//		{
//			int to, cost;
//			cin >> to;
//			if (to == -1) { break; }
//			cin >> cost;
//
//			graph[from].push_back(std::make_pair(to, cost));
//			graph[to].push_back(std::make_pair(from, cost));
//		}
//	}
//
//	Dfs(1, 0);
//
//	std::fill_n(visited, V + 1, 0);
//	maxDist = 0;
//
//	Dfs(maxPos, 0);
//
//	std::cout << maxDist << "\n";
//
//	return 0;
//}