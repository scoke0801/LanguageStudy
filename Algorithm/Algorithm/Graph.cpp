#include <iostream>
#include <vector>
#include <list>
#include <stack>
#include <queue>

using namespace std;

template <typename T>
struct Node {
	T		data;
	Node*	next;
	Node*	prev;
};

struct Vertex
{
	vector<Vertex*> edges;

	void Connect(Vertex* other) {
		edges.push_back(other);
		other->edges.push_back(this);
	}
};


void CreateGraph_1()
{
	vector<Vertex> v;
	v.resize(6);
	
	v[0].Connect(&v[1]);
	v[0].Connect(&v[3]);
	v[1].Connect(&v[2]);
	v[1].Connect(&v[3]);
	v[3].Connect(&v[4]);
	v[4].Connect(&v[5]);

	bool isConnected = false;
	for (Vertex* edge : v[0].edges) {
		if (edge == &v[3]) {
			isConnected = true;
			break;
		}
	}
	
	std::string strText = (isConnected) ? "TRUE" : "FALSE";
	cout << strText;
}

// 연결된 목록을 관리
// 그래프의 연결이 뺵빽하지 않은 경우.
void CreateGraph_2()
{
	vector< vector<int> > adjacent(6);

	adjacent[0] = { 1, 3 };
	adjacent[1] = { 0,2,3 };
	adjacent[3] = { 4 };
	adjacent[5] = { 4 };

	for (int vertex : adjacent[0]) {
		if (vertex == 3) {
			cout << "Find way1\n";
		}
	}

	auto res = std::find(adjacent[0].begin(), adjacent[0].end(), 3);
	if (res != adjacent[0].end()) {
		cout << "Find way2\n";
	}
}

// 행령방식
// 그래프의 연결이 뺵뺵한 경우
// 메모리 성능면에서는 떨어지지만, 검색 성능은 상승
void CreateGraph_3()
{
	vector< vector<bool> > adjacent(6, vector<bool>(6, false));

	adjacent[0][1] = true;
	adjacent[0][3] = true;
	adjacent[1][0] = true;
	adjacent[1][2] = true;
	adjacent[1][3] = true;
	adjacent[3][4] = true;
	adjacent[5][4] = true;

	if (adjacent[0][3]) {
		cout << "Find!";
	}
}

int main_Graph1()
{
	//CreateGraph_1();
	CreateGraph_2();
	CreateGraph_3();

	return 0;
}