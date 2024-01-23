//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//std::vector<int> vec;
//void my_prev_permutation()
//{
//	int i = vec.size() - 1;
//	while (i > 0 && vec[i - 1] < vec[i]) {
//		--i;
//	}
//
//	if (i == 0) {
//		std::cout << -1;
//		return;
//	}
//
//	int j = vec.size() - 1;
//	while (vec[i - 1] < vec[j]) {
//		--j;
//	}
//
//	std::swap(vec[i - 1], vec[j]);
//
//	std::reverse(vec.begin() + i, vec.end());
//	for (int num : vec) {
//		std::cout << num << " ";
//	}
//	std::cout << "\n";
//}
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//	int N;
//	cin >> N;
//
//	vec.resize(N);
//	for (int i = 0; i < N; ++i) {
//		cin >> vec[i];
//	}
//	
//	my_prev_permutation();
//
//}