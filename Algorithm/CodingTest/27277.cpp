//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <cmath>
//using namespace std;
//
//int main()
//{
//	//int N;
//	//cin >> N;
//
//	//vector<int> scores(N);
//	//for (int i = 0; i < N; ++i) {
//	//	cin >> scores[i];
//	//}
//
//	int N = 6;
//	vector<int> scores = { 1, 4, 3 , 5, 6, 2 };
//
//	std::sort(scores.begin(), scores.end(), std::greater<int>());
//	// 현재 좌표에서 각 요소들을 계산했을 때 최대 값이 되는 경우를 탐색
//
//	int score = scores[0];
//	int back = N - 1;
//	for (int i = 1; i < N - 1; ++i) {
//		std::swap(scores[i], scores[back]);
//
//		score += max(0, scores[i] - scores[i - 1]);
//		--back;
//	}
//
//	for (int n : scores) {
//		cout << n << " ";
//	}
//
//	cout << "\n" << score << "\n";
//	return 0;
//}