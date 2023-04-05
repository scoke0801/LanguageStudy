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
//	for (int i = 0; i < N - 1; ++i)
//	{
//		for (int j = i + 1; j < N; ++j) {
//			if (vec[i] > vec[j]) {
//				int temp = vec[i];
//				vec[i] = vec[j];
//				vec[j] = temp;
//			}
//		}
//	}
//
//	for (auto n : vec) {
//		cout << n << " ";
//	}
//}