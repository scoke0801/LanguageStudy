//// https://www.acmicpc.net/problem/1707
//
//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//
//constexpr int RED = 1;
//constexpr int BLUE = 2;
//
//std::vector<std::vector<int>> buffer;
//std::vector<int> visit;
//
//void Bfs(int start)
//{
//	visit[start] = RED;
//
//	std::queue<int> queue;
//	queue.push(start);
//
//	while (queue.empty() == false)
//	{
//		int cur = queue.front();
//		queue.pop();
//
//		for (int i = 0; i < buffer[cur].size(); ++i)
//		{
//			if (visit[buffer[cur][i]] != 0) { continue; }
//
//			queue.push(buffer[cur][i]);
//
//			if (visit[cur] == RED) visit[buffer[cur][i]] = BLUE;
//			else if(visit[cur] == BLUE) visit[buffer[cur][i]] = RED;
//		}
//	}
//}
//
//void Dfs(int start)
//{
//	if (visit[start] == 0) {
//		visit[start] = RED;
//	}
//
//	for (int to = 0; to < buffer[start].size(); ++to)
//	{
//		if (visit[buffer[start][to]] != 0) { continue; }
//
//		if (visit[start] == RED) { visit[buffer[start][to]] = BLUE; }
//		else if (visit[start] == BLUE) { visit[buffer[start][to]] = RED; }
//
//		Dfs(buffer[start][to]);
//	}
//}
//
//bool Check(int V)
//{
//	for (int from = 1; from <= V; ++from)
//	{
//		for (int to = 0; to < buffer[from].size(); ++to)
//		{
//			if (visit[from] == visit[buffer[from][to]]) {
//				return false;
//			}
//		}
//	}
//	return true;
//}
//
//int main()
//{
//	int K;
//	cin >> K;
//
//	for (int k = 0; k < K; ++k)
//	{
//		int V, E;
//
//		cin >> V >> E;
//		
//		buffer.clear();
//		buffer.resize(V + 1);
//
//		visit.clear();
//		visit.resize(V + 1);
//
//		for (int e = 0; e < E; ++e)
//		{
//			int from, to;
//			cin >> from >> to;
//
//			buffer[from].push_back(to);
//			buffer[to].push_back(from);
//		}
//		 
//		for (int from = 1; from <= V; ++from) {
//			if (visit[from] == false) {
//				Dfs(from);
//			}
//		} 
//
//		if (Check(V)) {
//			std::cout << "YES" << "\n";
//		}
//		else {
//			std::cout << "NO" << "\n";
//		}
//		
//	}
//}