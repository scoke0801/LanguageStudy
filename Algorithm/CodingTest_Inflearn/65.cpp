#include <iostream>
#include <vector>
using namespace std;

constexpr int MAP_SIZE = 7;
int arr[MAP_SIZE][MAP_SIZE];
bool visit[MAP_SIZE][MAP_SIZE];
// ╩С, аб, го, ©Л
int DIR_X[4] = { 0, -1, 0, 1 };
int DIR_Y[4] = { -1, 0, 1, 0 };
int ans;

void dfs(int x, int y)
{
	if (x == (MAP_SIZE - 1) && y == (MAP_SIZE - 1) )
	{
		++ans;
		return;
	}

	visit[y][x] = true;
	for (int i = 0; i < 4; ++i)
	{
		int new_x = x + DIR_X[i];
		int new_y = y + DIR_Y[i];

		if (new_x >= MAP_SIZE || new_y >= MAP_SIZE) { continue; }
		if (new_x < 0 || new_y < 0 ) { continue; }
		
		if (arr[new_y][new_x]) { continue; }
		if (visit[new_y][new_x]) { continue; }

		dfs(new_x, new_y);
	}
	visit[y][x] = false;
}
int main()
{
	for (int i = 0; i < MAP_SIZE; ++i)
	{
		for (int j = 0; j < MAP_SIZE; ++j)
		{
			cin >> arr[i][j];
		}
	}

	dfs(0, 0);

	cout << ans;
}