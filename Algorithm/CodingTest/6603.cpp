//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//std::vector<int> lotto;
//std::vector<bool> visit;
//
//std::vector<int> path;
//
//void dfs(int prev, int N, int level)
//{
//	if (level == 6)
//	{
//		for (int i = 0; i < 6; ++i) {
//			std::cout << path[i] << " ";
//		}
//
//		std::cout << "\n";
//		return;	
//	}
//
//	for (int i = prev + 1; i < N; ++i) {
//		if (visit[i]) { continue; }
//
//		visit[i] = true;
//
//		path[level] = lotto[i];
//		dfs(i, N, level + 1);
//
//		visit[i] = false;
//	}
//}
//int main()
//{
//	while ( 1 ) {
//		int num;
//		cin >> num;
//		if (num == 0) { break; }
//
//		lotto.resize(num);
//		visit.resize(num);
//		path.resize(num);
//		for (int i = 0; i < num; ++i) {
//			cin >> lotto[i];
//		} 
//
//		std::sort(lotto.begin(), lotto.end());
//
//		for (int i = 0; i < num; ++i) {
//			visit[i] = true;
//			
//			path[0] = lotto[i];
//			dfs(i, num, 1);
//			
//			visit[i] = false;
//		}
//
//		std::cout << "\n";
//	}
//
//}