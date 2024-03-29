//#include <iostream>
//#include <vector>
//#include <climits>
//#include <queue>
//using namespace std;
//
//std::vector < std::vector<std::pair<int, int>>> graph(1001);
//std::vector<int> cost(1001, INT_MAX);
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//	cout.tie(nullptr);
//
//	int N, M;
//	cin >> N >> M;
//
//	for (int i = 0; i < M; ++i)
//	{
//		int start, end, cost;
//		cin >> start >> end >> cost;
//		graph[start].push_back(std::make_pair(end, cost));
//	}
//
//	int start, end;
//	cin >> start >> end;
//
//	cost[start] = 0;
//
//	std::priority_queue<std::pair<int, int>> pq;
//	pq.push({ cost[start], start });
//
//	while (pq.empty() == false)
//	{
//		int cur = pq.top().second;
//		int curCost = pq.top().first * -1;
//		pq.pop();
//
//		if (cost[cur] < curCost) { continue; }
//
//		for (int i = 0; i < graph[cur].size(); ++i)
//		{
//			int next = graph[cur][i].first;
//			int nextCost = curCost + graph[cur][i].second;
//
//			if (nextCost < cost[next])
//			{
//				cost[next] = nextCost;
//				pq.push({ nextCost * -1, next });
//			}
//		}
//	}
//
//	std::cout << cost[end] << "\n";
//	return 0;
//}
