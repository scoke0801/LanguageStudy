#include <iostream>
#include <stack>

using namespace std;

int N;
void print(int num)
{
	if (num > N) {
		return;
	}

	cout << num << " ";
	print(num + 1);
}

int main()
{
	cin >> N;
	print(1);
}
