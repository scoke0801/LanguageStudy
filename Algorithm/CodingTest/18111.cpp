//#include <iostream>
//#include <climits>
//using namespace std;
//
//int map[501][501];
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	int bestTime = INT_MAX;
//	int bestHeight = 0;
//
//	int N, M, B;
//
//	cin >> N >> M >> B;
//	for (int i = 0; i < N; ++i) {
//		for (int j = 0; j < M; ++j) {
//			cin >> map[i][j];
//		}
//	}
//
//	for (int h = 0; h <= 256; ++h) {
//		int time = 0;
//
//		int putInven = 0;
//		int putOnBlock = 0;
//		for (int i = 0; i < N; ++i) {
//			for (int j = 0; j < M; ++j) {
//				int height = map[i][j] - h;
//				if (height > 0) {
//					putInven += height;
//				}
//				else if(height < 0) {
//					putOnBlock -= height;
//				}
//			}
//		}
//		if (putInven + B >= putOnBlock) {
//			int time = 2 * putInven + putOnBlock;
//			if (bestTime >= time) {
//				bestTime = time;
//				bestHeight = h;
//			}
//		}
//	}
//
//	cout << bestTime << " " << bestHeight;
//}