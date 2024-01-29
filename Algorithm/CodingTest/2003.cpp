//#include <iostream>
//#include <vector>
//using namespace std;
//
//int N, M;
//std::vector<int> nums; 
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	cin >> N >> M;
//
//	nums.resize(N); 
//	for (int i = 0; i < N; ++i) {
//		cin >> nums[i]; 
//	} 
//
//	int ans = 0;
//	for (int i = 0; i < N; ++i) { 
//		int sum = 0;
//		for (int j = i; j < N; ++j) {
//			sum += nums[j];
//			if (sum == M) {
//				++ans;
//				break;
//			}
//		}
//	}
//
//	std::cout << ans << "\n";
//}