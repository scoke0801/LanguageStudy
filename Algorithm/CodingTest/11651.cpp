//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//struct Coord {
//	int x, y;
//};
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	int N;
//	cin >> N;
//
//	vector<Coord> vec(N);
//
//	for (int i = 0; i < N; ++i) {
//		cin >> vec[i].x >> vec[i].y;
//	}
//
//	std::sort(vec.begin(), vec.end(), [](const Coord& a, const Coord& b)
//		{
//			if (a.y == b.y) {
//				return a.x < b.x;
//			}
//			return a.y < b.y;
//		});
//
//	for (const auto& coord : vec) {
//		cout << coord.x << " " << coord.y << "\n";
//	}
//
//}