#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int N, M;
	int left = 1;
	int right = 0;
	int mid = 0;

	cin >> N >> M;

	vector<int> vec(N);
	for (int i = 0; i < N; ++i) {
		cin >> vec[i];
		right += vec[i];
	}

	int ans = right;
	while (left <= right)
	{
		mid = (left + right) * 0.5f;

		int sum = 0;
		int count = 0;
		for (int i = 0; i < N; ++i) {
			if (sum + vec[i] >= mid) {
				++count;
				sum = 0;
			}
			sum += vec[i];
		}

		if (count == M) {
			ans = mid;
		}

		if (count >= M) {
			left = mid + 1;
		}
		else if (count < M) {
			right = mid - 1;
		}
	}

	cout << ans << "\n";
}