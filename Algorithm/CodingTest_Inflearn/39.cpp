#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int N, M;
	cin >> N;

	vector<int> vec;

	for (int i = 0; i < N; ++i) {
		int num;
		cin >> num;
		vec.push_back(num);
	}

	cin >> M;
	for (int i = 0; i < M; ++i) {
		int num;
		cin >> num;
		vec.push_back(num);
	}

	std::sort(vec.begin(), vec.end());

	for (int num : vec)
	{
		cout << num << " ";
	}
}
