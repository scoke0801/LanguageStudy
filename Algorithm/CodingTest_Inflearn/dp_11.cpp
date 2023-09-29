#include <iostream>
#include <vector>

using namespace std;

/*
5 20
10 5
25 12
15 8
6 3
7 4
*/
int main()
{
	int N, M, score, reqTime;
	cin >> N >> M;

	vector<int> dp(M + 1);

	for (int i = 0; i < N; ++i) {
		cin >> score >> reqTime;

		for (int j = M; j >= reqTime; --j) {
			dp[j] = std::max(dp[j], dp[j - reqTime] + score);
		}
	}

	cout << dp[M];
}