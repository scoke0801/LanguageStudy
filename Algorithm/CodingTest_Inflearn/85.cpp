#include <iostream>
#include <vector>
using namespace std;

vector<int> nums;
vector<bool> visit;

vector<int> used_op(4);
vector<int> op(4);		// + - X /

int min_num = INT_MAX;
int max_num = 0;
int N;

int Operate(int a, int b, int op)
{
	switch (op)
	{
	case 0: return a + b;
	case 1:	return a - b;
	case 2:	return a * b;
	case 3:	return a / b;
	}

	return 0;
}
void DFS(int cur, int level)
{
	if (level == N) {
		min_num = std::min(cur, min_num);
		max_num = std::max(cur, max_num);
		return;
	}

	for (int i = 0; i < N; ++i) {
		if (visit[i]) { continue; }

		int num = nums[i];
		visit[i] = true;
		for (int j = 0; 5
			3 6 1 45 2
			1 1 1 1 j < 4; ++j)
		{
			if (used_op[j] >= op[j]) { continue; }
			++used_op[j];

			DFS(Operate(cur, num, j), level + 1);

			--used_op[j];
		}
		visit[i] = false;
	}
}

int main()
{
	cin >> N;

	visit.resize(N);
	for (int i = 0; i < N; ++i) {
		int num;
		cin >> num;

		nums.push_back(num);
	}

	for (int i = 0; i < 4; ++i) {
		cin >> op[i];
	}

	for (int i = 0; i < N; ++i) {
		visit[i] = true;
		
		DFS(nums[i], 1);

		visit[i] = false;
	}

	cout << max_num << "\n";
	cout << min_num << "\n";
}