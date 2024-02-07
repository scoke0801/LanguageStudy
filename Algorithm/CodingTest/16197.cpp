//#include <iostream>
//#include <vector>
//#include <climits>
//using namespace std;
//
//int N, M;
//std::vector<std::vector<char>> board;
//
//int dx[4] = { -1,1,0,0 };
//int dy[4] = { 0,0,-1,1 };
//
//constexpr char COIN = 'o';
//constexpr char EMPTY = '.';
//constexpr char WALL = '#';
//
// 
//int ans = INT_MAX;
//void Work(int x1,int y1, int x2, int y2, int level)
//{  
//	if (level >= 10) { return; } 
//
//	for (int i = 0; i < 4; ++i) {
//		int nx1 = dx[i] + x1;
//		int ny1 = dy[i] + y1;
//
//		int nx2 = dx[i] + x2;
//		int ny2 = dy[i] + y2;
//
//		bool drop1 = (nx1 < 0 || ny1 < 0 || nx1 >= M || ny1 >= N);
//		bool drop2 = (nx2 < 0 || ny2 < 0 || nx2 >= M || ny2 >= N);
//
//		if ((drop1 && !drop2) ||
//			(!drop1 && drop2)) { 
//			ans = std::min(ans, level + 1);
//			return;
//		}
//		if (drop1 && drop2) { continue; }
//		if (board[ny1][nx1] == WALL && board[ny2][nx2] == WALL) { continue; }
//
//		if (board[ny1][nx1] == WALL)
//		{
//			nx1 = x1;
//			ny1 = y1;
//		}
//
//		if (board[ny2][nx2] == WALL) 
//		{
//			nx2 = x2;
//			ny2 = y2;
//		}
//
//		Work(nx1, ny1, nx2, ny2, level + 1);
//	}
//}
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	cin >> N >> M;
//
//	int x1 = -1, y1 = -1;
//	int x2 = -1, y2 = -1;
//	board = std::vector<std::vector<char>>(N, std::vector<char>(M));
//	for (int i = 0; i < N; ++i)
//	{
//		std::string str;
//		cin >> str;
//
//		for (int j = 0; j < M; ++j)
//		{
//			board[i][j] = str[j];
//
//			if (board[i][j] == COIN)
//			{
//				if (x1 == -1)
//				{
//					x1 = j;
//					y1 = i;
//				}
//				else
//				{
//					x2 = j;
//					y2 = i;
//				}
//			}
//		}
//	}
//
//	Work(x1, y1, x2, y2, 0);
//
//	if (ans == INT_MAX) {
//		ans = -1;
//	}
//
//	std::cout << ans << "\n";
//	
//}
