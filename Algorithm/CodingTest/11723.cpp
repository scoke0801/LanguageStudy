//#include <iostream>
//using namespace std;
//
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	bool set[20] = { false, };
//
//	int N;
//	cin >> N;
//
//	string oper;
//	int data;
//	for (int i = 0; i < N; ++i) {
//		cin >> oper;
//		if (oper == "add") {
//			cin >> data;
//			set[data - 1] = true;
//		}
//		else if (oper == "remove") {
//			cin >> data;
//			set[data - 1] = false;
//		}
//		else if (oper == "check") {
//			cin >> data;
//			cout << static_cast<int>(set[data - 1]) << "\n";
//		}
//		else if (oper == "empty") {
//			for (int i = 0; i < 20; ++i) {
//				set[i] = false;
//			}
//		}
//		else if (oper == "toggle") {
//			cin >> data;
//			if (set[data - 1]) {
//				set[data - 1] = 0;
//			}
//			else {
//				set[data - 1] = 1;
//			}
//		}
//		else if (oper == "all") {
//			for (int i = 0; i < 20; ++i) {
//				set[i] = true;
//			}
//		}
//	}
//}