//#include <iostream>
//#include <vector>
//using namespace std;
//
//int sum[100001][3] = { 0, };
//int main_()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	int N, Q;
//	cin >> N >> Q;
//
//	for (int i = 1; i <= N; ++i) 
//	{
//		int  id;
//		cin >> id;
//
//		for (int j = 0; j < 3; ++j) 
//		{
//			sum[i][j] = sum[i - 1][j];
//		}
//
//		++sum[i][id - 1];
//	}
//
//	for (int i = 0; i < Q; ++i) 
//	{
//		int  a, b;
//		cin >> a >> b;
//
//		for (int j = 0; j < 3; ++j)
//		{
//			cout << sum[b][j] - sum[a - 1][j] << " ";
//		}
//		cout << "\n";
//	}
//	return 0;
//}