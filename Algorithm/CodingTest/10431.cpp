//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	const int N = 20;
//	int P;
//
//	cin >> P;
//
//	std::vector<int> ans(P, 0);
//	for (int i = 0; i < P; ++i) {
//		std::vector<int> vec(N, 0);
//		int T;
//		cin >> T;
//		for (int j = 0; j < N; ++j) {
//			cin >> vec[j];
//
//			int pos = j;
//			for (int k = j; k >= 0; --k)
//			{
//				if (vec[k] > vec[j]) { pos = k; }
//			}
//			if (pos == j) { continue; }
//
//			// 위치를 구함.
//			int temp = vec[j];
//			for (int k = j; k > pos; --k) {
//				vec[k] = vec[k - 1];
//				++ans[i];
//			}
//			vec[pos] = temp;
//		}
//
//		int break2 = 3;
//	}
//
//	for (int i = 0; i < P; ++i) {
//		std::cout << i + 1 << " " << ans[i] << "\n";
//	}
//}