//#include <iostream>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//	
//	int N, M;
//	cin >> N >> M;
//	
//	vector<int> vec(N);
//	for (int i = 0; i < N; ++i) {
//		cin >> vec[i];
//	}
//
//	long long low = 1;
//	long long high = *(max_element(vec.begin(), vec.end()));
//
//	int ans = 0;
//	while (low <= high) {
//		long long mid = (low + high) / 2;
//		long long length = 0;
//
//		for (int i = 0; i < N; ++i) {
//			if (vec[i] > mid) {
//				length += (vec[i] - mid);
//			}
//		}
//
//		if (length >= M) {
//			low = mid + 1;
//
//			if (mid > ans) {
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