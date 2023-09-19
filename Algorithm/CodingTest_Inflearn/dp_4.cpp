#include <iostream>
#include <vector>
using namespace std;

int dp[101];

void dfs(int n) {

}
int main()
{

	std::vector<int> arr{ 5,3,7,8,6,2,9,4 };
	std::vector<int> dy(arr.size());
	dy[1] = 1;

	int res = 0;
	for (size_t i = 2; i < arr.size(); ++i) {
		int max = 0;
		for (int j = i - 1; j >= 1; --j) 
		{
			if (arr[j] < arr[i] && dy[j] > max) {
				max = dy[j];
			}
		}
		dy[i] = max + 1;
		if (dy[i] > res) {
			res = dy[i];
		}
	}

	std::cout << res << "\n";
}