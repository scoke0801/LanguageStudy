#include <iostream>
using namespace std;

int level[11];
void dfs(int max, int curLevel)
{
	if (curLevel > max)
	{
		for (int i = 1; i <= max; ++i) {
			if (level[i]) {
				cout << i << " ";
			}
		}
		cout << "\n";
		return;
	}

	level[curLevel] = 1;
	dfs(max, curLevel + 1);

	level[curLevel] = 0;
	dfs(max, curLevel + 1);	
}

int main()
{
	int N;
	cin >> N;

	dfs(N, 1);
}