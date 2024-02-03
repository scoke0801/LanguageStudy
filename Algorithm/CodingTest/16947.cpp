#include <iostream>
#include <vector>
#include <climits>
#include <queue>
using namespace std;

int N;
std::vector<std::vector<int>> buffer;
std::vector<bool> visit; 
std::vector<int> Prev;
std::vector<bool> Cycle;
int start = 0;
bool found;
bool Dfs(int cur)
{
	if (found) { return true; } 

	visit[cur] = true;
	for (int i = 0; i < buffer[cur].size(); ++i)
	{
		int next = buffer[cur][i];
		
		if (visit[buffer[cur][i]]) 
		{
			if (next != Prev[cur])
			{
				Cycle[cur] = true;
				found = true;
				while (cur != next) 
				{
					Cycle[Prev[cur]] = true;
					cur = Prev[cur];
				}
				return true;
			}
		}
		else {
			Prev[next] = cur;
			if (Dfs(next)) {
				return true;
			}
		}
	} 
	return false;
}

int main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> N;
	buffer.resize(N + 1);
	visit.resize(N + 1);
	Prev.resize(N + 1);
	Cycle.resize(N + 1);
	for (int i = 1; i <= N; ++i) {
		int a, b;
		cin >> a >> b;
		
		buffer[a].push_back(b);
		buffer[b].push_back(a);
	} 

	std::vector<int> queue;

	Dfs(1);

	for (int i = 1; i <= N; ++i) {
		if (!found || Cycle[i]) {
			std::cout << 0 << " ";
		}
		else { 
			std::queue<std::pair<int,int>> queue;
			for (int j = 0; j < buffer[i].size(); ++j) {
				queue.push(std::make_pair(buffer[i][j], 1));
			}

			std::vector<bool> innerVisit(N + 1);
			while (!queue.empty())
			{
				int pos = queue.front().first;
				int depth = queue.front().second;
				queue.pop();
			
				innerVisit[pos] = true;

				if (Cycle[pos]) {
					std::cout << depth << " ";
					break;
				}

				for (int j = 0; j < buffer[pos].size(); ++j) {
					if (innerVisit[buffer[pos][j]]) { continue; }
					queue.push( std::make_pair(buffer[pos][j], depth + 1 ));
				}
			}
		}
	}
}