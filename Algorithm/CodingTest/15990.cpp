//#include <iostream> 
//using namespace std;
//
//constexpr int MAX_NUM = 100000;
//constexpr int MOD = 1000000009;
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//	 
//	int buffer[MAX_NUM + 1][4];
//	buffer[1][1] = 1;
//	buffer[1][0] = 1;
//
//	buffer[2][2] = 1;
//	buffer[2][0] = 1;
//
//	buffer[3][1] = 1;
//	buffer[3][2] = 1;
//	buffer[3][3] = 1;
//	buffer[3][0] = 3;
//
//	for (int i = 4; i <= MAX_NUM; ++i)
//	{
//		buffer[i][1] = (buffer[i - 1][2] + buffer[i - 1][3]) % MOD;
//		buffer[i][2] = (buffer[i - 2][1] + buffer[i - 2][3]) % MOD;
//		buffer[i][3] = (buffer[i - 3][1] + buffer[i - 3][2]) % MOD;
//		buffer[i][0] = ((long long)buffer[i][1] + buffer[i][2] + buffer[i][3]) % MOD;
//	}
//
//	int T;
//	cin >> T;
//	  
//	for (int t = 0; t < T; ++t)
//	{
//		int num;
//		cin >> num;
//		std::cout << buffer[num][0] << "\n";
//	}
//}