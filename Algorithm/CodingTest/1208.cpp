//#include <iostream>
//#include <map>
//using namespace std;
//
//constexpr int MAX_CASE = 40;
//
//std::map<int, int> buffer;
//int board[MAX_CASE] = { 0, };
//
//int N, S;
//long long cnt;
//void left(int level, int sum)
//{
//	if (level == N / 2)
//	{
//		int need = S - sum;
//		if (buffer.find(need) == buffer.end()) { return; }
//
//		cnt += buffer[need];
//		return;
//	}
//
//	left(level + 1, sum + board[level]);
//	left(level + 1, sum);
//}
//
//void right(int level, int sum)
//{
//	if (level == N)
//	{
//		buffer[sum]++;
//		return;
//	}
//
//	right(level + 1, sum + board[level]);
//	right(level + 1, sum);
//}
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	cin >> N >> S;
//
//	for (int i = 0; i < N; ++i)
//	{
//		cin >> board[i];
//	}
//	right(N / 2, 0);
//	left(0, 0);
//
//	if (S == 0) { cnt--; }
//	std::cout << cnt << "\n";
//}