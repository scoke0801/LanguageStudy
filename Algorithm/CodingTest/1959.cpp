//#include <iostream>
//using namespace std;
//
//int main()
//{
//	long long N, M;
//
//	cin >> M >> N; 
//
//	if (M > N)
//	{
//		std::cout << 2 * (N - 1) + 1 << "\n";
//	}
//	else
//	{
//		std::cout << 2 * (M - 1) << "\n";
//	}
//
//	if (M == N)
//	{
//		if (M % 2)
//		{
//			std::cout << (M - 1) / 2 + 1 << " " << (M - 1) / 2 + 1;
//		}
//		else
//		{
//			std::cout << M / 2 + 1 << " " << M / 2;
//		}
//	}
//	else
//	{
//		if (N > M)
//		{
//			if (M % 2 == 0)
//			{
//				std::cout << M / 2 + 1 << " " << M / 2;
//			}
//			else
//			{
//				std::cout << M / 2 + 1 << " " << M / 2 + 1 + (N - M);
//			}
//		}
//		else
//		{
//			if (N % 2 == 0)
//			{
//				std::cout << N / 2 + 1 << " " << N / 2;
//			}
//			else
//			{
//				std::cout << N / 2 + 1 + (M - N) << " " << N / 2 + 1;
//			}
//		}
//	}
//	return 0;
//}