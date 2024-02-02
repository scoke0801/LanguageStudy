//#include <iostream>
//#include <queue>
//#include <vector>
//#include <climits>
//using namespace std;
//
//int N, M;
//
//std::vector<std::vector<bool>> board;
//std::vector<std::vector<int>> visit;
//struct Info {
//	short x, y;
//	Info(short x, short y) :x(x), y(y) {}
//};
//
//short dx[4] = { -1,1,0,0 };
//short dy[4] = { 0,0,-1,1 };
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	std::queue<Info> buffer;
//
//	// N, M으로 간다네
//	cin >> M >> N;
//
//	short ans = 127;
//	board = std::vector<std::vector<bool>>(N, std::vector<bool>(M));
//	visit = std::vector<std::vector<int>>(N, std::vector<int>(M));
//	for (int i = 0; i < N; ++i) {
//		std::string input;
//		cin >> input;
//
//		for (int j = 0; j < M; ++j) {
//			board[i][j] = input[j] - '0';
//			visit[i][j] = INT_MAX;
//		}
//	}
//
//	buffer.push(Info(0, 0));
//	visit[0][0] = 0;
//
//	while (buffer.empty() == false) {
//		Info cur = buffer.front();
//		buffer.pop();
//		  
//		for (int i = 0; i < 4; ++i) {
//			short newX = cur.x + dx[i];
//			short newY = cur.y + dy[i]; 
//			int temp = 0;
//			if (newX < 0 || newX >= M) { continue; }
//			if (newY < 0 || newY >= N) { continue; }
//
//			if (board[newY][newX] == 1) {
//				++temp;
//			}
//			if (visit[newY][newX] > visit[cur.y][cur.x] + temp)
//			{
//				visit[newY][newX] = visit[cur.y][cur.x] + temp;
//
//				buffer.push(Info(newX, newY));
//			}
//
//		}
//	}
//
//
//	std::cout << visit[N-1][M-1] << "\n";
//
//}