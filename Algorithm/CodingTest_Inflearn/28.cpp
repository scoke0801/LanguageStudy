//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	int N;
//
//	cin >> N;
//
//	vector<int> vec(N + 1);
//	for (int i = 2; i <= N; ++i)
//	{
//		int temp = i;
//		int prime = 2;
//		while (temp > 1) {
//			if (temp % prime) {
//				++prime;
//			}
//			else {
//				++vec[prime];
//				temp /= prime;
//			}
//		}
//	}
//
//	cout << std::min(vec[2], vec[5]);
//}