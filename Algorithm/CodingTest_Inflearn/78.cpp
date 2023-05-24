//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//constexpr int SIZE = 101;
//int disjoint[SIZE];
//
//int V, E;
//
//int Find(int n)
//{
//	if (n == disjoint[n]) { return n; }
//	
//	return disjoint[n] = Find(disjoint[n]);
//}
//
//void Union(int a, int b)
//{
//	a = Find(a);
//	b = Find(b);
//	if (a != b)
//	{
//		disjoint[a] = b;
//	}
//}
//
//struct Edge {
//	int from;
//	int to;
//	int cost;
//
//	Edge(int from, int to, int cost): from(from), to(to), cost(cost){}
//
//	bool operator< (const Edge& other)
//	{
//		return cost < other.cost;
//	}
//};
//
//int main()
//{
//	cin >> V >> E;
//
//	for (int i = 1; i <= V; ++i) {
//		disjoint[i] = i;
//	}
//
//	vector<Edge> vec;
//	for (int i = 0; i < E; ++i) {
//		int from, to, cost;
//		cin >> from >> to >> cost;
//
//		vec.push_back({ from,to,cost });
//	}
//
//	std::sort(vec.begin(), vec.end());
//
//	int cost = 0;
//	for (auto edge : vec)
//	{
//		if (Find(edge.from) == Find(edge.to)) {
//			continue;
//		}
//
//		Union(edge.from, edge.to);
//		cost += edge.cost;
//	}
//
//	cout << cost << "\n";
//}