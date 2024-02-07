#include <iostream>

using namespace std;

int N;
int ans = 0;
int board[15];

bool Check(int idx)
{
	for (int i = 0; i < idx; ++i)
	{
		if (board[idx] == board[i] || idx - i == (std::abs(board[idx] - board[i])))
		{
			return false;
		}
	}
	return true;
}

void Dfs(int idx)
{
	if (idx == N) {
		++ans;
		return;
	}

	for (int i = 0; i < N; ++i)
	{
		board[idx] = i;
		if (Check(idx))
		{
			Dfs(idx + 1);
		}
	}
}
int main()
{
	cin >> N;

	Dfs(0);

	cout << ans << "\n";
}