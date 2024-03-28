//#include <iostream>
//#include <queue>
//using namespace std;
//
//int visited[1501][1501];
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//	cout.tie(nullptr);
//
//	int A, B, C;
//	cin >> A >> B >> C;
//
//	int sum = A + B + C;
//	if (sum % 3 != 0)
//	{
//		std::cout << 0 << "\n";
//		return 0;
//	}
//
//	std::queue<std::pair<int,int>> buffer;
//	buffer.push(std::make_pair(A, B));
//	visited[A][B] = true;
//
//	while (buffer.empty() == false)
//	{
//		int a = buffer.front().first;
//		int b = buffer.front().second;
//		buffer.pop();
//
//		int temp[3] = { a,b,sum - a - b };
//		for (int i = 0; i < 3; ++i)
//		{
//			for (int j = 0; j < 3; ++j)
//			{
//				if (temp[i] < temp[j])
//				{
//					int num1 = temp[i] + temp[i];
//					int num2 = temp[j] - temp[i];
//					if (visited[num1][num2]) { continue; }
//
//					visited[num1][num2] = true;
//					buffer.push(std::make_pair(num1, num2));
//				}
//			}
//		}
//	}
//
//	std::cout << visited[sum / 3][sum / 3];
//
//	return 0;
//}