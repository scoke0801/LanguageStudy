#include <iostream>
#include <memory>
using namespace std;

int cache[1001];

int Solve(int card, int answer)
{
	if (cache[card] != 0) {
		return cache[card];
	}

	int sum = 0;
	for (int i = 1; i <= card; ++i) {
		sum += i;
		cache[i] = sum;
	}
	
	return cache[card];
}

int main()
{
	int N;
	cin >> N;

	for (int i = 0; i < N; ++i) {
		int card, answer;

		cin >> card >> answer;
		
		int ret = Solve(card, answer);
		if (ret == answer) {
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}
	}
}