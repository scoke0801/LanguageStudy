//#include <iostream>
//#include <set>
//using namespace std;
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//	int N;
//	cin >> N;
//
//	set<int> buffer;
//	for (int i = 0; i < N; ++i) {
//		int num;
//		cin >> num;
//		
//		buffer.insert(num);
//	}
//	
//	int M;
//	cin >> M;
//	for (int i = 0; i < M; ++i) {
//		int num;
//		cin >> num;
//
//		if (buffer.find(num) == buffer.end()) {
//			cout << 0 << "\n";
//		}
//		else {
//			cout << 1 << "\n";
//		}
//	}
//}