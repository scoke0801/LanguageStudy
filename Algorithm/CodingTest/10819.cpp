//#include<iostream>
//#include <vector>
//#include <cmath>
//#include <algorithm>
//using namespace std;
//
//int N;
//std::vector<int> arr; 
//std::vector<bool> visit;
//std::vector<int> path;
//int ans = 0;
//void dfs(int level)
//{
//	if (level == N ) {
//
//		int temp = 0;
//		for (int i = 0; i < N -1; ++i) {
//			temp += std::abs(path[i] - path[i + 1]);
//		}
//		ans = std::max(ans, temp);
//		return;
//	}
//
//	for (int i = 0; i < N; ++i)
//	{
//		if (visit[i]) { continue; }
//
//		visit[i] = true;
//
//		path[level] = arr[i];
//		dfs(level + 1);
//	
//		visit[i] = false;
//	}
//}
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	cin >> N;
//	arr.resize(N);
//	path.resize(N);
//	visit.resize(N);
//	for (int i = 0; i < N; ++i) {
//		cin >>arr[i];
//	}
//	
//	for (int i = 0; i < N; ++i) {
//		visit[i] = true;
//
//		path[0] = arr[i];
//		dfs(1);
//
//		visit[i] = false;
//	}
//
//	std::cout << ans << "\n";
//}