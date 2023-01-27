//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//	int buf[11] = { 1, };
//	int N, K;
//
//	cin >> N >> K;
//
//	for (int i = 1; i <= 10; ++i) {
//		buf[i] = buf[i - 1] * i;
//	}
//	cout << (buf[N] / (buf[K] * buf[N - K])) << "\n";
//}