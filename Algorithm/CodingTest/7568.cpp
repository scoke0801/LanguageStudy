//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//struct Info {
//	int weight;
//	int height;
//	int order = 1;
//};
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	int N;
//	cin >> N;
//
//	vector<Info> vec(N);
//
//	for (int i = 0; i < N; ++i) {
//		cin >> vec[i].weight >> vec[i].height;
//	}
//
//	for (int i = 0; i < N; ++i) {
//		for (int j = 0; j < N; ++j) {
//			if (i == j) { continue; }
//
//			if ( (vec[i].weight < vec[j].weight) && (vec[i].height < vec[j].height)){
//				++vec[i].order;
//			}
//		}
//	}
//
//	for (const Info& info : vec) {
//		cout << info.order << " ";
//	}
//}