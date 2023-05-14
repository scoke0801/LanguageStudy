#include <iostream>
#include <queue>
using namespace std;

int main()
{
	int N, K;
	cin >> N >> K;
	
	queue<int> buffer;
	for (int i = K; i <= N; ++i) {
		buffer.push(i);
	}

	for (int i = 1; i < K; ++i) {
		buffer.push(i);
	}

	int count = K;
	while (buffer.size() > 1)
	{
		for (int i = count; i < K - 1; ++i)
		{
			int front = buffer.front();
			buffer.pop();
			buffer.push(front);
		}
		
		buffer.pop();
		count = 0;
	}

	cout << buffer.front();
}