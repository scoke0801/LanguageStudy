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
//		int order = i + 1;
//
//		for (int j = i - 1; j >= 0; --j)
//		{
//			if (vec[j] < vec[i]) {
//				--order;
//			}
//		}
//		cout << order << " ";
//	}
//}
//
