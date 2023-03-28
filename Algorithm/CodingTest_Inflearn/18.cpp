//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int N, M;
//	cin >> N >> M;
//
//	int maxElapsedTime = -1;
//	int elapsedTime = 0;
//	for (int i = 0; i < N; ++i) {
//		int decibel;
//		cin >> decibel;
//
//		if (decibel > M) {
//			++elapsedTime;
//		}
//		else {
//			maxElapsedTime = std::max(elapsedTime, maxElapsedTime);
//			elapsedTime = 0;
//		}
//	}
//
//	maxElapsedTime = std::max(elapsedTime, maxElapsedTime);
//
//	cout << maxElapsedTime;
//}