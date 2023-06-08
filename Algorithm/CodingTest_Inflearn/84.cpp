#include <iostream>
#include <vector>
using namespace std;

struct Info {
	int day;
	int pay;
};

vector<bool> visit;
vector<Info> vec;
int N;
int ans;

void DFS(int day_acc, int pay_acc, int level)
{
	if (day_acc > N + 1) { return; }
	if (level == N) { return; }

	if (pay_acc > ans) {
		int forBreak = 3;
	}
	ans = std::max(pay_acc, ans);

	for (int i = day_acc; i <= N; ++i) {
		if (visit[i]) { continue; }

		visit[i] = true;
		
		int day = std::max(day_acc, i) + vec[i].day;
		DFS(day, pay_acc + vec[i].pay, level + 1);

		visit[i] = false;
	}
}

int main()
{
	cin >> N;
	
	visit.resize(N+1);
	vec.resize(N + 1);
	for (int i = 1; i <= N; ++i) {
		int t, p;
		cin >> t >> p;

		vec[i].day = t;
		vec[i].pay = p;
	}

	for (int i = 1; i <= N; ++i) {
		visit[i] = true;

		DFS(vec[i].day + i, vec[i].pay, 0);

		visit[i] = false;
	}

	cout << ans << "\n";
}