//#include <iostream>
//#include <vector>
//using namespace std;
//
//struct Node
//{
//	int to;
//	int cost;
//};
//int N, M;
//int ans = INT_MAX;
//
//vector< vector<Node> > vec;
//vector<bool> visit;
//
//void dfs(const Node& node, int costAcc)
//{
//	if (node.to == N)
//	{
//		ans = std::min(costAcc, ans);
//		return;
//	}
//
//	if (visit[node.to]) { return; }
//
//	visit[node.to] = true;
//	for (const Node& _node : vec[node.to])
//	{
//		dfs(_node, costAcc + _node.cost);
//	}
//	visit[node.to] = false;
//}
//int main()
//{
//	cin >> N >> M;
//	vec.resize(N + 1);
//	visit.resize(N + 1);
//
//	for (int i = 0; i < M; ++i) {
//		int from, to, cost;
//		cin >> from >> to >> cost;
//
//		vec[from].push_back({to, cost});
//	}
//
//
//	visit[1] = true;
//	for (const Node& node : vec[1])
//	{
//		dfs(node, node.cost);
//	}
//
//	cout << ans;
//}