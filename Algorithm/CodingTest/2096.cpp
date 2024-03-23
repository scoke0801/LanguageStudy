//#include <iostream>
//using namespace std;
//
//int N;
//
//int arr[3];
//int min_dp[3];
//int max_dp[3];
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//	cout.tie(nullptr);
//
//	cin >> N;
//	
//	for (int i = 0; i < N; ++i)
//	{
//		cin >> arr[0] >> arr[1] >> arr[2];
//
//		int temp[3] = { min_dp[0], min_dp[1], min_dp[2] };
//		min_dp[0] = std::min(temp[0], temp[1]) + arr[0];
//		min_dp[1] = std::min(std::min(temp[0], temp[1]), temp[2]) + arr[1];
//		min_dp[2] = std::min(temp[1], temp[2]) + arr[2];
//
//		temp[0] = max_dp[0];
//		temp[1] = max_dp[1];
//		temp[2] = max_dp[2];
//		max_dp[0] = std::max(temp[0], temp[1]) + arr[0];
//		max_dp[1] = std::max(std::max(temp[0], temp[1]), temp[2]) + arr[1];
//		max_dp[2] = std::max(temp[1], temp[2]) + arr[2];
//	}
//
//	std::cout << std::max(std::max(max_dp[0], max_dp[1]), max_dp[2]) << " ";
//	std::cout << std::min(std::min(min_dp[0], min_dp[1]), min_dp[2]);
//
//	return 0;
//}