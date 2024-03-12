//#include <iostream> 
//using namespace std;
//
//int fee[101][101]; 
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//	cout.tie(nullptr);
//
//	int N, M;
//	cin >> N >> M;
//
//	constexpr int MAX_FEE = 100000;
//	constexpr int INIT_VAL = MAX_FEE * 100 + 1;
//	for (int i = 1; i <= N; ++i)
//	{
//		for (int j = 1; j <= N; ++j)
//		{
//			fee[i][j] = INIT_VAL;
//		}
//	}
//
//	for (int i = 0; i < M; ++i)
//	{
//		int from, to, cost;
//		cin >> from >> to >> cost;
//
//		if (fee[from][to] > cost)
//		{
//			fee[from][to] = cost;
//		}
//	}
//
//	for (int k = 1; k <= N; ++k)
//	{
//		for (int i = 1; i <= N; ++i)
//		{
//			for (int j = 1; j <= N; ++j)
//			{ 
//				fee[i][j] = std::min(fee[i][j], fee[i][k] + fee[k][j]);
//			}
//		}
//	}
//
//	for (int i = 1; i <= N; ++i)
//	{
//		for (int j = 1; j <= N; ++j)
//		{
//			if (i == j || fee[i][j] == INIT_VAL)
//			{
//				fee[i][j] = 0;
//			}
//			std::cout << fee[i][j] << " ";
//		}
//		std::cout << "\n";
//	}
//}