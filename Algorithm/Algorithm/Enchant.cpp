//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//// +0 
//// 강화 시 +1, +2, +3 중 하나
//
//// +N뜨는 경우의 수는?
//
//int N;
//
//int cache[100];
//// num에서 시작해서 N까지 가는 경우의 수
//int Enchant(int num)
//{
//	// 기저 사례
//	if (num > N) {
//		return 0;
//	}
//
//	if (num == N) {
//		return 1;
//	}
//
//	// 캐시
//	int& ret = cache[num];
//	if (ret != -1) {
//		return ret;
//	}
//	
//	// 적용
//	return ret = Enchant(num + 1) + Enchant(num + 2) + Enchant(num + 3 );
//	
//
//	for (int i = 1; i <= 3; ++i)
//	{
//		int next = num + i;
//		if (next <= N)
//		{
//			cache[next] += 1;
//			Enchant(next);
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	N = 9;
//	
//	::memset(cache, -1, sizeof(cache));
//	cout << Enchant(0);
//
//	return 0;
//}