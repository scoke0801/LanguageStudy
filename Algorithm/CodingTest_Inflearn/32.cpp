//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	int N;
//	cin >> N;
//
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
//	for (auto n : vec) {
//		cout << n << " ";
//	}
//}
