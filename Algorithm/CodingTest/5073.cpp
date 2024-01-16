//#include <iostream>
//#include <cmath>
//using namespace std;
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	while (true) {
//		int a, b, c;
//		cin >> a >> b >> c;
//
//		if (a == 0 && b == 0 && c == 0) {
//			break;
//		}
//
//		int longSide = std::max(a, std::max(b, c));
//		if ((longSide == a && (b + c) <= a)
//			|| (longSide == b && (a + c) <= b)
//			|| (longSide == c && (a + b) <= c))
//		{
//			std::cout << "Invalid\n";
//			continue;
//		}
//
//		if (a == b && b == c) {
//			std::cout << "Equilateral\n";
//		}
//		else if (a == b || b == c || a == c)
//		{
//			std::cout << "Isosceles\n";
//		}
//		else if (a != b && b != c && a != c) {
//			std::cout << "Scalene\n";
//		}
//	}
//}