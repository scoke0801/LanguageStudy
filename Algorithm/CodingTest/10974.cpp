//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//int N;
//std::vector<bool> visit;
//void dfs(int cur, int level, const std::string& str)
//{
//	if (level == N) 
//	{
//		std::cout << str << "\n";
//		return;
//	}
//
//	for (int i = 1; i <= N; ++i)
//	{
//		if (i == cur) { continue; }
//		if (visit[i]) { continue; }
//
//		visit[i] = true;
//		
//		dfs(i, level + 1, str + " " +std::to_string(i));
//
//		visit[i] = false;
//	}
//
//	 
//}
//int main()
//{
//	cin >> N;
//
//	visit.resize(N+1);
//	
//	for (int i = 1; i <= N; ++i)
//	{
//		visit[i] = true;
//		dfs(i, 1, std::to_string(i));
//		visit[i] = false;
//	}
//}