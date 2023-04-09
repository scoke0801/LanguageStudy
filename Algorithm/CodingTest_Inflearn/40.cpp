#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;

int main()
{
	int N, M;
	cin >> N;
	
	unordered_set<int> buf;

	for (int i = 0; i < N; ++i) {
		int num;
		cin >> num;
		buf.insert(num);
	}

	cin >> M;

	vector<int> ans;
	for (int i = 0; i < M; ++i)
	{
		int num;
		cin >> num;

		if (buf.find(num) != buf.end())
		{
			ans.push_back(num);
		}
	}

	std::sort(ans.begin(), ans.end());

	for (int num : ans) {
		cout << num << " ";
	}
}