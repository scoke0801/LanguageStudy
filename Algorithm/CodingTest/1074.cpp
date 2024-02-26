//#include <iostream>
//#include <cmath>
//using namespace std;
//
//int N, R, C; 
//int ans = 0;
//void Z(int x, int y, int size) 
//{
//    if (C == x && R == y) { 
//        std::cout << ans << "\n";
//        return;
//    }
//    else if (C < x + size && R < y + size && C >= x && R >= y) 
//    {
//        Z(x, y, size / 2);
//        Z(x + size / 2, y, size / 2);
//        Z(x, y + size / 2, size / 2);
//        Z(x + size / 2, y + size / 2, size / 2);
//    }
//    else 
//    {
//        ans += size * size;
//    }
//}
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	cin >> N >> R >> C;
//	Z(0, 0, (1 << N));
//    return 0;
//}