//#include <iostream>
//#include <queue>
//using namespace std;
//
//int main()
//{
//	queue<int> princes;
//	int N, K;
//	
//	cin >> N >> K;
//
//	for (int i = 1; i <= N; ++i) {
//		princes.push(i);
//	}
//
//	int count = 0;
//	while ( princes.size() > 1 )
//	{
//		int cur = princes.front();
//		princes.pop();
//
//		++count;
//		if (count != K) {
//			princes.push(cur);
//			continue;
//		}
//
//		count = 0;
//	}
//
//	cout << princes.front();
//}