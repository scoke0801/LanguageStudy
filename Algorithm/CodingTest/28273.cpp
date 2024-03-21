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
//	int N;
//	cin >> N;
//
//	stack<int> buffer;
//	for (int i = 0; i < N; ++i)
//	{
//		int op;
//		cin >> op;
//
//		if (op == 1)
//		{
//			int num;
//			cin >> num;
//			buffer.push(num);
//		}
//		else if (op == 2)
//		{
//			if (buffer.empty() )
//			{
//				std::cout << -1 << "\n";
//			}
//			else {
//				std::cout << buffer.top() << "\n";
//				buffer.pop();
//			}
//		}
//		else if (op == 3)
//		{
//			std::cout << buffer.size() << "\n";
//		}
//		else if (op == 4)
//		{
//			std::cout << buffer.empty() << "\n";
//		}
//		else if (op == 5)
//		{
//			if (buffer.empty())
//			{
//				std::cout << -1 << "\n";
//			}
//			else {
//				std::cout << buffer.top() << "\n";
//			}
//		}
//	}
//
//	return 0;
//}