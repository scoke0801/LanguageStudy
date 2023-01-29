//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	int M, N;
//	cin >> M >> N;
//
//	vector<int> vec(N + 1);
//	for (int i = 2; i <= N; ++i) {
//		vec[i] = i;
//	}
//
//	for (int i = 2; i <= N; ++i)
//	{
//		if (vec[i] == 0) {
//			continue;
//		}
//
//		for (int j = 2 * i; j <= N; j += i) {
//			vec[j] = 0;
//		}
//	}
//
//	for (int i = M; i <= N; ++i) {
//		if (vec[i] != 0) {
//			cout << i << "\n";
//		}
//	}
//}