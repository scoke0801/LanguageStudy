#include <iostream>
#include <cmath>
using namespace std;

int main__14682()
{
	int N, K;
	cin >> N >> K;

	long long sum = N;

	for (int i = 1; i <= K; ++i) {
		sum += (N * std::pow( 10, i));
	}

	cout << sum;
	return 0;
}