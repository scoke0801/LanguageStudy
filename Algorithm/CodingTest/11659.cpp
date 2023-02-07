//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//	cout.tie(nullptr);
//
//	int N, M;
//	cin >> N >> M;
//
//	vector<int> vec(N);
//	vector<int> sum(N + 1);
//	for (int i = 0; i < N; ++i) {
//		cin >> vec[i];
//		
//		sum[i + 1] = vec[i] + sum[i];
//	}
//
//	for (int i = 0; i < M; ++i) {
//		int start, end;
//		cin >> start >> end;
//	
//		cout << sum[end] - sum[start - 1] << "\n";
//	}
//}
