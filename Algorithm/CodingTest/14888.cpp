//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <limits>
//using namespace std;
//
//int N;
//std::vector<int> arr;
//std::vector<int> oper(4);
//
//int min_ans = INT_MAX;
//int max_ans = INT_MIN;
//void dfs(int res, int level)
//{
//	if (level == N)
//	{
//		min_ans = std::min(min_ans, res);
//		max_ans = std::max(max_ans, res);
//		return;
//	}
//
//	for (int i = 0; i < 4; ++i) {
//		if (oper[i] == 0) { continue; }
//
//		--oper[i];
//
//		switch (i)
//		{
//		case 0:	dfs(res + arr[level], level + 1); break;
//		case 1:	dfs(res - arr[level], level + 1); break;
//		case 2:	dfs(res * arr[level], level + 1); break;
//		case 3: dfs(res / arr[level], level + 1); break;
//		default: break;
//		}
//
//		++oper[i];
//	}
//
//}
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	cin >> N;
//
//	arr.resize(N);
//	for (int i = 0; i < N; ++i) {
//		cin >> arr[i];
//	}
//
//	for (int i = 0; i < 4; ++i) {
//		cin >> oper[i];
//	}
//
//	for (int i = 0; i < 4; ++i)
//	{
//		if (oper[i] == 0) { continue; }
//
//		dfs(arr[0], 1);
//	}
//
//	std::cout << max_ans << "\n" << min_ans << "\n";
//}