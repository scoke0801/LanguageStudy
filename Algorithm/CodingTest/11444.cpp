//#include <iostream>
//#include <vector>
//using namespace std;
//
//constexpr long long MOD = 1000000007;
//long long N;
//using Matrix = std::vector<std::vector<long long >>;
//
//Matrix operator*(const Matrix& lhs, const Matrix& rhs)
//{
//	Matrix temp(2, std::vector<long long>(2));
//
//	for (int i = 0; i < 2; ++i)
//	{
//		for (int j = 0; j < 2; ++j)
//		{
//			for (int k = 0; k < 2; ++k)
//			{
//				temp[i][j] += lhs[i][k] * rhs[k][j];
//			}
//
//			temp[i][j] %= MOD;
//		}
//	}
//
//	return temp;
//}
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	cin >> N;
//
//	Matrix ans = { {1,0},{0,1} };
//	Matrix forMult = { {1,1}, {1,0} };
//
//	while (N > 0)
//	{
//		if (N % 2 == 1)
//		{
//			ans = ans * forMult;
//		}
//
//		forMult = forMult * forMult;
//		N = N >> 1;
//	}
//
//	std::cout << ans[0][1] << "\n";
//	return 0;
//}