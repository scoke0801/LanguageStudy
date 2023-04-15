#include <iostream>
#include <queue>

using namespace std;

struct Work
{
	int idx = 0;
	int time = 0;
};
int main()
{
	int N;
	cin >> N;

	int total = 0;
	queue<Work> queue;
	for (int i = 1; i <= N; ++i) {
		int num;
		cin >> num;
		queue.push(Work{ i, num });
	}

	int K;
	cin >> K;

	while ( !queue.empty() )
	{
		Work work = queue.front();
		queue.pop();

		if (work.time > 1) {
			work.time--;
			queue.push(work);
		}

		++total;
		if (total == K) {
			break;
		}
	}

	int ans = -1;
	if (!queue.empty()) {
		ans = queue.front().idx;
	}

	cout << ans << "\n";

	
}
