//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	int K, N;
//	cin >> K >> N;
//
//	vector<int> vec(K);
//	for (int i = 0; i < K; ++i) {
//		cin >> vec[i];
//	}
//
//	int ans = 0;
//	long long low = 1;
//	long long high = *(std::max_element(vec.begin(), vec.end()));
//
//	while (low <= high) {
//		long long mid = (low + high) / 2;
//
//		int count = 0;
//		for (int i = 0; i < K; ++i) {
//			count += vec[i] / mid;
//		}
//
//		if (count >= N) {
//			low = mid + 1;
//			if (ans < mid) {
//				ans = mid;
//			}
//		}
//		else {
//			high = mid - 1;
//		}
//	}
//
//	cout << ans;
//}