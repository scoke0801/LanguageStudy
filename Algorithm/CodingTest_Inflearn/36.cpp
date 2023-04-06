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
//	for (int i = 0; i < N; ++i)
//	{
//		cin >> vec[i];
//	}
//
//	for (int i = 1; i < N; ++i) {
//		int temp = vec[i];
//		int pos = i - 1;
//		for (; pos >= 0; --pos) {
//			if (vec[pos] > temp) {
//				vec[pos + 1] = vec[pos];
//			}
//			else {
//				break;
//			}
//		}
//
//		vec[pos + 1] = temp;
//	}
//
//	for (int n : vec) {
//		cout << n << " ";
//	}
//}