#include <iostream>
#include <vector>
#include <climits>
#include <queue>
using namespace std;

int boarSize;
int goalX, goalY;
int ans = INT_MAX;
std::vector<std::vector<bool>> visit;

int dx[8] = { -2, -1, 1, 2,  -2, -1, 1, 2 };
int dy[8] = { -1,-2, -2, -1, 1, 2, 2, 1 };
 
struct Data {
	int x, y;
	int level;
	Data(int x, int y, int level) : x(x), y(y), level(level) {}
};

int Bfs(int x, int y)
{
	std::queue<Data> queue;
	queue.push((Data(x, y, 0)));
	visit[y][x] = true;

	while (queue.empty() == false)
	{
		Data cur = queue.front();
		queue.pop();

		if (cur.x == goalX && cur.y == goalY) { return cur.level; }

		for (int i = 0; i < 8; ++i)
		{
			int newX = dx[i] + cur.x;
			int newY = dy[i] + cur.y;
			if (newX < 0 || newX >= boarSize) { continue; }
			if (newY < 0 || newY >= boarSize) { continue; }

			if (visit[newY][newX]) { continue; } 
			visit[newY][newX] = true;

			queue.push(Data(newX, newY, cur.level + 1));
		}
	}

	return -1;
}

int main()
{
	int K;
	cin >> K;

	for (int k = 0; k < K; ++k)
	{ 
		cin >> boarSize;
		ans = INT_MAX;
		visit = std::vector<std::vector<bool>>(boarSize, std::vector<bool>(boarSize));

		int curX, curY;
		cin >> curX >> curY;
		cin >> goalX >> goalY;
		 
		ans = Bfs(curX, curY);

		std::cout << ans << "\n";
	}

}