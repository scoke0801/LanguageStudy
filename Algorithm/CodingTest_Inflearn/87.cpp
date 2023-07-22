//#include <iostream>
//using namespace std;
//
//int N;
//int board[20][20];
//bool visited[20][20];
//
//int ans = 0;
//
//int dir_x[8] = { -1, -1, 0, 1, 1, 1, 0, -1 };
//int dir_y[8] = { 0, -1, -1, -1, 0, 1, 1, 1 };
//
//void dfs(int x, int y) {
//	if (visited[y][x]) { return; }
//
//	visited[y][x] = true;
//
//	for (int i = 0; i < 8; ++i) {
//		int new_x = x + dir_x[i];
//		int new_y = y + dir_y[i];
//
//		if (new_x < 0 || new_y < 0) { continue; }
//		if (new_x >= N || new_y >= N) { continue; }
//
//		if (board[new_y][new_x] == 1) {
//			dfs(new_x, new_y);
//		}
//	}
//}
//
//void visit(int x, int y)
//{
//	if (visited[y][x]) { return; }
//
//	if (board[y][x] == 1) {
//		dfs(x, y);
//		++ans;
//	}
//
//	visited[y][x] = true;
//
//	for (int i = 0; i < 8; ++i) {
//		int new_x = x + dir_x[i];
//		int new_y = y + dir_y[i];
//
//		if (new_x < 0 || new_y < 0) { continue; }
//		if (new_x >= N || new_y >= N) { continue; }
//	
//		if (board[new_y][new_x] == 1 && visited[new_y][new_x] == 0) {
//			dfs(new_x, new_y);
//			++ans;
//		}
//		else {
//			visit(new_x, new_y);
//		}
//	}
//}
//
//int main()
//{
//	cin >> N;
//	for (int i = 0; i < N; ++i) 
//	{
//		for (int j = 0; j < N; ++j) 
//		{
//			cin >> board[i][j];
//		}
//	}
//
//	visit(0, 0);
//
//	cout << ans << "\n";
//}