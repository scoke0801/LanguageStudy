//#include <iostream>
//#include <stack>
//using namespace std;
//
//constexpr int BOARD_SIZE = 7;
//
//bool board[BOARD_SIZE][BOARD_SIZE];
//bool visited[BOARD_SIZE][BOARD_SIZE];
//
//// left top, right, down
//int x_dir[] = { -1,0,1,0 };
//int y_dir[] = { 0,-1,0,1 };
//
//struct Node {
//	int x, y;
//
//	Node(int x, int y) :x(x), y(y) {}
//};
//
//stack<Node> buffer;
//int moveCount;
//bool FindPath()
//{
//	buffer.emplace(0, 0);
//
//	while (!buffer.empty()) {
//		Node cur = buffer.top();
//		buffer.pop();
//
//		if (cur.x == BOARD_SIZE - 1 && cur.y == BOARD_SIZE - 1) {
//			return true;
//		}
//		++moveCount;
//		visited[cur.y][cur.x] = true;
//
//		for (int i = 0; i < 4; ++i) {
//			Node next{ cur.x + x_dir[i], cur.y + y_dir[i] };
//
//			if (next.x < 0 || next.y < 0) { continue; }
//			if (next.x >= BOARD_SIZE || next.y >= BOARD_SIZE) { continue; }
//			if (board[next.y][next.x]) { continue; }
//			if (visited[next.y][next.x]) { continue; }
//			buffer.push(std::move(next));
//		}
//	}
//
//	return false;
//}
//int main()
//{
//	for (int i = 0; i < BOARD_SIZE; ++i) {
//		for (int j = 0; j < BOARD_SIZE; ++j) {
//			cin >> board[i][j];
//		}
//	}
//
//	if (FindPath()) {
//		cout << moveCount;
//	}
//	else {
//		cout << -1;
//	}
//}