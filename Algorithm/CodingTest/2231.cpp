//#include <iostream>
//#include <vector>
//#include <climits>
//
//using namespace std;
//
//int main()
//{
//	int N;
//	cin >> N;
//
//	vector<int> vec(N + 100, INT_MAX);
//
//	for (int i = 1; i <= N; ++i) {
//		int divSum = i;
//		int temp = i;
//		while (temp > 0) {
//			divSum += temp % 10;
//			temp /= 10;
//		}
//
//		if (vec[divSum] > i) {
//			vec[divSum] = i;
//		}
//	}
//	if (vec[N] == INT_MAX) {
//		cout << 0;
//	}
//	else {
//		cout << vec[N];
//	}
//}