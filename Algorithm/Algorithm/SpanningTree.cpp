#include "Common.h"



// �׷��� / Ʈ�� ����
// ������ ���� : �ּ� ���д� Ʈ��( Miminum Spanning Tree )

// ��ȣ ��Ÿ�� ����(Disjoint Set)
// ->���Ͽ�-���ε�( Union-Find )

void TestFunc()
{
	struct User
	{
		int teamId;
	};

	// Todo UserManager
	vector<User> users;
	for (int i = 0; i < 1000; ++i) {
		users.push_back(User{ i });
	}

	// �� ����
	// users[1] <-> users[5]
	users[5].teamId = users[1].teamId;

	for (User& user : users) {
		if (user.teamId == 1) {
			user.teamId = 2;
		}
	}
}

// Ʈ�� ������ �̿��� ��ȣ ��Ÿ�� ������ ǥ��
struct Node
{
	Node* leader;
};

class NativeDisjointSet
{
public:
	NativeDisjointSet(int n) :_parent(n)
	{
		for (int i = 0; i < n; ++i) {
			_parent[i] = i;
		}
	}

	// �θ� ������.
	int Find(int u)
	{
		if (u == _parent[u]) {
			return u;
		}

		return Find(_parent[u]);
	}

	void Merge(int u, int v)
	{
		u = Find(u);
		v = Find(v);

		if (u == v) {
			return;
		}

		_parent[u] = v;
	}
private:
	vector<int> _parent;
};

// Ʈ���� �� ������ ���� ������ �ذ�?
// Ʈ���� ��ĥ ��, �׻� [ ���̰� ���� Ʈ����] ���̰� ���� Ʈ�� ������
// Union - By - Rank�� ���� ��ġ��.
class DisjointSet
{
public:
	DisjointSet(int n) :_parent(n), _rank(n, 1)
	{
		for (int i = 0; i < n; ++i) {
			_parent[i] = i;
		}
	}

	// �θ� ������.
	int Find(int u)
	{
		if (u == _parent[u]) {
			return u;
		}

		return _parent[u] = Find(_parent[u]);
	}

	void Merge(int u, int v)
	{
		u = Find(u);
		v = Find(v);

		if (u == v) {
			return;
		}

		if (_rank[u] > _rank[v]) {
			swap(u, v);
		}
		
		_parent[u] = v;
		if (_rank[u] == _rank[v]) {
			_rank[v]++;
		}
	}

private:
	vector<int> _parent;
	vector<int> _rank;
};

int main()
{
	DisjointSet teams(1000);

	teams.Merge(10, 1);

	int teamID = teams.Find(1);
	int teamID2 = teams.Find(10);

	teams.Merge(3, 2);
	int teamID3 = teams.Find(3);
	int teamID4 = teams.Find(2);

	teams.Merge(1, 3);
	int teamID5 = teams.Find(1);
	int teamID6 = teams.Find(3);

	cout << teamID << "\n";
	cout << teamID2 << "\n";
	cout << teamID3 << "\n";
	cout << teamID4 << "\n";
	cout << teamID5 << "\n";
	cout << teamID6 << "\n";
}
