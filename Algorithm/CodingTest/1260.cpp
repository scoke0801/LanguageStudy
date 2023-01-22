//#include <iostream>
//#include <vector>
//#include <queue>
//#include <algorithm>
//using namespace std;
//
//struct Node
//{
//	vector<Node*> links;
//	bool visited = false;
//	int num;
//
//	Node() {
//		static int NUM = 0;
//		num = NUM++;
//	}
//	void Connect(Node* node) {
//		links.push_back(node);
//		node->links.push_back(this);
//	}
//
//	bool operator<(const Node& other) {
//		return num < other.num;
//	}
//};
//
//void DFS(Node* node)
//{
//	if (node->visited == true) { return; }
//
//	cout << node->num << " ";
//	node->visited = true;
//	
//	for (Node* node : node->links) {
//		DFS(node);
//	}
//}
//
//void BFS(Node* node)
//{
//	queue<Node*> q;
//	q.push(node);
//
//	while (q.empty() == false) {
//		Node* curNode = q.front();
//		q.pop();
//
//		if (curNode->visited == true) { continue; }
//		cout << curNode->num << " ";
//		curNode->visited = true;
//
//		for (Node* node : curNode->links) {
//			if (node->visited == false) {
//				q.push(node);
//			}
//		}
//	}
//}
//
//vector<Node> vec;
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	int N, M, V;
//
//	cin >> N >> M >> V;
//	vec.resize(N + 1);
//	for (int i = 0; i < M; ++i) {
//		int start, end;
//		cin >> start >> end;
//		
//		// 노드 연결.
//		vec[start].Connect(&vec[end]);
//	}
//
//	// 작은 순서부터 방문할 수 있도록 정렬
//	for (Node& node : vec) {
//		if (node.links.empty()) { continue; }
//		std::sort(node.links.begin(), node.links.end(), [](const Node* a, const Node* b) { return a->num < b->num; });
//	}
//	
//	DFS(&vec[V]);
//
//	// 방문 여부 초기화.
//	for (Node& node : vec) {
//		node.visited = false;
//	}
//	cout << "\n";
//
//	BFS(&vec[V]);
//
//	return 0;
//}