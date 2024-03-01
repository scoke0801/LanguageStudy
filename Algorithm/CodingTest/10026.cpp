//#include <iostream>
//#include <cstring>
//#include <queue>
//
//using namespace std;
//
//int N;
//char board[101][101];
//bool visited[101][101]; 
//
//int dx[4] = { 1,-1,0,0 };
//int dy[4] = { 0,0,1,-1 };
//
//void dfs(int x, int y)
//{ 
//	for (int i = 0; i < 4; i++)
//	{
//		int nx = dx[i] + x;
//		int ny = dy[i] + y;
//
//		if ((nx < 0 || nx >= N) || (ny < 0 || ny >= N)) { continue; }
//		if (board[ny][nx] != board[y][x]) { continue; }
//		if (visited[ny][nx]) { continue; }
//		
//		visited[ny][nx] = true;
//
//		dfs(nx, ny);
//	}
//}
//void Bfs(int x, int y)
//{
//	std::queue<std::pair<short, short>> queue;
//	queue.push(std::make_pair(x, y));
//
//	while (queue.empty() == false)
//	{
//		x = queue.front().first;
//		y = queue.front().second;
//		queue.pop();
//
//		for (int i = 0; i < 4; ++i)
//		{
//			short nx = dx[i] + x;
//			short ny = dy[i] + y;
//
//			if (nx < 0 || nx >= N) { continue; }
//			if (ny < 0 || ny >= N) { continue; }
//			if (board[ny][nx] != board[y][x]) { continue; }
//			if (visited[ny][nx]) { continue; }
//
//			visited[ny][nx] = true;
//			queue.push(std::make_pair(nx, ny));
//		}
//	}
//}
//
//int main(void)
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	cin >> N;
//
//	string input;
//	for (int i = 0; i < N; i++)
//	{
//		cin >> input;
//		for (int j = 0; j < N; j++) {
//			board[i][j] = input[j];
//		}
//	}
//
//	int count = 0;
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < N; j++)
//		{
//			if (visited[i][j]) { continue; }
//			Bfs(j,i);
//			count++; 
//		}
//	}
//
//	cout << count << " "; 
//	count = 0;
//	memset(visited, false, sizeof(visited));
//
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < N; j++)
//		{
//			if (board[i][j] == 'G') board[i][j] = 'R';
//		}
//	}
//
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < N; j++)
//		{
//			if (visited[i][j]) { continue; }
//
//			Bfs(j,i);
//			count++;
//		}
//	}
//
//	cout << count;
//
//	return 0;
//}