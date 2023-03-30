#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int N;
	cin >> N;

	vector<int> scores(N);

	for (int i = 0; i < N; ++i) {
		cin >> scores[i];
	}

	for (int i = 0; i < N; ++i) {
		int bigger = 1;
		for (int j = 0; j < N; ++j) {
			if (scores[j] > scores[i]) {
				++bigger;
			}
		}
		
		cout << bigger << " ";
	}
}