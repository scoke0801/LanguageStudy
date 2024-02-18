//#include <iostream>
//#include <vector>
//using namespace std;
//
//constexpr int MAX_CASE = 9;
//
//short board[MAX_CASE][MAX_CASE];
//bool visited[MAX_CASE][MAX_CASE];
//std::vector<std::pair<int, int>> emptySpace;
//
//int remainCount = 0;
//int ans = 0;
//bool endCheck = false;
//
//bool CheckCondition(int a, int b)
//{
//	// 1*9, 9*1
//	for (int i = 0; i < 9; ++i)
//	{
//		if (board[i][b] == board[a][b] && i != a) { return false; }
//		if (board[a][i] == board[a][b] && i != b) { return false; }
//	}
//
//	// 3*3
//	int sa = ( a / 3) * 3;
//	int sb = ( b / 3) * 3;
//	for (int i = sa; i < sa + 3; ++i)
//	{
//		for (int j = sb; j < sb + 3; ++j)
//		{
//			if (i == a && j == b) { continue; }
//			if (board[i][j] == board[a][b]) return false;
//		}
//	}
//
//	return true;
//}
//void Dfs(int level)
//{
//	ans = std::max(ans, level);
//	if (level == emptySpace.size()) 
//	{
//		endCheck = true;
//		return; 
//	}
//
//	int a = emptySpace[level].first;
//	int b = emptySpace[level].second;
//		 
//	for (int i = 1; i <= 9; ++i)
//	{
//		board[a][b] = i;
//		if (CheckCondition(a, b)) {
//			Dfs(level+1);
//		}
//
//		if (endCheck) return;
//	}
//
//	board[a][b] = 0;
//}
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//	cout.tie(nullptr);
//
//	for (int i = 0; i < MAX_CASE; ++i)
//	{
//		for (int j = 0; j < MAX_CASE; ++j)
//		{
//			cin >> board[i][j];
//			if (board[i][j] == 0) {
//				emptySpace.push_back(std::make_pair(i, j));
//			}
//		}
//	}
//
//	Dfs(0);
//
//	for (int i = 0; i < MAX_CASE; ++i)
//	{
//		for (int j = 0; j < MAX_CASE; ++j)
//		{
//			std::cout << board[i][j] << " ";
//		}
//
//		std::cout << "\n";
//	}
//}