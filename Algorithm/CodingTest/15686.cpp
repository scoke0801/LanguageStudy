//#include <iostream>
//#include <vector>
//#include <cmath>
//#include <climits>
//using namespace std;
//
//using Pair = std::pair<int, int>;
//int N, M;
//
//int board[51][51];
//int ans = INT_MAX;
//
//std::vector<Pair> house;
//std::vector<Pair> chicken; 
//std::vector<Pair> path;
//void Dfs(int cur, int level)
//{
//	if (level == M)
//	{
//		int dist = 0;
//
//		for (int i = 0; i < house.size(); ++i)
//		{
//			int cur = INT_MAX;
//			for (int j = 0; j < path.size(); ++j)
//			{
//				cur = std::min( cur, 
//					std::abs(house[i].first - path[j].first) + std::abs(house[i].second - path[j].second));
//			}
//			dist += cur;
//		}
//
//		ans = std::min(ans, dist);
//		return;
//	}
//
//	for (int i = cur; i < chicken.size(); ++i)
//	{
//		path[level] = chicken[i];
//		Dfs(i + 1, level + 1);
//	}
//}
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//	cout.tie(nullptr);
//
//	cin >> N >> M;
//	path.resize(M);
//
//	for (int i = 0; i < N; ++i)
//	{
//		for (int j = 0; j < N; ++j)
//		{
//			int num;
//			cin >> num;
//			if (num == 1)
//			{
//				house.push_back(std::make_pair(j, i));
//			}
//			else if (num == 2)
//			{
//				chicken.push_back(std::make_pair(j, i));
//			}
//		}
//	}
//
//	Dfs(0, 0);
//
//	std::cout << ans << "\n";
//	return 0;
//}