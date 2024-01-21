//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	int N;
//	cin >> N;
//	 
//	std::vector<int> num(N);
//    for (int i = 0; i < N; ++i)
//	{
//		cin >> num[i]; 
//    }
//
//    int i = num.size() - 1;
//    while (i > 0 && num[i - 1] > num[i])
//    {
//        --i;
//    }
//
//    if (i == 0) {
//        std::cout << -1 << "\n";
//        return 0;
//    }
//
//    int j = num.size() - 1;
//    while (num[i - 1] > num[j])
//    {
//        --j;
//    }
//
//    std::swap(num[j], num[i - 1]);
//
//    std::sort(num.begin() + i, num.end());
//
//    for (int n : num)
//    {
//        cout << n << " ";
//    }
//
//    return 0;
//
//}