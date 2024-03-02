//#include <iostream>
//#include <vector>
//using namespace std;
//
//int gap(const std::string& a, const std::string& b)
//{
//	int ret = 0;
//	for (int i = 0; i < 4; ++i)
//	{
//		if (a[i] != b[i]) ++ret;
//	}
//	return ret;
//}
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//	cout.tie(nullptr);
//
//	int T;
//	cin >> T;
//
//	std::vector<std::string> buffer;
//	buffer.reserve(100000);
//
//	for (int t = 0; t < T; ++t)
//	{
//		int N;
//		cin >> N;
//
//		buffer.clear();
//		for (int n = 0; n < N; ++n)
//		{
//			std::string str;
//			cin >> str;
//			buffer.push_back(str);
//		}
//
//		if (N > 32) 
//		{
//			std::cout << 0 << "\n"; 
//			continue; 
//		}
//
//		int ans = 10000;
//		for (int i = 0; i < N - 2; ++i)
//		{
//			for (int j = i + 1; j < N - 1; ++j)
//			{
//				for (int k = j + 1; k < N; ++k)
//				{
//					int ab = gap(buffer[i], buffer[j]);
//					int ac = gap(buffer[i], buffer[k]);
//					int bc = gap(buffer[j], buffer[k]);
//					ans = std::min(ab + ac + bc, ans);
//				}
//			}
//		}
//		std::cout << ans << "\n";
//	}
//}