//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <cmath>
//using namespace std;
//
//int main()
//{ 
//	int N;
//	cin >> N;
//
//	std::vector<int> scores(N);
//	
//	for (int i = 0; i < N; ++i) {
//		std::cin >> scores[i];
//	}
//	std::sort(scores.begin(), scores.end()); 
//	 
//	int left = 0;
//	int right = N - 1;
//
//	std::vector<int> buffer;
//	while (left <= right) 
//	{
//		buffer.push_back(scores[right--]);
//		buffer.push_back(scores[left++]);
//	}
//
//	int score = buffer[0];
//	for (int i = 1; i < buffer.size(); ++i)
//	{
//		score += std::max(0, buffer[i] - buffer[i - 1]);
//	}
//	std::cout<< score << "\n";
//	return 0;
//}