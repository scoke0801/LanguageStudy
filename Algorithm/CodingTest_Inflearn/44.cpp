//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	int N, C;
//	cin >> N >> C;
//
//	vector<int> house(N);
//
//	for (int i = 0; i < N; ++i) {
//		cin >> house[i];
//	}
//
//	sort(house.begin(), house.end());
//	
//	int left = house[0];
//	int right = house[N - 1];
//	int mid = 0;
//	int ans = 0;
//	while (left <= right)
//	{
//		mid = (left + right) * 0.5f;
//		
//		int count = 1;
//		int prev = house[0];
//		for (int i = 1; i < N; ++i) {
//			int gap = house[i] - prev;
//			if (gap >= mid) {
//				prev = house[i];
//				++count;
//			}
//		}
//
//		if( count >= C ){
//			ans = mid;
//			left = mid + 1;
//		}
//		else
//		{
//			right = mid - 1;
//		}
//	}
//
//
//	cout << ans;
//}