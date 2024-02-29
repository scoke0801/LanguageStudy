//#include <iostream>
//#include <queue> 
//#include <climits>
//using namespace std;
//
//constexpr int EMPTY = -1;
//constexpr int RARE = 0;
//constexpr int ROTTEN = 1;
//
//int M, N, H;
//int table[100][100][100];
//int visit[100][100][100];
//
//int dx[4] = { -1,1,0,0 };
//int dy[4] = { 0,0,-1,1 };
//int dh[2] = { -1,1 };
//
//struct Info
//{
//	int x, y, h;
//	int day;
//	Info(int x, int y, int h, int day) : x(x), y(y),h(h),day(day)
//	{
//
//	}
//};
//int Check()
//{
//	int ans = 0;
//	for (int h = 0; h < H; ++h)
//	{
//		for (int i = 0; i < N; ++i)
//		{
//			for (int j = 0; j < M; ++j)
//			{
//				if (table[h][i][j] == RARE) { return -1; }
//				ans = std::max(ans, visit[h][i][j]);
//			}
//		}
//	}
//
//	return ans;
//}
//
//int main()
//{ 
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	cin >> M >> N >> H;
//	std::queue<Info> buffer;
//
//	for (int h = 0; h < H; ++h)
//	{
//		for (int i = 0; i < N; ++i)
//		{
//			for (int j = 0; j < M; ++j)
//			{
//				cin >> table[h][i][j];
//
//				if (table[h][i][j] == ROTTEN) {
//					buffer.push(Info(j, i, h, 0));
//				}
//			}
//		}
//	}
//
//	while (buffer.empty() == false)
//	{
//		Info cur = buffer.front();
//		buffer.pop();
//
//		table[cur.h][cur.y][cur.x] = ROTTEN;
//
//		for (int i = 0; i < 4; ++i)
//		{
//			int nx = cur.x + dx[i];
//			int ny = cur.y + dy[i];
//		
//			if (nx < 0 || nx >= M) { continue; }
//			if (ny < 0 || ny >= N) { continue; }
//
//			if (table[cur.h][ny][nx] != RARE) { continue; }
//			if (visit[cur.h][ny][nx] != 0) { continue; }
//			visit[cur.h][ny][nx] = cur.day + 1;
//
//			buffer.push(Info(nx, ny, cur.h, cur.day + 1));
//		}
//
//		for (int i = 0; i < 2; ++i)
//		{
//			int h = cur.h + dh[i];
//			if (h < 0 || h >= H) { continue; }
//
//			if (table[h][cur.y][cur.x] != RARE) { continue; }
//			if (visit[h][cur.y][cur.x] != 0) { continue; }
//			visit[h][cur.y][cur.x] = cur.day + 1;
//
//			buffer.push(Info(cur.x, cur.y, h, cur.day + 1));
//		}
//	}
//
//	std::cout << Check();
//
//	return 0;
//}