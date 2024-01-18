//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int arr[9];
//
//int main()
//{
//	int sum = 0;
//	for (int i = 0; i < 9; ++i) {
//		cin >> arr[i];
//		sum += arr[i];
//	}
//
//	std::sort(begin(arr), end(arr));
//
//	int a = 0, b = 0;
//	for (int i = 0; i < 9; ++i)
//	{
//		for (int j = 0; j < 9; ++j)
//		{
//			if (i == j) { continue; }
//			if (100 == sum - (arr[i] + arr[j]))
//			{
//				for (int n : arr) {
//					if (n == arr[i] || n == arr[j]) { continue; }
//					std::cout << n << "\n";
//				}
//				return 0;
//			}
//		}
//	}
//}