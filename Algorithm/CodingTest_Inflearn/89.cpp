//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//
//
//int x_dir[] = { -1, 0, 1, 0 };
//int y_dir[] = { 0,-1,0,1 };
//
//int M, N;
//
//struct RipeInfo
//{
//	int x, y;
//	int day;
//	RipeInfo(int x, int y, int day) : x(x), y(y), day(day) {}
//};
//
//vector<vector<int>> tomato;
//queue<RipeInfo> ripeInfo;
//
//void DoRipe()
//{
//	vector<vector<bool>> visited(N, vector<bool>(M));
//	
//	int ans = 0;
//	while (!ripeInfo.empty()) {
//		RipeInfo info = ripeInfo.front();
//		ripeInfo.pop();
//		visited[info.x][info.y] = true;
//
//		for (int i = 0; i < 4; ++i) {
//			int new_x = info.x + x_dir[i];
//			int new_y = info.y + y_dir[i];
//			if (new_x < 0 || new_y < 0) { continue; }
//			if (new_x >= N || new_y >= M) { continue; }
//			if (visited[new_x][new_y]) { continue; }
//
//			ans = std::max(info.day + 1, ans);
//			ripeInfo.emplace(new_x, new_y, info.day + 1);
//		}
//	}
//	cout << ans << "\n";
//}
//
//int main()
//{
//	cin >> M >> N;
//
//	tomato.resize(N);
//	
//	bool allTomatoRiped = true;
//	for (int i = 0; i < N; ++i) {
//		tomato[i].resize(M);
//		for (int j = 0; j < M; ++j) {
//			cin >> tomato[i][j];
//			if (tomato[i][j] == 1) {
//				ripeInfo.emplace(i, j, 0);
//			}
//			else {
//				allTomatoRiped = false;
//			}
//		}
//	}
//
//	if (ripeInfo.empty()) {
//		cout << -1;
//	}
//	else if (allTomatoRiped == true) {
//		cout << 0;
//	}
//	else
//	{
//		DoRipe();
//	}
//
//}