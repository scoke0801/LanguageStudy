//#include <iostream>
//#include <vector>
//using namespace std;
//
//struct Coord {
//	int x, y;
//	Coord(int x, int y)
//	{
//		this->x = x;
//		this->y = y;
//	}
//};
//
//vector<Coord> shop;
//vector<Coord> house;
//vector<bool> visit;
//vector<int> buf(20, 0);
//int N, M;
//
//int ans = INT_MAX;
//void DFS(int cur, int level)
//{
//	if (level == M) {
//		int sum = 0;
//		for (int i = 0; i < house.size(); ++i) {
//			int x1 = house[i].x;
//			int y1 = house[i].y;
//			int dist = INT_MAX;
//			for (int j = 0; j < M; ++j) {
//				int x2 = shop[buf[j]].x;
//				int y2 = shop[buf[j]].y;
//				dist = std::min(dist, abs(x1 - x2) + abs(y1 - y2));
//			}
//			sum += dist;
//		}
//
//		ans = std::min(sum, ans);
//		return;
//	}
//	
//	for (int i = cur; i < shop.size(); ++i) {
//		buf[level] = i;
//		DFS(cur + 1, level + 1);
//	}
//}
//
//int main()
//{
//	cin >> N >> M;
//
//	visit.resize(N);
//	
//
//	int buffer;
//	for (int i = 0; i < N; ++i) 
//	{
//		for (int j = 0; j < N; ++j)
//		{
//			cin >> buffer;
//
//			if (buffer == 1) {
//				house.push_back(Coord{ i,j });
//			}
//			else if (buffer == 2) {
//				shop.push_back(Coord{ i,j });
//			}
//		}
//	}
//
//	DFS(0, 0);
//
//	cout << ans << "\n";
//}