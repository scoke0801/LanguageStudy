//#include <iostream>
//#include <vector>
//#include <climits>
//using namespace std;
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	int N, K;
//	cin >> N >> K;
//
//	vector<int> temperature(N);
//	for (int i = 0; i < N; ++i)
//	{
//		cin >> temperature[i];
//	}
//
//	int cur = 0;
//	for (int i = 0; i < K; ++i) {
//		cur += temperature[i];
//	}
//
//	int ans = cur;
//	for (int i = K; i < N; ++i)
//	{
//		cur -= temperature[i - K];
//		cur += temperature[i];
//		if (cur > ans) {
//			ans = cur;
//		}
//	}
//
//	cout << ans << "\n";
//}