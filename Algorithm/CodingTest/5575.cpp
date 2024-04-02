//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
// 
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//	cout.tie(nullptr);
//	 
//	for (int i = 0; i < 3; ++i)
//	{
//		int h, m, s, hh, mm, ss;
//		cin >> h >> m >> s >> hh >> mm >> ss;
//
//		s = ss - s;
//		m = mm - m;
//		h = hh - h;
//
//		if (s < 0)
//		{
//			s = 60 + s;
//			m = m - 1;
//		}
//
//		if (m < 0)
//		{
//			m = 60 + m;
//			h = h - 1;
//		}
//
//		if (h < 0)
//		{
//			h = 24 - h;
//		}
//
//		std::cout << h << " " << m << " " << s << "\n";
//	}
//
//	return 0;
//}