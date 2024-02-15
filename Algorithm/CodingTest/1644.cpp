//#include <iostream>
//#include<vector>
//using namespace std;
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	int N;
//
//	cin >> N;
//
//	std::vector<bool> visit(N + 1, true);
//	for (int i = 2; i * i <= N; ++i)
//	{
//		if (!visit[i]) { continue; }
//		for (int j = i * i; j <= N; j += i) {
//			visit[j] = false;
//		}
//	}
//
//	std::vector<int> primeNum;
//	for (int i = 2; i <= N; ++i) {
//		if (visit[i]) {
//			primeNum.push_back(i);
//		}
//	}
//
//	/*int ans = 0;
//	for (int i = 0; i < primeNum.size(); ++i)
//	{
//		int sum = 0;
//		for (int j = i; j < primeNum.size(); ++j)
//		{
//			sum += primeNum[j];
//			if (sum == N)
//			{
//				++ans;
//				break;
//			}
//			else if (sum > N)
//			{
//				break;
//			}
//		}
//	}
//	std::cout << ans << "\n";
//	*/
//
//	int ans = 0, start = 0, end = 0, sum = 0;
//	while (1)
//	{
//		if (sum > N) { sum -= primeNum[start++]; } 
//		else
//		{
//			if (end == primeNum.size()) { break; }
//			sum += primeNum[end++];
//		}
//
//		if (sum == N)
//		{
//			++ans;
//		}
//	}
//
//	std::cout << ans << "\n";
//}