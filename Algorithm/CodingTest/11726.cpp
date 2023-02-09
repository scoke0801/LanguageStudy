//#include <iostream>
//#include <vector>
//
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
//	vector<int> vec(1001);
//	vec[0] = 1;
//	vec[1] = 1;
//	vec[2] = 2;
//
//	for (int i = 2; i <= N; ++i) {
//		vec[i] = (vec[i - 1] + vec[i - 2]) % 10007;
//	}
//	cout << vec[N] % 10007 << "\n";
//}