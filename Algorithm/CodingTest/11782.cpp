//#include <iostream>
//using namespace std;
//
//int merge[2000000];
//int a[1000000];
//int b[1000000];
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//	cout.tie(nullptr);
//
//	int aPos = 0;
//	int bPos = 0;
//
//	int N, M;
//	cin >> N >> M;
//	for (int i = 0; i < N; ++i) {
//		cin >> a[i];
//	}
//
//	for (int i = 0; i < M; ++i) {
//		cin >> b[i];
//	}
//
//	int idx = 0;
//	while (aPos < N && bPos < M)
//	{
//		if (a[aPos] < b[bPos]) {
//			merge[idx++] = a[aPos++];
//		}
//		else {
//			merge[idx++] = b[bPos++];
//		}
//	}
//
//	while (aPos < N) {
//		merge[idx++] = a[aPos++];
//	}
//
//	while (bPos < M) {
//		merge[idx++] = b[bPos++];
//	}
//
//	for (int i = 0; i < idx; ++i)
//	{
//		std::cout << merge[i] << " ";
//	}
//}