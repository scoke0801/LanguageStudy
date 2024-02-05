//#include <iostream>
//#include <vector>
//#include <queue>
//#include <algorithm>
//using namespace std;
//
//int N;
//
//using Pair = std::pair<short, short>;
//
//short dx[4] = { 1,-1, 0,0 };
//short dy[4] = { 0,0, 1,-1 };
//int main()
//{
//	cin >> N;
//
//	std::vector<std::vector<bool>> board(N, std::vector<bool>(N));
//	std::vector<std::vector<bool>> visit(N, std::vector<bool>(N));
//	std::vector<int> buffer;
//	for (int i = 0; i < N; ++i)
//	{
//		std::string str;
//		cin >> str;
//		
//		for (int j = 0; j < N; ++j)
//		{
//			board[i][j] = str[j] - '0';
//		}
//	}
//
//	std::queue<Pair> queue;
//	for (int i = 0; i < N; ++i) 
//	{
//		for (int j = 0; j < N; ++j)
//		{
//			if (board[i][j]) {
//				queue.push(std::make_pair(j, i));
//				visit[i][j] = true;
//			}
//
//			int ans = 0;
//			while (queue.empty() == false)
//			{
//				Pair cur = queue.front();
//				queue.pop();
//
//				if (board[cur.second][cur.first])
//				{
//					board[cur.second][cur.first] = false;
//					++ans;
//				}
//
//				for (int k = 0; k < 4; ++k)
//				{
//					short newX = dx[k] + cur.first;
//					short newY = dy[k] + cur.second;
//
//					if (newX < 0 || newX >= N) { continue; }
//					if (newY < 0 || newY >= N) { continue; }
//
//					if (board[newY][newX] == false) { continue; }
//					if (visit[newY][newX]) { continue; }
//					visit[newY][newX] = true;
//					queue.push(std::make_pair(newX, newY));
//				} 
//			}
//
//			if (ans != 0) {
//				buffer.push_back(ans);
//			}
//		}
//	}
//
//	std::sort(buffer.begin(), buffer.end());
//
//	std::cout << buffer.size() << "\n";
//	for (int num : buffer)
//	{
//		std::cout << num << "\n";
//	}
//}