//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <unordered_set>
//using namespace std;
//
//std::vector<int> triangleNums;
//
//std::unordered_set<int> buffer;
//void CalcTriangleNums(const int N)
//{
//	triangleNums.push_back(0);
//	for (int i = 1; i <= N; ++i)
//	{
//		triangleNums.push_back(i * (i + 1) / 2);
//	}
//
//	for (int i = 1; i <= N; ++i)
//	{
//		for (int j = 1; j <= N; ++j)
//		{
//			for (int k = 1; k <= N; ++k)
//			{
//				buffer.insert(triangleNums[i] + triangleNums[j] + triangleNums[k]);
//			}
//		}
//	}
//}
//int main()
//{
//	CalcTriangleNums(45);
//
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	int T;
//	cin >> T;
//
//	for (int i = 0; i < T; ++i)
//	{
//		int num;
//		cin >> num;
//
//		if (buffer.find(num) == buffer.end()) {
//			std::cout << 0 << "\n";
//		}
//		else {
//			std::cout << 1 << "\n";
//		}
//	}
//}