//#include <iostream>
//#include <vector>
//using namespace std;
//
//int N, M;
//std::vector<std::vector<char>> board;
//std::vector<std::vector<bool>> visit;
//
//int startX = 0, startY = 0; 
//bool found = false;
//
//int dx[4] = { 1,-1,0,0 };
//int dy[4] = { 0,0, 1,-1 };
//
//void Dfs(int x, int y, int level)
//{
//	if (found) return;
//
//	visit[y][x] = true;
//	for (int i = 0; i < 4; ++i) {
//		int newX = x + dx[i];
//		int newY = y + dy[i];
//
//		if (newX < 0 || newX >= M) { continue; }
//		if (newY < 0 || newY >= N) { continue; }
//
//		if (board[newY][newX] != board[startY][startX]) { continue; }
//		
//		if (newX == startX && newY == startY && level >=4 )
//		{
//			found = true;
//			return;
//		}
//		if (visit[newY][newX]) { continue; } 
//		Dfs(newX, newY, level + 1); 
//	}
//	visit[y][x] = false;
//}
//int main(){
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	cin >> N >> M;
//
//	board.resize(N);
//	for (int i = 0; i < N; ++i) {
//		std::string str;
//		cin >> str;
//
//		for (int j = 0; j < M; ++j) {
//			board[i].push_back(str[j]);
//		}
//	}
//
//	visit = std::vector<std::vector<bool>>(N, std::vector<bool>(M));
//	for (int i = 0; i < N; ++i) {
//		startY = i;
//		for (int j = 0; j < M; ++j) {
//			startX = j;
//			Dfs(j, i, 1);
//			visit[i][j] = true;
//		}
//	}
//
//	std::cout << ((found)? "Yes" : "No");
//}