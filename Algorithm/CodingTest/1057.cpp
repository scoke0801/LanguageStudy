//#include <iostream>
//using namespace std;
//
//int Win(int num)
//{
//	return num % 2 == 0 ? num / 2 : num / 2 + 1;
//}
//int main()
//{
//	int N;
//	int Jimin;
//	int Hansu;
//
//	cin >> N >> Jimin >> Hansu;
//
//	int round = 0;
//	while (Jimin != Hansu)
//	{
//		++round;
//		Jimin = Win(Jimin);
//		Hansu = Win(Hansu);
//	}
//
//	std::cout << round << "\n";
//	return 0;
//}