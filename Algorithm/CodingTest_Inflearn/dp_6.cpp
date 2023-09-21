//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//int main() 
//{
//	int N = 10;;
//	
//	std::vector<int> vec{ 4,1,2,3,9,7,5,6,10,8 };
//	std::vector<int> dp(N);
//	
//	for (int i = 1; i < N; ++i) {
//		int maxValue = 0;
//		for (int j = i - 1; j >= 0; --j) {
//			if (vec[j] < vec[i] && dp[j] > maxValue) {
//				maxValue = dp[j];
//			}
//		}
//
//		dp[i] = maxValue + 1;
//	}
//
//	std::cout << *(std::max_element(dp.begin(), dp.end()));
//}