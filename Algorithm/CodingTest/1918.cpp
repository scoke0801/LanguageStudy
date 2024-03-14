//#include <iostream>
//#include <stack>
//using namespace std;
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//	cout.tie(nullptr);
//
//	std::string input;
//	cin >> input;
//
//	int pos = 0;
//
//	std::stack<char> buffer;
//	while (pos < input.size())
//	{
//		if (input[pos] == '(')
//		{
//			buffer.push('(');
//		}
//		else if (input[pos] == ')')
//		{
//			while (buffer.empty() == false)
//			{
//				char cur = buffer.top();
//				buffer.pop();
//
//				if (cur == '(') { break; }
//
//				std::cout << cur;
//			}
//		}
//		else if (input[pos] == '+' || input[pos] == '-')
//		{
//			while (buffer.empty() == false && buffer.top() != '(')
//			{
//				cout << buffer.top();
//				buffer.pop();
//			}
//			buffer.push(input[pos]);
//		}
//		else if (input[pos] == '*' || input[pos] == '/')
//		{
//			while (buffer.empty() == false && (buffer.top() == '*' || buffer.top() == '/'))
//			{
//				cout << buffer.top();
//				buffer.pop();
//			}
//			buffer.push(input[pos]);
//		}
//		else
//		{
//			std::cout << input[pos];
//		}
//		++pos;
//	}
//
//	while (buffer.empty() == false)
//	{
//		std::cout << buffer.top();
//		buffer.pop();
//	}
//
//	return 0;
//}