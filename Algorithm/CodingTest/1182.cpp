//#include <iostream>
//#include <vector>
//using namespace std;
//
//std::vector<int> arr;
//
//int N, S;
//int ans = 0; 
//void dfs(int sum, int level)
//{
//	if (level == N)
//	{
//		if (sum == S)
//		{
//			++ans;
//		}
//
//		return;
//	}
//
//
//	dfs(sum + arr[level], level + 1);
//
//	dfs(sum, level + 1);
//}
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	cin >> N >> S;
//
//	arr.resize(N); 
//	for (int i = 0; i < N; ++i)
//	{
//		cin >> arr[i];
//	}
//
//	dfs(0, 0);
//
//	if (S == 0) ans--;	//s가 0일때는 공집합 일때를 고려(-1)
//
//	std::cout << ans;
//}