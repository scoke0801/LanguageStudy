#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main()
{
	int N;
	cin >> N;

	queue<int> queueBuf;
	for (int i = 0; i < N; ++i) {
		int num;
		cin >> num;
		queueBuf.push(num);
	}

	std::string answer;
	int cur = 1;
	stack<int> stackBuf;
	while  (!queueBuf.empty() )
	{
		if (!stackBuf.empty())
		{
			int top = stackBuf.top();
			if (top == cur)
			{
				++cur;
				stackBuf.pop();
				answer += "O";

				continue;
			}
		}

		int front = queueBuf.front();
		queueBuf.pop();
		stackBuf.push(front);
		answer += "P";
	}

	while (!stackBuf.empty())
	{
		int top = stackBuf.top();
		stackBuf.pop();
		if (top == cur)
		{
			++cur;
			answer += "O";
		}
	}

	if (N == cur - 1) {
		cout << answer;
	}
	else {
		cout << "impossible";
	}
}