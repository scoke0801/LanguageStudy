//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	int N;
//	cin >> N;
//
//	int min = INT_MAX;
//	vector<int> vec(N);
//	for (int i = 0; i < N; ++i) {
//		cin >> vec[i];
//	}
//
//	for (int i = 0; i < N; ++i) {
//		int min = i;
//		for (int j = i + 1; j < N; ++j) {
//			if (vec[min] > vec[j]) {
//				min = j;
//			}
//		}
//		int temp = vec[i];
//		vec[i] = vec[min];
//		vec[min] = temp;
//	}
//
//	int count = 0;
//	int ans = vec[N - 1];
//	for (int i = N - 2; i >= 0; --i) {
//		if (ans == vec[i]) continue;
//
//		ans = vec[i];
//		++count;
//
//		if (count == 2) { break; }
//	}
//
//	cout << ans;
//}
