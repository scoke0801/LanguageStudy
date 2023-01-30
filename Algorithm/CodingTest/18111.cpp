#include <iostream>
#include <climits>
using namespace std;

int map[501][501];

constexpr int MAX_HEIGHT = 256;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int N, M, B;
	cin >> N >> M >> B;
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < M; ++j) {
			cin >> map[i][j];
		}
	}

	int bestTime = INT_MAX;
	int bestHeight = 0;
	for (int i = 0; i <= MAX_HEIGHT; ++i) {
		int poket = 0;
		int fill = 0;
		for (int j = 0; j < N; ++j) {
			for (int k = 0; k < M; ++k) {
				int height = map[j][k] - i;
				if (height > 0) { fill += height; }
				else if (height < 0) { poket -= height; }
			}
		}

		if (fill + B >= poket) {
			int time = fill * 2 + poket;
			if (bestTime >= time) {
				bestTime = time;
				bestHeight = i;
			}
		}
	}

	cout << bestTime << " " << bestHeight << "\n";
}