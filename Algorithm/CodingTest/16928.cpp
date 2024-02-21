//#include <iostream>
//#include <queue>
//using namespace std;
//
//constexpr int START = 1;
//constexpr int LAST = 100;
//
//constexpr int MAX_CASE = 15;
// 
//int N, M;
//
//int ans = 0;
//int cur = START;
//
//bool visited[LAST + 2] = { 0, }; 
//int board[LAST + 2] = { 0, }; 
//
//std::queue<std::pair<int, int>> buffer;
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	cin >> N >> M;
//
//	int x, y;
//	for (int i = 0; i < N + M; ++i)
//	{
//		cin >> x >> y;
//		board[x] = y;
//	}
//	 
//	buffer.push(std::make_pair(1, 0));
//	visited[1] = true;
//
//	while (buffer.empty() == false)
//	{
//		int pos = buffer.front().first;
//		int level = buffer.front().second;
//		buffer.pop();
//		  
//		if (pos == LAST)
//		{
//			ans = level;
//			break;
//		}
//
//		for (int i = 1; i <= 6; ++i)
//		{
//			int next = pos + i;
//			if( next > LAST) { continue; }
//			if (visited[next]) { continue; }
//			 
//			while (board[next] != 0)
//			{
//				next = board[next];
//			}
//			visited[next] = true;
//
//			buffer.push(std::make_pair(next, level + 1));
//		}
//	}
//	std::cout << ans << "\n";
//
//	return 0;
//}
