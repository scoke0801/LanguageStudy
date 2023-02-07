//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	string str;
//	cin >> str;
//
//	int ans = 0;
//	bool findMinus = false;
//	string num = "";
//	for (size_t i = 0; i <= str.length(); ++i) {
//
//		if (str[i] == '-' || str[i] == '+' || i == str.length()) {	
//			if (findMinus) {
//				ans -= stoi(num);
//			}
//			else {
//				ans += stoi(num);
//			}
//			num = "";
//		}
//		else {
//			num += str[i];
//		}
//
//		if (str[i] == '-') {
//			findMinus = true;
//		}
//	}
//
//	cout << ans;
//}