//#include "Common.h"
//
//
//struct Vertex
//{
//	// int data;
//};
//
//vector<Vertex> vertices;
//vector<vector<int>>adjacent;		// ���� ���
//
//void CreateGraph()
//{
//	vertices.resize(6);
//
//	adjacent = vector < vector<int>>(6, vector<int>(6, -1));
//	
//	adjacent[0][1] = 15;
//	adjacent[0][3] = 35;
//	adjacent[1][0] = 15;
//	adjacent[1][2] = 5;
//	adjacent[1][3] = 10;
//	adjacent[3][4] = 5;
//	adjacent[5][4] = 5;
//}
//
//void Dijkstra(int here)
//{
//	struct VertexCost { int vertex, cost; };
//
//	list<VertexCost> discovered;
//	vector<int> best(6, INT32_MAX);
//	vector<int> parent(6, -1);
//
//	discovered.push_back(VertexCost{ here,0 });
//	best[here] = 0;
//	parent[here] = here;
//
//	while (discovered.empty() == false)
//	{
//		// ���� ���� �ĺ��� ã�´�.
//		list<VertexCost>::iterator bestIter;
//		int bestCost = INT32_MAX;
//
//		for (auto it = discovered.begin(); it != discovered.end(); ++it) {
//			const int cost = it->cost;
//
//			if (cost < bestCost) {
//				bestCost = cost;
//				bestIter = it;
//			}
//		}
//
//		// ������� ã�� �ĺ� �� ���� ���� �ĺ� ����
//		int cost = bestIter->cost;
//		here = bestIter->vertex;
//		discovered.erase(bestIter);
//
//		// �湮? �� ª�� ��θ� �ڴʰ� ã�Ҵٸ� ��ŵ.
//		if (best[here] < cost) {
//			continue;
//		}
//
//		// �湮!
//		for (int there = 0; there < 6; ++there)
//		{
//			// ������� �ʾ����� ��ŵ.
//			if (adjacent[here][there] == -1) {
//				continue;
//			}
//
//			// ���������κ��� ���ݱ����� ��� ���.
//			int nextCost = best[here] + adjacent[here][there];
//			if (nextCost >= best[there]) {
//				continue;
//			}
//
//			discovered.push_back(VertexCost{ there, nextCost });
//			best[there] = nextCost;
//			parent[there] = here;
//		}
//	}
//}
//
//int main()
//{
//	CreateGraph();
//
//	Dijkstra(0);
//}
