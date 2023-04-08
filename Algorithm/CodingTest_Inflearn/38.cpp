//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	int N;
//	cin >> N;
//
//	vector<int> invSeq(N);
//	vector<int> seq(N, N);
//
//	for (int i = 0; i < N; ++i) {
//		cin >> invSeq[i];
//	}
//
//	for (int i = N - 1; i >= 0; --i) {
//		int num = invSeq[i];
//		seq[i] = i + 1;
//		for (int j = 0; j < num; ++j) {
//			seq[i + j] = seq[i + j + 1];
//		}
//		seq[i + num] = i + 1;
//	}
//
//	for (int num : seq)
//	{
//		cout << num << " ";
//	}
//}
//
///*
//
//8
//8 7
//8 6 7
//8 6 5 7
//4 8 6 5 7
//4 8 6 5 3 7
//4 8 6 2 5 3 7
//4 8 6 2 5 1 3 7
//
//*/
