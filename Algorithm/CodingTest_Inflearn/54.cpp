#include <iostream>
#include <stack>
using namespace std;

int main()
{
	std::string str;
	cin >> str;

	stack<char> buf;
	for (char ch : str)
	{
		if (ch == '(') {
			buf.push(ch);
		}
		else if (ch == ')') {
			if (buf.empty()) {
				buf.push(ch);
				break;
			}
			buf.pop();
		}
	}

	if (buf.empty()) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
}