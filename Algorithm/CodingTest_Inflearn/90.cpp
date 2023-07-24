#include <iostream>
#include <queue>
#include <vector>
using namespace std;

struct Info {
	int x, y, dist;

	Info() :x(0), y(0), dist(0) {}
	Info(int x, int y, int dist) :x(x), y(y), dist(dist) {}
};
struct Comper
{
	bool operator()(const Info& lhs, const Info& rhs) {
		if (lhs.dist == rhs.dist) {
			if (lhs.y == rhs.y) {
				return lhs.x > rhs.x;
			}
			return lhs.y > rhs.y;
		}
		return lhs.dist > rhs.dist;
	}
};
int N;
vector<vector<int>>  board;

int growTime = 0;
int eatCount = 0;
int simbaLevel = 2;
Info simbaPos;

int dx[] = { -1, 0, 1, 0 };
int dy[] = { 0, -1, 0, 1 };

Info SearchClosest()
{
	priority_queue<Info, vector<Info>, Comper> buffer;

	buffer.push(simbaPos);

	vector<vector<bool>> visited(N, vector<bool>(N));

	while (!buffer.empty()) {
		Info cur = buffer.top();
		buffer.pop();
		
		// 심바 위치가 아닐 때
		if (cur.x != simbaPos.x && cur.y != simbaPos.y) {
			int value = board[cur.y][cur.x];
			if (value > 0 && value < simbaLevel) {
				growTime += cur.dist;
				return cur;
			}
		}

		visited[cur.y][cur.x] = true;
		for (int i = 0; i < 4; ++i) {
			int newx = dx[i] + cur.x;
			int newy = dy[i] + cur.y;

			if (newx < 0 || newy < 0) { continue; }
			if (newx >= N || newy >= N) { continue; }

			if (board[newy][newx] > simbaLevel) { continue; }
			if (visited[newy][newx]) { continue; }
			buffer.emplace(newx, newy, cur.dist + 1);
		}
	}
	return Info(-1, -1,-1);
}

void DoGrow()
{
	while (1) {
		Info minPos = SearchClosest();
		if (minPos.x == -1 && minPos.y == -1) {
			return;
		}

		simbaPos = minPos;
		eatCount += 1;

		board[simbaPos.y][simbaPos.x] = 0;

		if (eatCount == simbaLevel) {
			++simbaLevel;
			eatCount = 0;
		}
	}
}

int main()
{
	cin >> N;

	board.resize(N);
	for (int i = 0; i < N; ++i)
	{
		board[i].resize(N);
		for (int j = 0; j < N; ++j) {
			cin >> board[i][j];

			if (board[i][j] == 9) {
				board[i][j] = 0;
				simbaPos = Info(j, i, 0);
			}
		}
	}

	DoGrow();

	cout << growTime << endl;
}