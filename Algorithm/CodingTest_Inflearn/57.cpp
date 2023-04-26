#include <iostream>
#include <stack>
using namespace std;

stack<int> buffer;
void toBinary(int num)
{
	if (num == 0) {
		return;
	}

	buffer.push(num % 2);
	toBinary(num / 2);
}
int main()
{
	int N;
	cin >> N;

	toBinary(N);

	while (!buffer.empty()) {
		cout<<	buffer.top();
		buffer.pop();
	}
}