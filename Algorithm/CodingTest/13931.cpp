//#include <iostream>
//#include <queue>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int N, K;
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//	cout.tie(nullptr);
//
//	cin >> N >> K;
//
//	std::queue<std::pair<int, int>> buffer;
//	buffer.push(std::make_pair(N, 0));
//	
//	int ans = 0;
//	
//	std::vector<bool> visit(100001);
//	
//	std::vector<std::vector<int>> path;
//
//	while (!buffer.empty()) {
//		std::pair<int,int> cur = buffer.front();
//		buffer.pop();
//		if (cur.first == K) {
//			ans = cur.second;
//			break;
//		}
//		visit[cur.first] = true;
//
//		if (cur.second >= path.size()) {
//			path.push_back(std::vector<int>());
//		}
//
//		path[cur.second].push_back(cur.first);
//
//		if (cur.first - 1 >= 0 && !visit[cur.first - 1])
//		{
//			buffer.push(std::make_pair(cur.first - 1, cur.second + 1));
//		}
//		if (cur.first + 1 < 100001 && !visit[cur.first + 1]) { 
//			buffer.push(std::make_pair(cur.first + 1, cur.second + 1));
//		}
//
//		if (cur.first * 2 < 100001 && !visit[cur.first * 2]) {  
//			buffer.push(std::make_pair(cur.first * 2, cur.second + 1));
//		}
//	}
//
//	std::vector<int> temp(ans + 1);
//	temp[ans] = K;
//
//	int cur = K;
//	for (int i = ans - 1; i >= 0; --i) {
//		auto res = std::find(path[i].begin(), path[i].end(), cur - 1);
//		if (res != path[i].end())
//		{
//			temp[i] = cur - 1;
//			cur = cur - 1;
//			continue;
//		}
//
//		res = std::find(path[i].begin(), path[i].end(), cur + 1);
//		if (res != path[i].end())
//		{
//			temp[i] = cur + 1;
//			cur = cur + 1;
//			continue;
//		}
//
//		res = std::find(path[i].begin(), path[i].end(), cur / 2);
//		if (res != path[i].end()) 
//		{
//			temp[i] = cur / 2;
//			cur = cur / 2;
//			continue;
//		}
//	}
//
//	std::cout << ans << "\n";
//	
//	for (int i = 0; i <= ans; ++i) {
//		std::cout << temp[i] << " ";
//	}
//}