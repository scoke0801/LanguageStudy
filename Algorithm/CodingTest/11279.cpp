//#include <iostream>
//#include <queue>
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
//	priority_queue<int> queue;
//	for (int i = 0; i < N; ++i) {
//		int x;
//		cin >> x;
//
//		if (x == 0) {
//			if (queue.empty()) {
//				cout << 0 << "\n";
//			}
//			else {
//				int num = queue.top();
//				queue.pop();
//				cout << num << "\n";
//			}
//		}
//		else {
//			queue.push(x);
//		}
//	}
//}