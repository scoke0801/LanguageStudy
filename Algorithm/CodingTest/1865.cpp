//#include <iostream>
//#include <algorithm>
//#include <climits>
//#include <vector>
//using namespace std;
//
//using Pair = std::pair<int, int>;
//constexpr int INIT = 50000000;
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//	cout.tie(nullptr);
//
//	int TC;
//	cin >> TC;
//
//	for (int tc = 0; tc < TC; ++tc)
//	{
//		int N, M, W;
//		cin >> N >> M >> W;
//
//		std::vector<int> dist(N + 1, INIT);
//		std::vector<std::pair< std::pair<int, int>, int>> edges;
//
//		for (int i = 0; i < M; ++i)
//		{
//			int S, E, T;
//			cin >> S >> E >> T;
//
//			edges.push_back(std::make_pair(std::make_pair(S, E), T));
//			edges.push_back(std::make_pair(std::make_pair(E, S), T));
//		}
//
//		for (int i = 0; i < W; ++i)
//		{
//			int S, E, T;
//			cin >> S >> E >> T;
//			edges.push_back(std::make_pair(std::make_pair(S, E), -T));
//		}
//
//		dist[1] = 0;
//
//		for (int i = 1; i < N; ++i)
//		{
//			for (int j = 0; j < edges.size(); ++j)
//			{
//				int from = edges[j].first.first;
//				int to = edges[j].first.second;
//				int cost = edges[j].second;
//
//				//if (dist[from] == INIT) { continue; }
//				dist[to] = std::min(dist[to], dist[from] + cost);
//			}
//		}
//
//		bool flag = false;
//		
//		for (int i = 0; i < edges.size(); ++i)
//		{
//			int from = edges[i].first.first;
//			int to = edges[i].first.second;
//			int cost = edges[i].second;
//
//			//if (dist[from] == INIT) { continue; }
//			if (dist[to] > dist[from] + cost)
//			{
//				flag = true;
//				break;
//			}
//		}
//
//		std::string ans = (flag) ? "YES" : "NO";
//		std::cout << ans << "\n";
//	}
//	return 0;
//}