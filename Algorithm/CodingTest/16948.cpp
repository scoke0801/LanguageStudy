#include <iostream>
#include <vector>
#include <queue>
using namespace std;


struct Data
{
	int x, y;
	int level;

	Data(int x, int y, int level) :x(x), y(y), level(level) {}
};

int dx[6] = { -2, -2, 0, 0, 2, 2 };
int dy[6] = { -1, 1, -2,2,-1,1 };
int main()
{
	int N;

	cin >> N;
	
	std::vector<std::vector<int>> board(N, std::vector<int>(N));
	std::vector<std::vector<bool>> visit(N, std::vector<bool>(N));

	int startX, startY;
	int endX, endY;

	cin >> startX >> startY;
	cin >> endX >> endY;

	
	std::queue<Data> queue;
	queue.push(Data(startX, startY, 0));

	int ans = -1;
	while (queue.empty() == false)
	{
		Data cur = queue.front();
		queue.pop();

		if (cur.x == endX && cur.y == endY)
		{
			ans = cur.level;
			break;
		}

		for (int i = 0; i < 6; ++i)
		{
			int nx = cur.x + dx[i];
			int ny = cur.y + dy[i];

			if (nx < 0 || nx >= N) { continue; }
			if (ny < 0 || ny >= N) { continue; }
			if (visit[ny][nx]) { continue; }
			visit[ny][nx] = true;
			queue.push(Data(nx, ny, cur.level + 1));
		}

	}

	std::cout << ans << "\n";
}