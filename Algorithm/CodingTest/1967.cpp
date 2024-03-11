//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//vector<pair<int, int>> buffer[10001];
//bool visited[10001] = { false };
//
//int Dfs(int cur) 
//{
//	if (visited[cur]) return -1000;
//
//	int sum = 0;
//	visited[cur] = true;
//	for (int i = 0; i < buffer[cur].size(); i++) 
//	{
//		int node = buffer[cur][i].first;
//		int value = buffer[cur][i].second;
//		sum = max(sum, value + Dfs(node));
//	}
//	return sum;
//}
//int main() 
//{
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//	cout.tie(nullptr);
//
//	int N;
//	cin >> N;
//
//	for (int i = 1; i < N; i++) 
//	{
//		int from, to, cost;
//		cin >> from >> to >> cost;
//
//		buffer[from].push_back(std::make_pair(to, cost));
//		buffer[to].push_back(std::make_pair(from, cost));
//	}
//
//	int ans = 0;
//	for (int i = 1; i <= N; i++) 
//	{
//		for (int j = 1; j <= N; j++) 
//		{
//			visited[j] = false;
//		}
//		ans = max(ans, Dfs(i));
//	}
//
//	cout << ans;
//	return 0;
//}