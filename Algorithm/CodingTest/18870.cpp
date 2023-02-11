//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <map>
//#include <set>
//using namespace std;
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//	int N;
//	cin >> N;
//
//	vector<int> coords( N );
//	map<int,int> map;
//	set<int> set;
//	for (int i = 0; i < N; ++i) {
//		cin >> coords[i];
//		set.insert(coords[i]);
//	}
//
//	int index = 0;
//	for (int num : set) {
//		map[num] = index;
//		++index;
//	}
//	
//	for (int coord : coords) {
//		cout << map[coord] << " ";
//	}
//}