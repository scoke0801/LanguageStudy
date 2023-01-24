//#include <iostream>
//using namespace std;
//
//int color[3] = { 1,2,3 };
//int main__()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//	
//	int N, K;
//
//	cin >> N >> K;
//
//	int half = N / 2;
//
//	for (int i = 0; i < K; ++i) {	
//		int x, y;
//		cin >> x >> y;
//	
//		if (x > half) {
//			x = N - x + 1;
//		}
//		if (y > half) {
//			y = N - y + 1;
//		}
//		int dist = min(x, y);
//		cout << color[(dist - 1) % 3] << "\n";
//	}
//	return 0;
//}