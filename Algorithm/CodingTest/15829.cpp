//#include <iostream>
//#include <cmath>
//using namespace std;
//
//constexpr int MOD = 1234567891;
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	int L;
//	string str;
//
//	cin >> L;
//	cin >> str;
//
//	long long R = 1;
//	long long sum = 0;
//	for (size_t i = 0; i < str.length(); ++i) {
//		int num = str[i] - 'a' + 1;
//		sum = (sum + (num * R)) % MOD;
//		R = (R * 31) % MOD;
//	}
//	
//	cout << sum << "\n";
//}