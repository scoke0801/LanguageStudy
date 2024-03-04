//#include <iostream>
//
//using namespace std;
//
//int gcd(int a, int b)
//{
//	if (b == 0) { return a; }
//	return gcd(b, a % b);
//}
//
//int lcm(int a, int b)
//{
//	return (a * b) / gcd(a, b);
//}
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	int T;
//	cin >> T;
//
//	int M, N, X, Y;
//	for (int t = 0; t < T; ++t)
//	{
//		cin >> M >> N >> X >> Y;
//
//		int ans = -1;
//		int a = lcm(M, N);
//		for (int i = X; i <= a; i += M)
//		{
//			int ny = i % N;
//			if (ny == 0) {
//				ny = N;
//			}
//
//			if (ny == Y) {
//				ans = i;
//				break;
//			}
//		}
//
//		std::cout << ans << "\n";
//	}
//
//	return 0;
//}