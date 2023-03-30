//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	int N;
//	cin >> N;
//	
//	vector<int> input(N);
//	for (int i = 0; i < N; ++i) {
//		cin >> input[i];
//	}
//
//	vector<int> vec(N, 0);
//
//	int prev = input[0];
//	for (int i = 1; i < N; ++i) {
//		int gap = std::abs(prev - input[i]);
//		if (gap > N - 1) {
//			cout << "NO";
//			return 0;
//		}
//		if (vec[gap] != 0) {
//			cout << "NO";
//			return 0;
//		}
//		++vec[gap];
//		prev = input[i];
//	}
//
//	cout << "YES";
//}
