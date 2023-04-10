#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int N;
	cin >> N;

	int count = 0;
	int sum = 1;
	for (int i = 2; i < N; ++i) {
		sum += i;

		if (sum > N) { break; }
		int temp = ( N - sum );
	
		if (temp % i != 0) { continue; }

		int div = temp / i;
		for (int j = 1; j < i; ++j) {
			cout << j + div << " + ";
		}
		cout << i + div << " = " << N << "\n";
		++count;
	}

	cout << count << "\n";
}