//#include <iostream>
//#include <algorithm>
//#include <deque>
//
//struct Wait {
//	int inputOrder;
//	int value = 0;
//
//	bool operator<(const Wait& other) {
//		return value < other.value;
//	}
//};
//using namespace std;
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	int T;
//	cin >> T;
//
//	for (int i = 0; i < T; ++i) {
//		int N, M;
//		cin >> N >> M;
//
//		deque<Wait> data;
//		for (int j = 0; j < N; ++j) {
//			int value;
//			cin >> value;
//
//			data.push_back({ j, value });	
//		}
//
//		int order = 1;
//		while (!data.empty()) {
//			Wait cur = data[0];
//			Wait maxE = *( std::max_element(data.begin(), data.end()) );
//			if (maxE.value > data[0].value) {
//				data.pop_front();
//				data.push_back(cur);
//			}
//			else {
//				if (data[0].inputOrder == M) {
//					cout << order << "\n";
//					break;
//				}
//				data.pop_front();
//				++order;
//			}
//		}
//	}
//}