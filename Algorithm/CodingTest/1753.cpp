//#include <iostream>
//#include <queue>
//#include <vector>
//#include <algorithm>
//#include <climits>
//
//using namespace std;
//
//using Pair = std::pair<int, int>;
//
//std::vector<std::vector<Pair>> graph;
//
//int values[20001];
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	int V, E, K;
//	cin >> V >> E >> K;
//
//	std::fill_n(values, V + 1, INT_MAX);
//	values[K] = 0;
//
//	graph.resize(V + 1);
//	for (int i = 0; i < E; ++i)
//	{
//		int from, to, cost;
//		cin >> from >> to >> cost;
//
//		graph[from].push_back(std::make_pair(to, cost));
//	}
//
//	std::priority_queue<Pair, std::vector<Pair>, std::greater<Pair>> pq;
//	pq.push(std::make_pair(0, K));
//
//	while (pq.empty() == false)
//	{
//		int cost = pq.top().first;
//		int cur = pq.top().second;
//		pq.pop();
//
//		for (int i = 0; i < graph[cur].size(); ++i)
//		{
//			int to = graph[cur][i].first;
//			int inner_cost = graph[cur][i].second;
//
//			if (cost + inner_cost < values[to])
//			{
//				values[to] = cost + inner_cost;
//				pq.push(std::make_pair(values[to], to));
//			}
//		}
//	}
//
//	for (int i = 1; i <= V; ++i)
//	{
//		if (values[i] == INT_MAX) 
//		{
//			std::cout << "INF\n";
//		}
//		else 
//		{
//			std::cout << values[i] << "\n";
//		}
//	}
//}