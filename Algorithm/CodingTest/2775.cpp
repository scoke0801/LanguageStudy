//#include <iostream>
//#include <numeric>
//using namespace std;
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	int T;
//	cin >> T;
//
//	int count[15][15] = { 0, };
//
//	for (int i = 0; i < 15; ++i) {
//		count[0][i] = i;
//	}
//
//	for (int i = 1; i < 15; ++i) {
//		for (int j = 1; j < 15; ++j) {
//			count[i][j] = std::accumulate(count[i - 1], count[i - 1] + j + 1, 0);
//		}
//	}
//
//	for (int i = 0; i < T; ++i) {
//		int k, n;
//		cin >> k >> n;
//
//		cout << count[k][n] << "\n";
//	}
//}