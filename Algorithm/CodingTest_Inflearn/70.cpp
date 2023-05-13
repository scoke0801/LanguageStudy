//#include <iostream>
//#include <vector>
//#include <queue>
//
//using namespace std;
//
//struct Element
//{
//	int to;
//	int level;
//};
//int N, M;
//vector<int> cost;
//vector<vector<Element>> vec;
//
//int main()
//{
//	cin >> N >> M;
//
//	vec.resize(N + 1);
//	cost.resize(N + 1);
//
//	for (int i = 0; i < M; ++i)
//	{
//		int from, to;
//		cin >> from >> to;
//		
//		vec[from].push_back({ to, 0 });
//	}	
//
//	queue<Element> buffer;
//	for (const Element& e : vec[1])
//	{
//		buffer.push({e.to, e.level + 1});
//	}
//
//	while (!buffer.empty())
//	{
//		Element e = buffer.front();
//		buffer.pop();
//
//		if (cost[e.to] != 0) { continue; }
//
//		cost[e.to] = e.level;
//
//		for (const Element& next : vec[e.to])
//		{
//			buffer.push({ next.to, e.level + 1 });
//		}
//	}
//
//	for (int i = 2; i <= N; ++i) {
//		cout << i << " : " << cost[i] << "\n";
//	}
//}