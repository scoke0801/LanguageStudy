#include <iostream>
#include <vector>

using namespace std;

constexpr int MAX_DIST = 5000;
int main()
{
	int N, M, from, to, cost;

	cin >> N >> M;

	vector<vector<int>> dist(N + 1, vector<int>(N + 1, MAX_DIST));
	for (int i = 1; i <= N; ++i) {
		dist[i][1] = 0;
	}

	for (int i = 1; i <= M; ++i) {
		cin >> from >> to >> cost;
		dist[from][to] = cost;
	}

	for (int k = 1; k <= N; ++k) {
		for (int i = 1; i <= N; ++i) {
			for (int j = 1; j <= N; ++j) {
				if (dist[i][j] > dist[i][k] + dist[k][j]) {
					dist[i][j] = dist[i][k] + dist[k][j];
				}
			}
		}
	}

	for (int i = 1; i <= N; ++i) {
		for (int j = 1; j <= N; ++j) {
			if (dist[i][j] == MAX_DIST) {
				cout << "M ";
			}
			else {
				cout << dist[i][j] << " ";
			}
		}
		cout << "\n";
	}
}