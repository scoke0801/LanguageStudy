//#include <iostream>
//#include <unordered_map>
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
//	std::unordered_map<int, int> data;
//	for (int i = 0; i < N; ++i)
//	{
//		int num;
//		cin >> num;
//
//		data.insert(std::make_pair(num, 0));
//	}
//
//	int M;
//	cin >> M;
//	for (int i = 0; i < M; ++i) {
//		int num;
//		cin >> num;
//
//		auto iter = data.find(num);
//		
//		if (iter == data.end()) {
//			std::cout << 0 << " ";
//		}
//		else {
//			std::cout << 1 << " ";
//		}
//	}
//}