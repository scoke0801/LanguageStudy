#include <iostream>
using namespace std;

constexpr int MAX_CASE = 100;

int dx[4] = { -1,1,0,0 };
int dy[4] = { 0,0,-1,1 };

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int N, M;

	cin >> N >> M;

	int board[MAX_CASE][MAX_CASE] = { 0, };

	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < M; ++j)
		{
			cin >> board[i][j];
		}
	}

	int ans = N * M * 2;
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < M; ++j)
		{
			int h = board[i][j];
			for (int k = 0; k < 4; ++k)
			{
				int x = dx[k] + j;
				int y = dy[k] + i;
				 
				if (x < 0 || x >= M)
				{
					ans += h;
				}
				if (y < 0 || y >= N)
				{
					ans += h;
				}
				if (x >= 0 && x < M && y >= 0 && y < N)
				{
					int h2 = board[y][x];
					ans += std::max(0, h - h2);
				}
			}
		}
	}

	std::cout << ans << "\n";
}