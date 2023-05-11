#include <iostream>
#include <vector>
#include <queue>
using namespace std;

/*
1 2
1 3
2 4
2 5
3 6
3 7
*/

vector<vector<int>> vec;
queue<int> buffer;
int main()
{
	vec.resize(8);
	vec[1].push_back(2);
	vec[1].push_back(3);

	vec[2].push_back(4);
	vec[2].push_back(5);

	vec[3].push_back(6);
	vec[3].push_back(7);

	buffer.push(1);

	while (!buffer.empty())
	{
		int node = buffer.front();
		buffer.pop();

		cout << node << " ";
		for (int next : vec[node]) {
			buffer.push(next);
		}
	}
}