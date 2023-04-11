#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;

	vector<int> vec(N);
	for (int i = 0; i < N; ++i) {
		cin >> vec[i];
	}

	sort(vec.begin(), vec.end());
 
	int left = 0;
	int right = N - 1;
	int pos = 0;
	while ( left <= right )
	{
		pos = (left + right) * 0.5f;
		if (vec[pos] > M)
		{
			right = pos - 1;
		}
		else if( vec[pos] < M)
		{
			left = pos + 1;
		}
		else
		{
			cout << pos + 1 << endl;
			break;
		}
	}


}
