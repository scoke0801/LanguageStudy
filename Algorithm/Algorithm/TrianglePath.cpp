//#include <iostream>
//#include <vector>
//using namespace std;
//
////- 0,0���� �����ؼ� �Ʒ� or �Ʒ� �������� �̵� ����
//// ������ ���ڸ� ��� ����
//// ���� ���ڰ� �ִ밡 �Ǵ� ���? ��?
//
//int N;
//vector<vector<int>> board;
//vector<vector<int>> cache;
//
//int path(int y, int x)
//{
//	// ���� ����.
//	if (y == N - 1) {
//		return board[y][x];
//	}
//
//	// ĳ�� Ȯ��.
//	int& ret = cache[y][x];
//	if (ret != -1) {
//		return ret;
//	}
//
//	// ����.
//	return ret = board[y][x] + max(path(y + 1, x), path(y + 1, x + 1));
//}
//
//int main()
//{
//	board = vector<vector<int>>
//	{
//		{6},
//		{1,2} ,
//		{3,7,4},
//		{9,4,1,7},
//		{2,7,5,9,4},
//	};
//
//	N = board.size();
//
//	cache = vector<vector<int>>(N, vector<int>(N, -1));
//
//	int ret = path(0, 0);
//	cout << ret << "\n";
//}