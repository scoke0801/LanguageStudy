//#include<iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//int N, M;
//int buttons[10];
//int cur = 100;
//
//bool checkButton(int n)
//{
//	std::string str = std::to_string(n);
//	for (size_t i = 0; i < str.length(); ++i) {
//		if (buttons[str[i] - '0']) {
//			return false;
//		}
//	}
//
//	return true;
//}
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	cin >> N >> M;
//
//	for (int i = 0; i < M; ++i) {
//		int num;
//		cin >> num;
//		buttons[num] = true;
//	}
//
//	int ans = std::abs(100 - N);
//
//	for (int i = 0; i <= 1000000; ++i)
//	{
//		if (checkButton(i)) {
//			int ans2 = std::abs(N - i) + to_string(i).length();
//			ans = std::min(ans, ans2);
//		}
//	}
//
//	std::cout << ans << "\n";
//
//}