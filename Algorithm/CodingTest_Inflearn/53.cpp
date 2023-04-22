#include <iostream>
#include <stack>
using namespace std;

int main()
{
	int N, K;
	cin >> N >> K;

	stack<int> buf;
	while (N > 0) {
		int mod = N % K;
		
		N /= K;
		
		buf.push(mod);
	}

	while (!buf.empty()) {
		int num = buf.top();
		buf.pop();

		if (num >= 10) {
			cout << char('A' + (num - 10));
		}
		else {
			cout << num;
		}
	}
}