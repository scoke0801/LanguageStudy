#include <iostream>
#include <climits>
using namespace std;

int ans_min = INT_MAX;
int ans_max = INT_MIN;

int nums[11] = { 0, };
int oper[4] = { 0, };
int N;

enum class OperType
{
	PLUS = 0,
	MINUS,
	MUL,
	DIV,
};
void Dfs(int cur, int level)
{
	if (level == N)
	{
		ans_min = std::min(ans_min, cur);
		ans_max = std::max(ans_max, cur);
		return;
	}

	// 연산자 사용.
	for (int i = 0; i < 4; ++i)
	{
		if (oper[i] == 0) { continue; }

		--oper[i];

		int next = cur;
		switch ((OperType)i)
		{
			case OperType::PLUS:
			{
				next += nums[level];
			}break;
			case OperType::MINUS:
			{
				next -= nums[level];
			}break;
			case OperType::MUL:
			{
				next *= nums[level];
			}break;
			case OperType::DIV:
			{
				next /= nums[level];
			}break;
		}
		Dfs(next, level + 1);
		++oper[i];
	}
	// 연산자 사용 안함.
	//Dfs(cur, level + 1);
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> N;

	for (int i = 0; i < N; ++i)
	{
		cin >> nums[i];
	}

	for (int i = 0; i < 4; ++i)
	{
		cin >> oper[i];
	}

	Dfs(nums[0], 1);

	std::cout << ans_max << "\n" << ans_min << "\n";
	return 0;
}