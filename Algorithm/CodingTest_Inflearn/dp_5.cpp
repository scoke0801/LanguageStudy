//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//struct Brick {
//	int width;
//	int height;
//	int weight;
//
//	Brick(int width, int height, int weight)
//	{
//		this->width	= width;
//		this->height = height;
//		this->weight = weight;
//	}
//};
//
//std::vector<Brick> bricks;
//std::vector<int> dp;
//int main()
//{
//	int N;
//
//	cin >> N;
//	
//	dp.resize(N);
//
//	for (int i = 0; i < N; ++i) {
//		int width, height, weight;
//		cin >> width >> height >> weight;
//	
//		bricks.emplace_back(width, height, weight);
//	}
//
//	std::sort(bricks.begin(), bricks.end(), [](const Brick& lhs, const Brick& rhs) {
//		return lhs.width > rhs.width;
//		});
//
//	dp[0] = bricks[0].height;
//	int max_height = 0;
//	for (int i = 1; i < N; ++i) {
//		max_height = 0;
//		for (int j = i - 1; j >= 0; --j) {
//			if (bricks[j].weight > bricks[i].weight && dp[j] > max_height) {
//				max_height = dp[j];
//			}
//		}
//
//		dp[i] = max_height + bricks[i].height;;
//	}
//
//
//	std::cout << *(std::max_element(dp.begin(), dp.end()));
//
//}