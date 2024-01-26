#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

std::vector<std::vector<bool>> board;
std::vector<int> widths;
int ans;
int M, N, K;

int dx[4] = { -1, 1, 0, 0 };
int dy[4] = { 0,0, -1, 1 };
void FindIsolate(int x, int y)
{
	int width = 0;
	std::queue<std::pair<int, int>> buffer;
	buffer.push(std::make_pair(x, y));

	while (!buffer.empty())
	{
		auto coord = buffer.front();
		buffer.pop();
		if (board[coord.second][coord.first]) { continue; }
		++width;

		board[coord.second][coord.first] = true;

		for (int i = 0; i < 4; ++i) {
			int newX = coord.first + dx[i];
			int newY = coord.second + dy[i];

			if (newX < 0 || newX >= N) { continue; }
			if (newY < 0 || newY >= M) { continue; }
			if (board[newY][newX]) { continue; }

			buffer.push(std::make_pair(newX, newY));
		}
	}

	widths.push_back(width);
	++ans;
}
int main()
{
	cin >> M >> N >> K;

	board = std::vector<std::vector<bool>>(M, std::vector<bool>(N));
	for (int i = 0; i < K; ++i)
	{
		int tx, ty;
		int bx, by;

		cin >> bx >> by >> tx >> ty;
		for (int x = bx; x < tx; ++x)
		{
			for (int y = by; y < ty; ++y)
			{
				board[y][x] = true;
			}
		}
	}

	for (int i = 0; i < M; ++i) {
		for (int j = 0; j < N; ++j) {
			if (board[i][j]) { continue; }

			FindIsolate(j, i);
		}
	}

	std::cout << ans << "\n";

	std::sort(widths.begin(), widths.end());

	for (auto width : widths) {
		std::cout << width << " ";
	}
}