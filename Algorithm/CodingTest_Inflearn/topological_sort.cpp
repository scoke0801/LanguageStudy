#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main()
{
	int N, M, score;

	cin >> N >> M;

	vector<vector<int>> graph(N + 1, vector<int>(N + 1, 0));
	vector<int> degree(N + 1);

	queue<int> buffer;
	for (int i = 0; i < M; ++i) {
		int from, to;
		cin >> from >> to;
		graph[from][to] = 1;
		degree[to]++;
	}

	for (int i = 1; i <= N; ++i) {
		if (degree[i] == 0) {
			buffer.push(i);
		}
	}

	while (!buffer.empty()) {
		int now = buffer.front();
		buffer.pop();

		cout << now << " ";
		for (int i = 1; i <= N; ++i) {
			if (graph[now][i] == 1) {
				degree[i]--;
				if (degree[i] == 0) {
					buffer.push(i);
				}
			}
		}
	}

}