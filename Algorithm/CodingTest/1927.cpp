//#include <iostream>
//#include <queue>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	priority_queue<int, vector<int>, greater<int>> queue;
//
//	int N;
//	cin >> N;
//	for (int i = 0; i < N; ++i) {
//		int num;
//		cin >> num;
//		if (num == 0) {
//			if (queue.empty()) { cout << 0 << "\n"; }
//			else {
//				num = queue.top();
//				queue.pop();
//				cout << num << "\n";
//			}
//		}
//		else {
//			queue.push(num);
//		}
//	}
//}