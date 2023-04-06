//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	int S, N;
//	cin >> S >> N;
//
//	vector<int> vec(S);
//
//	for (int i = 0; i < N; ++i)
//	{
//		int cache;
//		cin >> cache;
//
//		int pos = -1;
//		for (int j = 0; j < S; ++j) {
//			if (cache == vec[j]) {
//				pos = j;
//				break;
//			}
//		}
//		if (pos == -1) {
//			vec.erase(vec.end() - 1);
//			vec.insert(vec.begin(), cache);
//		}
//		else
//		{
//			int temp = vec[pos];
//			for (int j = pos - 1; j >= 0; --j) {
//				vec[j + 1] = vec[j];
//			}
//			vec[0] = temp;
//		}
//	}
//
//	for (int num : vec)
//	{
//		cout << num << " ";
//	}
//}