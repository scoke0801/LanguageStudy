//#include <iostream>
//#include <queue>
//using namespace std;
//
//int N, M;
//int board[101][101]; 
//int dx[4] = { -1,1,0,0 };
//int dy[4] = { 0,0,-1,1 };
//
//void Dfs(int x, int y)
//{
//	if (board[y][x] != 0)
//	{
//		return;
//	}
//
//	board[y][x] = -1;
//
//	for (int i = 0; i < 4; ++i)
//	{
//		int nx = x + dx[i];
//		int ny = y + dy[i];
//		if (nx <= 0 || nx > M) { continue; }
//		if (ny <= 0 || ny > N) { continue; }
//
//		Dfs(nx, ny);
//	}
//}
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//	cout.tie(nullptr);
//
//	cin >> N >> M;
//
//	int ans = 0;
//	std::queue<std::pair<int, int>> buffer;
//
//	for (int i = 1; i <= N; ++i)
//	{
//		for (int j = 1; j <= M; ++j)
//		{
//			cin >> board[i][j];
//		}
//	}
//
//	Dfs(1, 1);
//	while (true)
//	{
//		for (int i = 1; i <= N; ++i)
//		{
//			for (int j = 1; j <= M; ++j)
//			{
//				if (board[i][j] != 1) { continue; }
//
//				int cnt = 0;
//				for (int k = 0; k < 4; ++k)
//				{
//					int nx = j + dx[k];
//					int ny = i + dy[k]; 
//					if (board[ny][nx] == -1) ++cnt;
//				}
//
//				if (cnt >= 2)
//				{
//					buffer.push(std::make_pair(j, i));
//				}
//			}
//		}
//
//		if (buffer.empty()) { break; }
//
//		while (buffer.empty() == false)
//		{
//			int x = buffer.front().first;
//			int y = buffer.front().second;
//			buffer.pop();
//
//			board[y][x] = -1;
//
//			for (int i = 0; i < 4; ++i)
//			{
//				int nx = x + dx[i];
//				int ny = y + dy[i]; 
//				if (board[ny][nx] == 0) 
//				{
//					Dfs(nx, ny);
//				}
//			}
//		}
//		++ans;
//	}
//
//	std::cout << ans << "\n";
//
//	return 0;
//}