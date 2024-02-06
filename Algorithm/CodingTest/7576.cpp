//#include <iostream>
//#include <vector>
//#include <climits>
//#include <queue>
//using namespace std;
//
//int M, N;
//
//std::vector<std::vector<int>> board;
//
//constexpr int TOMATO = 0;
//constexpr int ROTTEN = 1;
//constexpr int EMPTY = -1;
// 
//std::vector<std::vector<bool>> visit;
//
//int dx[4] = { -1,1, 0,0 };
//int dy[4] = { 0,0,-1,1 };
//
//struct Info
//{
//	int x, y;
//	int day;
//
//	Info(int x, int y, int day) : x(x), y(y), day(day) {}
//};
//int main()
//{
//	cin >> M >> N;
//	std::vector<std::vector<int>> board(N, std::vector<int>(M));
//	std::vector<std::vector<bool>> visit(N, std::vector<bool> (M));
//	
//	int emptyCount = 0;
//	std::queue<Info> buffer;
//	for (int i = 0; i < N; ++i) 
//	{
//		for (int j = 0; j < M; ++j)
//		{
//			cin >> board[i][j];
//
//			if (board[i][j] == ROTTEN)
//			{ 
//				buffer.push(Info(j, i, 0));
//			}
//
//			if (board[i][j] == EMPTY)
//			{
//				++emptyCount;
//			}
//		}
//	}
//
//	int ans = 0;
//	int rottenCount = buffer.size();
//	while (buffer.empty() == false)
//	{
//		Info cur = buffer.front();
//		buffer.pop();
//
//		ans = std::max(ans, cur.day); 
//
//		for (int i = 0; i < 4; ++i)
//		{
//			int nx = dx[i] + cur.x;
//			int ny = dy[i] + cur.y;
//			if (nx < 0 || nx >= M) { continue; }
//			if (ny < 0 || ny >= N) { continue; }
//
//			if (visit[ny][nx]) { continue; }
//			
//			if (board[ny][nx] == TOMATO)
//			{
//				buffer.push(Info(nx, ny, cur.day + 1));
//
//				visit[ny][nx] = true;
//				board[ny][nx] = ROTTEN;
//				++rottenCount;
//			} 
//		}
//	} 
//
//	if (rottenCount == (M * N - emptyCount))
//	{
//		std::cout << ans << "\n";
//	}
//	else
//	{
//		std::cout << -1 << "\n";
//	}
//	 
//	
//}