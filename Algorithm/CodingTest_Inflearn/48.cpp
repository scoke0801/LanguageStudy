//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	int N = 9;
//
//	for (int i = 0; i < N; ++i) {
//		vector<int> vec(N);
//		int total = 0;
//		for (int j = 0; j < N; ++j) {
//			cin >> vec[j];
//			total += vec[j];
//		}
//		
//		int aver = ( static_cast<float>( total ) / N ) + 0.5f;
//		int closer = std::abs( aver - vec[0] );
//		int ans = vec[0];
//		for (int j = 1; j < N; ++j) {
//			int gap = std::abs(aver - vec[j]);
//			if (closer > gap)
//			{
//				closer = gap;
//				ans = vec[j];
//			}
//			else if (closer == gap) {
//				ans = std::max(ans, vec[j]);
//			}
//		}
//		cout << aver << " " << ans << "\n";
//	}
//}