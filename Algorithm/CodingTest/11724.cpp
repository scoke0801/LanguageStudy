//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//static int Test = 0;
//struct Node {
//	bool visited = false;
//	vector<Node*> links;
//	
//	int data = 0;
//	
//	Node() {
//		data = Test++;
//	}
//	void Connect(Node* other) {
//		links.push_back(other);
//		other->links.push_back(this);
//	}
//};
//
//void dfs(Node* node)
//{
//	if (node->visited == true) { return; }
//	if (node->links.empty()) { return; }
//
//	node->visited = true;
//	for (Node* link : node->links) {
//		dfs(link);
//	}
//}
//
//std::vector<Node> v;
//int main_11724()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	int NodeCount, EdgeCount;
//	cin >> NodeCount >> EdgeCount;
//
//	v.resize(NodeCount + 1);
//	for (int i = 0; i < EdgeCount; ++i) {
//		int start, end;
//		cin >> start >> end;
//		
//		v[start].Connect(&v[end]);
//	}
//
//	int count = 0;
//	for (int i = 1; i <= NodeCount; ++i) {
//		if (v[i].visited == false) {
//			dfs(&v[i]);
//			++count;
//		}
//	}
//
//	cout << count << "\n";
//
//	return 0;
//}