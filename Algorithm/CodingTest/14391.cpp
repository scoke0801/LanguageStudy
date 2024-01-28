#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int N, M;
std::vector<std::vector<bool>> visited;
std::vector<std::vector<int>> board;
int ans = INT_MIN;

void Dfs(int x, int y)
{
	if (x == M) { 
		int sum = 0;
		for (int i = 0; i < N; ++i) {
			int temp = 0;
			for (int j = 0; j < M; ++j) {

				if (visited[i][j])
				{
					temp = temp * 10 + board[i][j];
				}
				else
				{
					sum += temp;
					temp = 0;
				}
			}
			sum += temp;
		}

		for (int i = 0; i < M; ++i) {
			int temp = 0;
			for (int j = 0; j < N; ++j) {
				if (!visited[j][i]) {
					temp = temp * 10 + board[j][i];
				}
				else {
					sum += temp;
					temp = 0;
				}
			}
			sum += temp;
		}

		ans = std::max(ans, sum);
		return;
	}

	if (y == N) {
		Dfs(x + 1, 0);
		return;
	}

	visited[y][x] = true;

	// x 늘린 상태로 방문.
	Dfs(x, y + 1);

	visited[y][x] = false;

	// x 늘리지 않은 상태로 방문.
	Dfs(x, y + 1);

}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	 
	cin >> N >> M;

	board = std::vector<std::vector<int>>(N, std::vector<int>(M));
	visited = std::vector<std::vector<bool>>(N, std::vector<bool>(M));

	for (int i = 0; i < N; ++i) {
		std::string numStr;
		cin >> numStr;

		for (int j = 0; j < M; ++j)
		{
			board[i][j] = numStr[j] - '0';
		}
	}

	Dfs(0, 0);

	std::cout << ans << "\n";
}