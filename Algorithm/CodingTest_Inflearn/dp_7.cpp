//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	int N;
//	cin >> N;
//
//	std::vector<std::vector<int>> vec;
//	std::vector<std::vector<int>> dy(N, vector<int>(N));
//
//	vec.resize(N);
//	for (int i = 0; i < N; ++i)
//	{
//		vec[i].resize(N);
//		for (int j= 0; j < N; ++j) {
//			cin >> vec[i][j];
//		}
//	}
//
//	dy[0][0] = vec[0][0];
//	for (int i = 0; i < N; ++i) {
//		dy[0][i] = dy[0][i - 1] + vec[0][i];
//		dy[i][0] = dy[i - 1][0] + vec[i][0];
//	}
//
//	for (int i = 1; i < N; ++i) {
//		for (int j = 1; j < N; ++j) {
//			dy[i][j] = std::min(dy[i - 1][j], dy[i][j - 1]) + vec[i][j];
//		}
//	}
//
//	cout << dy[N - 1][N - 1];
//}