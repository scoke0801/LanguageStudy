//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	int N;
//	cin >> N;
//
//	int K = 1;
//	int left = 1;
//	int cur, right;
//	int ans = 0;
//
//	while (left != 0) {
//		left = N / (K * 10);
//		right = N % K;
//		cur = (N / K) % 10;
//		if (cur > 3) ans = ans + ((left + 1) * K);
//		else if (cur == 3) ans = ans + ((left * K) + (right + 1));
//		else ans = ans + (left * K);
//		K = K * 10;
//	}
//
//	cout << ans << "\n";
//	
//}