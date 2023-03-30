//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	int N;
//	cin >> N;
//
//	vector<int> nums(N);
//	for (int i = 0; i < N; ++i) {
//		cin >> nums[i];
//	}
//
//	int ans = 0;
//	int length = 1;
//	int prev = nums[0];
//	for (int i = 1; i < N; ++i) {
//		if (nums[i] >= prev) {
//			++length;
//		}
//		else {
//			ans = std::max(ans, length);
//			length = 1;
//		}
//		prev = nums[i];
//	}
//
//	ans = std::max(ans, length);
//
//	cout << ans << "\n";
//}