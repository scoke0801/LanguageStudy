//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	int N;
//	cin >> N;
//
//	vector< vector<int> > vec(N, vector<int>(N));
//
//	for (int i = 0; i < N; ++i) {
//		int num;
//		cin >> num;
//
//		for (int j = 0; j < N; ++j) {
//			vec[j][i] = num;
//		}
//	}
//
//	int ans = 0;
//	for (int i = 0; i < N; ++i) {
//		int num;
//		cin >> num;
//
//		for (int j = 0; j < N; ++j) {
//			vec[i][j] = std::min(vec[i][j], num);
//			ans += vec[i][j];
//		}
//	}
//
//	cout << ans << "\n";
//}
