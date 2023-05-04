//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	int N, M;
//	cin >> N >> M;
//
//	vector< vector<int> > vec(N, vector<int>(N));
//
//	for (int i = 0; i < M; ++i) {
//		int col, row, cost;
//		cin >> col >> row >> cost;
//		vec[col - 1][row - 1] = cost;
//	}
//
//	for (int i = 0; i < N; ++i) {
//		for (int j = 0; j < N; ++j) {
//			cout << vec[i][j] << " ";
//		}
//		cout << "\n";
//	}
//}