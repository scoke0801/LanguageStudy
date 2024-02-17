#include <iostream>
using namespace std;

constexpr int MAX_CASE = 50;

int dx[6] = { 0, 1, 1, 0, -1, -1 };
int dy[6] = { -1, -1, 0, 1, 1, 0 };

int N;
bool board[MAX_CASE][MAX_CASE] = { false, };
char colors[MAX_CASE][MAX_CASE] = { false, };  

int ans = 0;

void Dfs(int x, int y, int color)
{
	if (ans == 3) { return; }

	colors[y][x] = color;
	ans = std::max(ans, 1);

	int nextColor = std::max(1, (color + 1) % 3);
	for (int i = 0; i < 6; ++i)
	{
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (nx < 0 || nx >= N) { continue; }
		if (ny < 0 || ny >= N) { continue; }

		if (board[ny][nx] == false) { continue; }

		if (colors[ny][nx] == 0)
		{
			Dfs(nx, ny, nextColor);
			ans = std::max(2, ans);
		}
		else if (colors[ny][nx] == color)
		{
			ans = 3;
			return;
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> N;

	for (int i = 0; i < N; ++i)
	{
		std::string input;
		cin >> input;

		for (int j = 0; j < N; ++j)
		{
			if (input[j] == 'X')
			{
				board[i][j] = true;
			}
		}
	}

	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			if (board[i][j] == true && colors[i][j] == 0)
			{
				Dfs(j, i, 1);
			}
		}
	}

	std::cout << ans << "\n";
}