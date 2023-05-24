#include<iostream>
#include <queue>
#include <vector>
using namespace std;


struct Node {
	int to;
	int cost;
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
	int V, E;
	cin >> V >> E;

	vector<vector<Node>> vec;
	vec.resize(V + 1);

	vector<bool> visited;
	visited.resize(V + 1);
	
	for (int i = 0; i < E; ++i) {
		int from, to, cost;
		cin >> from >> to >> cost;
	
		vec[to].push_back({ from,cost });
		vec[from].push_back({ to,cost });
	}

	priority_queue<Node, vector<Node>, Comper> pq;
	pq.push({1,0});

	int cost = 0;
	while (!pq.empty())
	{
		Node node = pq.top();
		pq.pop();

		if (visited[node.to]) { continue; }

		cost += node.cost;
		visited[node.to] = true;

		for (const Node& next : vec[node.to]) {
			pq.push(next);
		}
	}
	cout << cost << "\n";
}