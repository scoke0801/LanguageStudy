//#include <iostream>
//#include <vector>
//#include <numeric>
//#include <algorithm>
//#include <math.h>
//using namespace std;
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	int N;
//	cin >> N;
//
//	vector<int> count(8001);
//	vector<int> vec(N);
//	for (int i = 0; i < N; ++i) {
//		cin >> vec[i];
//		++count[vec[i] + 4000];
//	}
//
//
//	int mode = 0;
//	int maxNum = 0;
//	for (int i = 0; i <= 8000; i++)
//	{
//		if (count[i] > maxNum)
//		{
//			maxNum = count[i];
//			mode = i;
//		}
//	}
//
//	for (int i = mode + 1; i <= 8000; i++)
//	{
//		if (count[i] == maxNum)
//		{
//			mode = i;
//			break;
//		}
//	}
//
//	std::sort(vec.begin(), vec.end());
//	long long sum = std::accumulate(vec.begin(), vec.end(), 0);
//
//	int aver = round(sum / static_cast<double>(N));
//	cout << aver << "\n";
//	cout << vec[N / 2] << "\n";
//	cout << mode - 4000 << "\n";
//	cout << vec[N - 1] - vec[0] << "\n";
//}