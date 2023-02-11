//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//	int N;
//	cin >> N;
//
//	vector<int> coords( N );
//	for (int i = 0; i < N; ++i) {
//		cin >> coords[i];
//	}
//
//	vector<int> copy(coords);
//
//	sort(copy.begin(), copy.end());
//	copy.erase(unique(copy.begin(), copy.end()), copy.end());
//
//	for (int coord : coords) {
//		auto iter = lower_bound(copy.begin(), copy.end(), coord);
//		cout << iter - copy.begin() << " ";
//	}
//}