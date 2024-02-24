//#include <iostream>
//#include <string.h>
//#include <climits>
//using namespace std;
//
//int N;
//bool ligths[100000];
//bool target[100000];
//bool temp[100000];
//int ans = INT_MAX;
//bool ligthOn(bool first)
//{
//	std::memcpy(temp, ligths, sizeof(bool) * N);
//
//	int count = 0;
//
//	if (first)
//	{
//		temp[0] = 1 - temp[0];
//		temp[1] = 1 - temp[1];
//		++count;
//	}
//	for (int i = 1; i < N; ++i)
//	{
//		if (temp[i-1] == target[i-1]) { continue; }
//
//		if (i == 0) {
//			temp[i] = 1 - temp[i];
//			temp[i + 1] = 1 - temp[i+1];
//		}
//		else if (i == N - 1) {
//			temp[i - 1] = 1 - temp[i - 1];
//			temp[i] = 1 - temp[i];
//		}
//		else {
//			temp[i - 1] = 1 - temp[i - 1];
//			temp[i] = 1 - temp[i];
//			temp[i + 1] = 1 - temp[i + 1];
//		}
//		++count;
//	}
//
//	for (int i = 0; i < N; ++i) {
//		if (temp[i] != target[i]) {
//			return false;
//		}
//	}
//
//	ans = std::min(ans, count);
//	return true;
//}
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	cin >> N;
//
//	std::string temp;
//	cin >> temp;
//	for (int i = 0; i < N; ++i)
//	{
//		ligths[i] = temp[i] - '0';
//	}
//
//	cin >> temp;
//	for (int i = 0; i < N; ++i)
//	{
//		target[i] = temp[i] - '0';
//	}
//	
//	// 0¹ø on.
//	ligthOn(true);
//
//	// 0¹ø off.
//	ligthOn(false);
//
//	if (ans == INT_MAX) {
//		std::cout << -1;
//	}
//	else {
//		std::cout << ans;
//	}
//}