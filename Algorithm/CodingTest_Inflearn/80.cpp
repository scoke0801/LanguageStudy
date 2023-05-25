#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct Node
{
	int to, cost;
	Node(int to, int cost) :to(to), cost(cost) {}
};

class Comper {
public:
	bool operator()(const Node& lhs, const Node& rhs) {
		return lhs.cost > rhs.cost;
	}
};
int main()
{
	int N, M;
	cin >> N >> M;

	vector<vector<Node>> vec(N + 1);
	for (int i = 0; i < M; ++i) {
		int from, to, cost;
		cin >> from >> to >> cost;

		vec[from].push_back({ to,cost });
	}

	vector<int> dist(N + 1, INT_MAX);
	vector<bool> visited(N + 1, false);

	priority_queue<Node, vector<Node>, Comper> pq;

	pq.push({1,0});
	dist[1] = 0;
	while (!pq.empty())
	{
		Node node = pq.top();
		pq.pop();

		if (visited[node.to]) { continue; }
		visited[node.to] = true;
		
		for (auto next : vec[node.to]) {
			dist[next.to] = std::min(dist[next.to], next.cost + dist[node.to]);
			pq.push(next);
		}
	}

	for (int i = 2; i <= N; ++i) {
		cout << i << " : ";
		if (dist[i] == INT_MAX) {
			cout << "impossible" << "\n";
		}
		else {
			cout << dist[i] << "\n";
		}
	}
}