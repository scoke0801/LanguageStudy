#include <iostream>

using namespace std;

bool arr[10001] = { false, };

int d(int n)
{
	int sum = n;
	while (n > 0) {
		sum += n % 10;
		n /= 10;
	}
	return sum;
}
int main()
{
	for (int i = 1; i < 10001; ++i) {
		int num = d(i);
		if (num < 10001 && num != i) {
			arr[num] = true;
		}
	}

	for (int i = 1; i < 10001; ++i) {
		if (!arr[i]) {
			cout << i << "\n";
		}
	}
}
