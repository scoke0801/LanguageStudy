#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int N, S;
std::vector<int> vec;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> N >> S;
	vec.resize(N+1);

	for (int i = 0; i < N; ++i) {
		cin >> vec[i]; 
	}

	int left = 0;
	int right = 0; 
	int sum = vec[0];
	int ans = INT_MAX;
	while (left <= right && right < N) {
		if (sum < S ) {
			sum += vec[++right];
		}
		else {
			ans = std::min(ans, right - left + 1);
			sum -= vec[left++];
		}
	}

	if (ans == INT_MAX) {
		std::cout << 0;
	}
	else {
		std::cout << ans;
	}

}