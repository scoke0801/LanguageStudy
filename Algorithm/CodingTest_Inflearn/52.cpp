#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<int> nums( N + 1);
	nums[1] = 1;

	int index = 1;
	int points[3] = { 1,1,1 };
	int multiplier[3] = { 2, 3, 5 };
	for (int i = 2; i <= N; ++i) {
		int n1 = nums[ points[0] ] * multiplier[0];
		int n2 = nums[ points[1] ] * multiplier[1];
		int n3 = nums[ points[2] ]* multiplier[2];

		int minNum = std::min(std::min(n1, n2), n3);

		for (int j = 0; j < 3; ++j) {
			if (minNum == ( nums[points[j]] * multiplier[j]) ) {
				++points[j];
			}
		}
		nums[i] = minNum;
	}

	cout << nums[N];
}