//#include <iostream>
//using namespace std;
//
//int R, C, T;
//
//short board[51][51];
//
//int cleaner = -1;
//
//int dx[4] = { -1,1,0,0 };
//int dy[4] = { 0,0,-1,1 };
//
//void Spread()
//{
//	short add[51][51] = { 0, };
//	
//	for (int i = 0; i < R; ++i)
//	{
//		for (int j = 0; j < C; ++j)
//		{
//			int count = 0;
//			int num = board[i][j] / 5;
//			if (num == 0) { continue; }
//
//			for (int k = 0; k < 4; ++k)
//			{
//				int nx = j + dx[k];
//				int ny = i + dy[k];
//
//				if (nx < 0 || nx >= C) { continue; }
//				if (ny < 0 || ny >= R) { continue; }
//				if (nx == 0 && (ny == cleaner || ny == cleaner + 1))
//				{
//					// 로봇 청소기가 위치한 경우.
//					continue;
//				}
//
//				add[ny][nx] += num;
//				++count;
//			}
//			board[i][j] -= num * count;
//		}
//	}
//
//	for (int i = 0; i < R; ++i)
//	{
//		for (int j = 0; j < C; ++j)
//		{
//			board[i][j] += add[i][j];
//		}
//	}
//}
//
//void Blow()
//{
//	// 삭제되는 미세먼지.
//	board[cleaner - 1][0] = 0;
//	board[cleaner + 2][0] = 0;
//	 
//	//---
//	for (int i = cleaner-1; i > 0; --i)
//	{
//		board[i][0] = board[i - 1][0];
//	}
//	for (int i = cleaner + 2; i < R; ++i)
//	{
//		board[i][0] = board[i + 1][0];
//	}
//
//	//---
//	for (int i = 0; i < C-1; ++i)
//	{
//		board[0][i] = board[0][i+1];
//	}
//	for (int i = 0; i < C - 1; ++i)
//	{
//		board[R - 1][i] = board[R - 1][i + 1];
//	}
//
//	//---
//	for (int i = 0; i <= cleaner - 1; ++i)
//	{
//		board[i][C - 1] = board[i + 1][C - 1];
//	} 
//	for(int i = R -1; i > cleaner +1; --i)
//	{
//		board[i][C - 1] = board[i - 1][C - 1];
//	}
//
//	//---
//	for (int i = C - 1; i > 1; --i)
//	{
//		board[cleaner][i] = board[cleaner][i-1];
//	}
//	for (int i = C - 1; i > 1; --i)
//	{
//		board[cleaner + 1][i] = board[cleaner + 1][i - 1];
//	} 
//
//	board[cleaner][1] = 0;
//	board[cleaner + 1][1] = 0;
//}
//
//int main()
//{
//	cin >> R >> C >> T;
//
//	for (int i = 0; i < R; ++i)
//	{
//		for (int j = 0; j < C; ++j)
//		{
//			cin >> board[i][j];
//			if (board[i][j] == -1 && cleaner == -1)
//			{
//				cleaner = i;
//			}
//		}
//	}
//
//	while (T > 0)
//	{
//		--T;
//
//		Spread();
//		Blow();
//	}
//
//	int ans = 0;
//	for (int i = 0; i < R; ++i)
//	{
//		for (int j = 0; j < C; ++j)
//		{
//			if (board[i][j] == -1) { continue; }
//			ans += board[i][j];
//		}
//	}
//
//	std::cout << ans << "\n";
//	return 0;
//}