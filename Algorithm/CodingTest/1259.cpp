//#include <iostream>
//using namespace std;
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//	string str;
//
//	while (cin >> str) {
//		if (str == "0") {
//			break;
//		}
//
//		string answer = "yes";
//		size_t length = str.length();
//		for (size_t i = 0; i < length / 2; ++i) {
//			if (str[i] != str[length - 1 - i]) {
//				answer = "no";
//				break;
//			}
//		}
//		cout << answer << "\n";
//	}
//}