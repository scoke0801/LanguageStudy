//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//// +0 
//// ��ȭ �� +1, +2, +3 �� �ϳ�
//
//// +N�ߴ� ����� ����?
//
//int N;
//
//int cache[100];
//// num���� �����ؼ� N���� ���� ����� ��
//int Enchant(int num)
//{
//	// ���� ���
//	if (num > N) {
//		return 0;
//	}
//
//	if (num == N) {
//		return 1;
//	}
//
//	// ĳ��
//	int& ret = cache[num];
//	if (ret != -1) {
//		return ret;
//	}
//	
//	// ����
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