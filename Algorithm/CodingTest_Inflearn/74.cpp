#include <iostream>
#include <queue>
using namespace std;

int main()
{
	priority_queue<int, vector<int>, std::greater<int>> pq;
	std::queue<int> input;

	while (true)
	{
		int num;
		cin >> num;

		if (num == -1) {
			break;
		}

		input.push(num);
	}

	while (!input.empty()) {
		int num = input.front();
		input.pop();
		
		if (num == 0) {
			if (pq.empty()) {
				cout << -1 << "\n";
			}
			else {
				cout << pq.top() << "\n";
				pq.pop();
			}
		}
		else {
			pq.push(num);
		}
	}
}