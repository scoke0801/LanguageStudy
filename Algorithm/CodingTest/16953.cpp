//#include <iostream>
//#include <cmath>
//#include <queue>
//using namespace std;
//
//constexpr int MAX_CASE = 1000000000;
////bool visited[MAX_CASE + 1];
//int A, B;
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	cin >> A >> B;
//
//	std::queue<std::pair<int, int>> buffer;
//	buffer.push(std::make_pair(A, 1));
//
//	int ans = -1;
//	while (buffer.empty() == false)
//	{
//		long long num = buffer.front().first;
//		int level = buffer.front().second;
//		buffer.pop();
//		if (num == B) 
//		{
//			ans = level;
//			break; 
//		}
//
//		long long next1 = num * 2;
//		if (next1 < MAX_CASE )
//		{
//			//visited[next1] = true;
//			buffer.push(std::make_pair(next1, level + 1));
//		}
//		
//		long long next2 = num * 10 + 1;
//		if (next2 < MAX_CASE )
//		{
//			//visited[next2] = true;
//			buffer.push(std::make_pair(next2, level + 1));
//		}
//	}
//
//	std::cout << ans;
//	return 0;
//}