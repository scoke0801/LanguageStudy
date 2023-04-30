#include <iostream>
#include <vector>
using namespace std;

using namespace std;

vector<int> buffer;
bool flag = false;
void dfs(int total, int sum, int level)
{
	if (flag) { return; }
	const int MAX = buffer.size();

	if (level == MAX)
	{
		flag = (sum == total - sum);
		return;
	}

	dfs(total, sum, level + 1);
 	dfs(total, sum + buffer[level], level + 1);
}

int main()
{
	int N;
	cin >> N;
	
	buffer.resize(N);

	int total = 0;
	for (int i = 0; i < N; ++i) {
		cin >> buffer[i];

		total += buffer[i];
	}

	dfs(total, 0, 0);

	if (flag)
	{
		cout << "YES";
	}
	else {
		cout << "NO";
	}

}
