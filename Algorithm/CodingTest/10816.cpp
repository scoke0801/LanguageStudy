//#include <iostream>
//#include <unordered_map>
//using namespace std;
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	int N;
//	cin >> N;
//
//	unordered_map<int, int> buffer;
//
//	for (int i = 0; i < N; ++i) {
//		int num;
//		cin >> num;
//		buffer[num]++;
//	}
//
//	int M;
//	cin >> M;
//
//	for (int i = 0; i < M; ++i) {
//		int num;
//		cin >> num;
//
//		auto res = buffer.find(num);
//		if (res == buffer.end()) {
//			cout << 0 << " ";
//		}
//		else {
//			cout << res->second << " ";
//		}
//	}
//}