//#include <iostream>
//#include <vector>
//#include <stack>
//#include <algorithm>
//using namespace std;
//
//int N, R;
//int ans;
//vector<int> vec;
//vector<bool> visited;
//vector<int> order;
//
//void dfs(int cur, int level)
//{
//	if (level == R) {
//		++ans;
//
//		for (int num : order) {
//			cout << num << " ";
//		}
//
//		cout << "\n";
//		return;
//	}
//
//	for (int i = 0; i < N; ++i) {
//		if (visited[i]) { continue; }
//		visited[i] = true;
//
//		order.push_back(vec[i]);
//		dfs(vec[i], level + 1);
//		order.pop_back();
//
//		visited[i] = false;
//	}
//}
//
//int main()
//{
//	cin >> N >> R;
//
//	vec.resize(N);
//	visited.resize(N);
//	for (int i = 0; i < N; ++i) {
//		cin >> vec[i];
//	}
//
//	std::sort(vec.begin(), vec.end());
//	for (int i = 0; i < N; ++i) {
//		visited[i] = true;
//		order.push_back(vec[i]);
//		dfs(vec[i], 1);
//		order.pop_back();
//		visited[i] = false;
//	}
//
//	cout << ans;
//}
