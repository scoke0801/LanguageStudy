//#include "Common.h"
//
//vector<vector<int>> adjacent;
//vector<bool> discovered;
//
//void CreateGrpah_ByList()
//{
//	adjacent = vector<vector<int>>(6);
//
//	adjacent[0].push_back(1);
//	adjacent[0].push_back(3);
//	adjacent[1].push_back(0);
//	adjacent[1].push_back(2);
//	adjacent[1].push_back(3);
//	adjacent[3].push_back(4);
//	adjacent[5].push_back(4);
//}
//
//void CreateGrpah_ByMat()
//{
//	adjacent = vector<vector<int>>(6);
//
//	adjacent = vector<vector<int>>
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
//void Bfs(int here)
//{
//	vector<int> parent(6, -1);
//	vector<int> distance(6, -1);
//
//	queue<int> q;
//	q.push(here);
//	discovered[here] = true;
//
//	parent[here] = here;
//	distance[here] = 0;
//
//	while (q.empty() == false) {
//		here = q.front();
//		q.pop();
//
//		cout << string_format("Visited : %d\n", here);
//		
//		for (int there : adjacent[here]) {
//			if (discovered[there]) {
//				continue;
//			}
//
//			q.push(there);
//			discovered[there] = true;
//
//			// 거리 계산용.
//			parent[there] = here;
//			distance[there] = distance[here] + 1;
//		}
//	}
//}
//
//int main()
//{
//	discovered = vector<bool>(6, false);
//	CreateGrpah_ByList();
//	Bfs(0);
//
//	return 0;
//}
