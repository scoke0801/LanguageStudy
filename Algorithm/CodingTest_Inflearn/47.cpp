//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//	int N;
//	cin >> N;
//	
//	vector< vector<int>> vec(N);
//	for (int i = 0; i < N; ++i) {
//		vec[i].reserve(N );
//		for (int j = 0; j < N; ++j) {
//			int num;
//			cin >> num;
//			vec[i].push_back(num);
//		}
//	}
//
//	int ans = 0;
//	for (int i = 0; i < N; ++i) {
//		for (int j = 0; j < N; ++j) {
//			int up		= ( i == 0 )		? 0 : vec[i - 1][j];
//			int down	= ( i ==  N - 1 )	? 0 : vec[i + 1][j];
//			int left	= ( j == 0 )		? 0 : vec[i][j - 1];
//			int right	= ( j == N - 1)		? 0 : vec[i][j + 1];
//			int cur = vec[i][j];
//
//			if (cur <= up) { continue; }
//			if (cur <= down) { continue; }
//			if (cur <= left) { continue; }
//			if (cur <= right) { continue; }
//
//			++ans;
//		}
//	}
//	cout << ans << "\n";
//}