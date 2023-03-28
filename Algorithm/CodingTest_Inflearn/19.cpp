//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	int N;
//	cin >> N;
//
//	vector<int> student(N);
//	for (int i = 0; i < N; ++i)
//	{
//		cin >> student[i];
//	}
//
//	int ans = 0;
//	for (int i = 0; i < N - 1; ++i)
//	{
//		bool isTroubler = true;
//		for (int j = i + 1; j < N; ++j) {
//			if (student[i] <= student[j]) {
//				isTroubler = false;
//				break;
//			}
//		}
//
//		if (isTroubler) {
//			++ans;
//		}
//	}
//
//	cout << ans;
//}