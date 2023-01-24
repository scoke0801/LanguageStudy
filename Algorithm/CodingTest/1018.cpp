//#include <iostream>
//#include <cmath>
//using namespace std;
//
//char board[50][50];
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	int M, N;
//	cin >> N >> M;
//
//	for (int i = 0; i < N; ++i) {
//		for (int j = 0; j < M; ++j) {
//			cin >> board[i][j];
//		}
//	}
//
//	// 모두 바꾸는 경우.
//	int best = 64;
//	for (int i = 0; i < N - 7; ++i) {
//		for (int j = 0; j < M - 7; ++j) {
//			int toWhite = 0;
//			int toBlack = 0;
//			for (int a = i; a < i + 8; ++a) {
//				for (int b = j; b < j + 8; ++b) {
//					if ((a + b) % 2 == 0) {
//						if (board[a][b] == 'B') {
//							++toWhite;
//						}
//						else {
//							++toBlack;
//						}
//					}
//					else {
//						if (board[a][b] == 'B') {
//							++toBlack;
//						}
//						else {
//							++toWhite;
//						}
//					}
//				}
//			}
//
//			best = std::min(best, toWhite);
//			best = std::min(best, toBlack);
//		}
//	}
//
//	cout << best;
//}