#include<iostream>
#include<vector>
using namespace std;

int N, M;
int ans = 0;
vector<int> vec;

void check(int level, int cur)
{
	if (level == N) {
		if (cur == M) {
			++ans;
			return;
		}
		return;
	}
	
	check(level + 1, cur + vec[level]);
	check(level + 1, cur - vec[level]);
	check(level + 1, cur);
}

int main()
{
	cin >> N >> M;

	vec.resize(N);
	for (int i = 0; i < N; ++i) {
		cin >> vec[i];
	}

	check(0, 0);

	if (ans > 0) {
		cout << ans;
	}
	else {
		cout << -1;
	}
}