//#include <iostream>
//#include <vector>
//using namespace std;
//
//
//int main()
//{
//	int num, target, weight, value;
//
//	cin >> num >> target;
//
//	vector<int> dp(target + 1, 0);
//
//	for (int i = 0; i < num; ++i) {
//		cin >> weight >> value;
//
//		for (int j = weight; j <= target; ++j)
//		{
//			dp[j] = std::max(dp[j], dp[j - weight] + value);
//		}
//	}
//
//	cout << dp[target];
//
//}