//#include <iostream>
//#include <vector>
//#include <algorithm>
//int N;
//
//std::vector<long long> vecB;
//std::vector<long long> vecA;
//
//void Dfs(long long num, int level) 
//{	
//	if (level == N) {
//		for (int i = 0; i < N; ++i) {
//			std::cout << vecA[i] << " ";
//		}
//		return;
//	}
//
//	if (num % 3 == 0 && std::find(vecB.begin(), vecB.end(), num / 3) != vecB.end()) {
//		vecA.push_back(num / 3);
//		Dfs(num / 3, level + 1);
//		vecA.pop_back();
//	}
//
//	if (std::find(vecB.begin(), vecB.end(), num * 2) != vecB.end()) {
//		vecA.push_back(num * 2);
//		Dfs(num * 2, level + 1);
//		vecA.pop_back();
//	} 
//}
//
//int main()
//{
//	std::cin >> N;
//
//	vecB.resize(N);
//	long long num;
//	for (int i = 0; i < N; ++i) {
//		std::cin >> vecB[i];
//	}
//
//	for (int i = 0; i < N; ++i) {
//		vecA.push_back(vecB[i]);
//		Dfs(vecB[i], 1);
//		vecA.pop_back();
//	}
//}