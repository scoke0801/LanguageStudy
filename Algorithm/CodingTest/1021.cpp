//#include <iostream>
//#include <vector>
//#include <deque>
//using namespace std;
//
//int N, M;
//std::deque<int> deq;
//int main()
//{
//	cin >> N >> M;
//
//	for (int i = 1; i <= N; ++i)
//	{
//		deq.push_back(i);
//	}
//
//	int count = 0;
//	for (int i = 0; i < M; ++i) 
//	{
//		int num = 0;
//		cin >> num;
//
//		int pos = 0;
//		for (int j = 0; j < deq.size(); ++j) {
//			if (deq[j] == num) {
//				pos = j;
//			}
//		}
//
//		int left = pos - 0;
//		int right = (deq.size() - 1) - pos + 1;
//
//		if (left <= right)
//		{
//			for (int j = 0; j < left; ++j) 
//			{
//				int cur = deq.front();
//				deq.pop_front();
//				deq.push_back(cur);
//			}
//			deq.pop_front();
//			count += left;
//		}
//		else 
//		{
//			for (int j = 0; j < right; ++j)
//			{
//				int cur = deq.back();
//				deq.pop_back();
//				deq.push_front(cur);
//			}
//
//			deq.pop_front();
//			count += right;
//		}
//	}
//
//	std::cout << count;
//}