//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	int T;
//	cin >> T;
//
//	int arr[10001][4] = {0,};
//
//	arr[1][1] = 1;
//	arr[2][1] = 1;
//	arr[2][2] = 1;
//	arr[3][1] = 1;
//	arr[3][2] = 1;
//	arr[3][3] = 1;
//
//	for (int i = 4; i <= 10000; ++i)
//	{
//		arr[i][1] = arr[i - 1][1];
//		arr[i][2] = arr[i - 2][1] + arr[i - 2][2];
//		arr[i][3] = arr[i - 3][1] + arr[i - 3][2] + arr[i - 3][3];
//	}
//
//	std::vector<int> input;
//	for (int i = 0; i < T; ++i) {
//		int N;
//		cin >> N;
//		input.push_back(N);
//
//	}
//
//	for (int n : input) {
//		cout << arr[n][1] + arr[n][2] + arr[n][3] << "\n";
//	}
//}
