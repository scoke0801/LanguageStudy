//#include <iostream>
//#include <stack>
//using namespace std;
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	int K;
//	cin >> K;
//
//	stack<int> buf;
//	for (int i = 0; i < K; ++i) {
//		int num;
//		cin >> num;
//		if (num == 0) {
//			buf.pop();
//		}
//		else {
//			buf.push(num);
//		}
//	}
//
//	int sum = 0;
//	while (buf.empty() == false) {
//		sum += buf.top();
//		buf.pop();
//	}
//
//	cout << sum << "\n";
//}