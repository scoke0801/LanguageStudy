//#include <iostream>
//#include <queue>
//#include <string.h>
//using namespace std;
//
//short board[1000][1000];
//short visit[1000][1000];
//
//int dx[4] = { -1,1,0,0 };
//int dy[4] = { 0,0,-1,1 };
//
//struct Data{
//	int x, y;
//	int level;
//	Data(int x, int y, int level) : x(x), y(y), level(level) {}
//};
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//	cout.tie(nullptr);
//
//	memset(visit, -1, sizeof(visit));
//
//	int N, M;
//
//	cin >> N >> M;
//
//	int goalX, goalY;
//
//	for(int i = 0 ; i < N; ++i)
//	{
//		for (int j = 0; j < M; ++j)
//		{
//			cin >> board[i][j];
//
//			if (board[i][j] == 2) {
//				goalX = j;
//				goalY = i;
//			}
//		}
//	}
//
//	std::queue<Data> buffer;
//	buffer.push(Data(goalX, goalY, 0));
//	while (buffer.empty() == false)
//	{
//		Data data = buffer.front();
//		buffer.pop();
//
//		for (int i = 0; i < 4; ++i)
//		{
//			int nx = data.x + dx[i];
//			int ny = data.y + dy[i];
//
//			if (nx < 0 || nx >= M) { continue; }
//			if (ny < 0 || ny >= N) { continue; }
//
//			if (board[ny][nx] == 0) { continue; }
//			if (visit[ny][nx] > 0) { continue; }
//			visit[ny][nx] = data.level + 1;
//			buffer.push(Data(nx, ny, data.level + 1));
//		}
//	}
//	visit[goalY][goalX] = 0;
//
//	for (int i = 0; i < N; ++i)
//	{
//		for (int j = 0; j < M; ++j)
//		{
//			if (board[i][j] == 0) {
//				visit[i][j] = 0;
//			}
//			std::cout << visit[i][j] << " ";
//		}
//		std::cout << "\n";
//	}
//}