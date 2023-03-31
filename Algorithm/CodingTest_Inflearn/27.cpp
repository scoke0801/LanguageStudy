//#include <iostream>
//#include <vector>
//#include <queue>
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
//	cout << N << "! = ";
//	for (int i = 2; i <= N; ++i) {
//		if (vec[i] != 0) {
//			cout << vec[i] << " ";
//		}
//	}
//}