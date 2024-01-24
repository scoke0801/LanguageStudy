//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <queue>
//using namespace std;
//
//int dy[] = { 0,0,-1,1 };
//int dx[] = { 1,-1,0,0 };
//
//int dice[4][3];
//
//void rollDown() {
//	queue<int> q;
//
//	q.push(dice[3][1]);
//	for (int i = 0; i < 3; ++i) {
//		q.push(dice[i][1]);
//	}
//
//	dice[0][1] = q.front();
//	q.pop();
//	for (int i = 1; i < 4; ++i) {
//		dice[i][1] = q.front();
//		q.pop();
//	}
//}
//
//void rollUp() {
//	for (int i = 0; i < 3; ++i) {
//		rollDown();
//	}
//}
//
//void rollRight() {
//	queue<int> q;
//	q.push(dice[3][1]);
//	for (int i = 0; i < 3; ++i) {
//		q.push(dice[1][i]);
//	}
//
//	for (int i = 0; i < 3; ++i) {
//		int num = q.front();
//		q.pop();
//
//		dice[1][i] = num;
//	}
//	dice[3][1] = q.front();
//	q.pop();
//}
//
//void rollLeft() {
//	for (int i = 0; i < 3; ++i) {
//		rollRight();
//	}
//}
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	int N, M;
//	int x, y, K;
//	cin >> N >> M >> x >> y >> K;
//
//	std::vector<std::vector<int>> board(N, std::vector<int>(M));
//	std::vector<int> oper(K);
//	for (int i = 0; i < N; ++i) {
//		for (int j = 0; j < M; ++j) {
//			cin >> board[i][j];
//		}
//	}
//	 
//	for (int i = 0; i < K; ++i) {
//		cin >> oper[i];
//	}
//
//	for (int cur_oper : oper)
//	{
//		int nr = y + dy[cur_oper - 1];
//		int nc = x + dx[cur_oper - 1];
//
//		if (nr < 0 || nr >= N || nc < 0 || nc >= M) {
//			continue;
//		}
//
//		y = nr; x = nc;
//		if (dx[cur_oper - 1] > 0) {
//			rollDown();
//		}
//		else if (dx[cur_oper - 1] < 0) {
//			rollUp();
//		}
//
//		if (dy[cur_oper - 1] > 0) {
//			rollRight();
//		}
//		else if (dy[cur_oper - 1] < 0) {
//			rollLeft();
//		}
//
//		if (board[y][x] == 0)
//		{
//			board[y][x] = dice[3][1];
//		}
//		else
//		{
//			dice[3][1] = board[y][x];
//			board[y][x] = 0;
//		}
//
//		std::cout << dice[1][1] << "\n";
//	}
//
//}