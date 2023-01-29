//#include <iostream>
//#include <stack>
//#include <string>
//using namespace std;
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	while (true) {
//		string str;
//		getline(cin, str);
//
//		if (str[0] == '.') {
//			break;
//		}
//		
//		stack<char> buf;
//		bool flag = false;
//		for (const char& ch : str) {
//			if (ch != '.') {
//				if (ch == '(' || ch == '[' ) {
//					buf.push(ch);
//				}
//				else if (ch == ')') {
//					if (!buf.empty() && buf.top() == '(') {
//						buf.pop();
//					}
//					else {
//						flag = true;
//					}
//				}
//				else if (ch == ']') {
//					if (!buf.empty() && buf.top() == '[') {
//						buf.pop();
//					}
//					else {
//						flag = true;
//					}
//				}
//			}
//		}
//
//		if (!flag && buf.empty()) {
//			cout << "yes\n";
//		}
//		else {
//			cout << "no\n";
//		}
//	}
//}