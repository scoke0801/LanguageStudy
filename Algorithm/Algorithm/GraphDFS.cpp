//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//vector<vector<int>> __adjacent;
//vector<bool> visited;
//
//void CreateGraph()
//{
//	__adjacent = vector<vector<int>>(6);
//
//	__adjacent[0].push_back(1);
//	__adjacent[0].push_back(3);
//	__adjacent[1].push_back(0);
//	__adjacent[1].push_back(2);
//	__adjacent[1].push_back(3);
//	__adjacent[3].push_back(4);
//	__adjacent[5].push_back(4);
//}
//
//void CreateGrpah2()
//{
//	__adjacent = vector<vector<int>>(6);
//
//	__adjacent = vector<vector<int>>
//	{
//		{ 0,1,0,1,0,0},
//		{1,0,1,1,0,0},
//		{0,0,0,0,0,0},
//		{0,0,0,0,1,0},
//		{0,0,0,0,0,0},
//		{0,0,0,0,1,0},
//	};
//}
//
//void Dfs(int here)
//{
//	visited[here] = true;
//	cout << "[" << here << "]\n";
//
//	for ( size_t i = 0; i < __adjacent[here].size(); ++i) 
//	{
//		int there = __adjacent[here][i];
//		if (visited[there] == false) {
//			Dfs(there);
//		}
//	}
//}
//
//void Dfs2(int here)
//{
//	visited[here] = true;
//	cout << "[" << here << "]\n";
//
//	for (int there = 0; there < 6; ++there) {
//		if (__adjacent[here][there] == 0) {
//			continue;
//		}
//		
//		if (visited[there] == false) {
//			Dfs2(there);
//		}
//	}
//}
//
//void DfsAll()
//{
//	for (int i = 0; i < 6; ++i) {
//		if (visited[i] == false) {
//			cout << "Start[" << i << "]\n";
//			Dfs2(i);
//		}
//	}
//}
//
//int main_DFS()
//{
//	visited = vector<bool>(6, false);
//
////	CreateGraph();
//	CreateGrpah2();
//
//	DfsAll();
//	return 0;
//}