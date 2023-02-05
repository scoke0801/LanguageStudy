//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//vector< vector<short>> vec;
//bool visitied[101];
//short cnt = 0;
//
//void dfs(short pos)
//{	
//	if (visitied[pos]) {
//		return;
//	}
//
//	visitied[pos] = true;
//	++cnt;
//
//	for (size_t i = 0; i < vec[pos].size(); ++i) {
//		if (visitied[vec[pos][i]]) { continue; }
//
//		dfs(vec[pos][i]);
//	}
//}
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	short COM_NUM, LINK_NUM;
//	cin >> COM_NUM >> LINK_NUM;
//
//	vec.resize(COM_NUM+ 1);
//	for (short i = 0; i < LINK_NUM; ++i) {
//		short start, end;
//		cin >> start >> end;
//
//		vec[start].push_back(end);
//		vec[end].push_back(start);
//	}
//
//	dfs(1);
//	cout << cnt - 1;
//}