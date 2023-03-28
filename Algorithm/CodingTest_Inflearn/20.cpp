//#include <iostream>
//#include <vector>
//using namespace std;
//
//char Solve(int a, int b)
//{
//	if (a == b) { return 'D'; }
//
//	if (a == 1)
//	{
//		if (b == 2) { return 'B'; }
//		return 'A';
//	}
//	else if (a == 2)
//	{
//		if (b == 1) { return 'A'; }
//		return 'B';
//	}
//	else
//	{
//		if (b == 1) { return 'B'; }
//		return 'A';
//	}
//}
//int main()
//{
//	int N;
//	cin >> N;
//
//	vector<int> A(N);
//	vector<int> B(N);
//
//	for (int i = 0; i < N; ++i) {
//		cin >> A[i];
//	}
//
//	for (int i = 0; i < N; ++i) {
//		cin >> B[i];
//	}
//
//	for (int i = 0; i < N; ++i) {
//		cout << Solve(A[i], B[i]) << "\n";
//	}
//}