//#include <iostream>
//#include <vector>
//using namespace std;
//
//int blue = 0;
//int white = 0;
//
//vector<vector<int>> vec;
//
//void Div(int x, int y, int size)
//{
//	if (x + size > vec.size() || y + size > vec.size()) { return; }
//
//	int count = 0;
//
//	bool flag = false;
//	for (int i = y; i < y + size; i++) {
//		for (int j = x; j < x + size; j++) {
//			if (vec[i][j]) {
//				++count;
//			}
//		}
//	}
//
//	if (count == 0) {
//		++blue;
//	}
//	else if (count == size * size) {
//		++white;
//	}
//	else {
//		int half = size / 2;
//		Div(x, y, half);
//		Div(x, y + half, half);
//		Div(x + half, y, half);
//		Div(x + half, y + half, half);
//	}
//}
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	int N;
//	cin >> N;
//
//	vec.resize(N);
//
//	for (int i = 0; i < N; ++i) {
//		vec[i].resize(N);
//		for (int j = 0; j < N; ++j) {
//			cin >> vec[i][j];
//		}
//	}
//
//	Div(0, 0, N);
//	
//	cout << blue << "\n" << white;
//}