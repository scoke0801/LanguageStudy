//#include<iostream>
//#include <vector>
//#include <memory.h>
//using namespace std;
//
//struct Coord {
//	int x, y;
//};
//
//Coord DIR[4] = {
//	{0, -1},
//	{0, 1},
//	{1, 0},
//	{-1, 0}
//};
//
//bool visited[50][50];
//int map[50][50];
//int cnt = 0;
//
//void Visit(const Coord& pos)
//{
//	Coord coord = { 0, 0 };
//
//	if (visited[pos.y][pos.x] == false) {
//		++cnt;
//	}
//	visited[pos.y][pos.x] = true;
//
//	for (int i = 0; i < 4; ++i) {
//		Coord newCoord{ pos.x + DIR[i].x, pos.y + DIR[i].y };
//
//		if (newCoord.x < 0 || newCoord.x >= 50) { continue; }
//		if (newCoord.y < 0 || newCoord.y >= 50) { continue; }
//
//		if (map[newCoord.y][newCoord.x] == 0) { continue; }
//		if (visited[newCoord.y][newCoord.x] == true) { continue; }
//
//		visited[newCoord.y][newCoord.x] = true;
//		Visit(newCoord);
//	}
//}
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	int T;
//	cin >> T;
//
//	for (int i = 0; i < T; ++i) {
//		int M, N, K;
//		cin >> M >> N >> K;
//
//		vector<Coord> vec(K);
//		cnt = 0;
//
//		memset(map, 0, sizeof(map));
//		memset(visited, false, sizeof(visited));
//
//		for (int j = 0; j < K; ++j) {
//			int x, y;
//			cin >> x >> y;
//
//			map[y][x] = 1;
//			vec[j].x = x;
//			vec[j].y = y;
//		}
//
//		for (int j = 0; j < K; ++j) {
//			Visit(vec[j]);
//		}
//
//		cout << cnt << "\n";
//	}
//}