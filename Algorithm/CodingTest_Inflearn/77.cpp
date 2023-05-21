#include <iostream>
#include <vector>
using namespace std;

int N, M;
int friendA, friendB;
bool ans = false;

vector<int> ansVec;
vector<bool> visitied;
void search(const vector<vector<int>>& buf, int cur)
{
	if (cur == friendB) {
		ans = true;
		return;
	}
	if (ans) { return; }
	if (visitied[cur]) { return; }

	visitied[cur] = true;
	for (int to : buf[cur]) {
		search(buf, to);
	}
	visitied[cur] = false;
}

void searchUnion(const vector<vector<int>>& buf, int cur)
{
	for (int target : ansVec) {
		if (cur == target || cur == friendB) {
			ans = true;
			return;
		}
	}

	if (visitied[cur]) { return; }
	if (ans) { return; }

	visitied[cur] = true;
	for (int to : buf[cur]) {
		searchUnion(buf, to);
	}
	visitied[cur] = false;
}

int main()
{
	cin >> N >> M;
	visitied.resize(N + 1);

	vector<vector<int>> buf(N + 1);
	for (int i = 0; i < M; ++i) {
		int from, to;
		cin >> from >> to; 

		buf[to].push_back(from);
		buf[from].push_back(to);
	}

	cin >> friendA >> friendB;
	for (size_t from = 0; from < buf.size(); ++from)
	{
		visitied[from] = true;
		for (int to : buf[from])
		{
			search(buf, to);
		}
		visitied[from] = false;

		if (ans) {
			ansVec.push_back(from);
			ans = false;
		}
	}

	visitied[friendA] = true;
	for (int to : buf[friendA])
	{
		search(buf, to);
	}
	visitied[friendA] = false;
	
	ans = false;
	
	visitied[friendA] = true;
	for (int to : buf[friendA])
	{
		searchUnion(buf, to);
	}
	visitied[friendA] = false;

	if (ans) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
}