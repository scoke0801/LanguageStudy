//#include <iostream>
//#include <vector>
//#include <climits>
//
//using namespace std;
//
//int N;
//std::vector<int> cost;
//std::vector<int> buffer;
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	cin >> N;
//	cost.resize(N + 1);
//	buffer.resize(N + 1);
//	for (int i = 1; i <= N; ++i)
//	{
//		cin >> cost[i];
//	}
//
//	buffer[1] = cost[1];
//
//	for (int i = 2; i <= N; ++i)
//	{
//		int cur = INT_MAX;
//		for (int j = 1; j <= N; ++j)
//		{
//			if (i - j < 0) { break; }
//
//			cur = std::min(cur, buffer[i - j] + cost[j]);
//		}
//		buffer[i] = cur;
//	}
//
//	std::cout << buffer[N];
//}