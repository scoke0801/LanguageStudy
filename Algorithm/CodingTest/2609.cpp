
//#include <cmath>
//using namespace std;
//
//int gcd(int a, int b) {
//	int c = a % b;
//	while (c != 0) {
//		a = b;
//		b = c;
//		c = a % b;
//	}
//	return b;
//}
//
//int lcm(int a, int b) {
//	return (a * b) / gcd(a, b);
//}
//
//int main()
//{
//	int a, b;
//	cin >> a >> b;
//
//	int maxN = max(a, b);
//	int minN = min(a, b);
//	cout << gcd(minN, maxN) << "\n" << lcm(minN, maxN) << "\n";
//}