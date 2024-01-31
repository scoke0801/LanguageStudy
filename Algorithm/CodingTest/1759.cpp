#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

std::vector<char> datas;
std::vector<char> path;
std::vector<bool> visit;
int L, C;

char vowel[5] = { 'a', 'e', 'i', 'o', 'u' };

void dfs(int idx, int level)
{
	if (level == L) {
		int vowelCount = 0;

		for (int i = 0; i < L; ++i) {
			vowelCount += std::count(path.begin(), path.end(), vowel[i]);
		}
		if (vowelCount == 0 || L - vowelCount < 2) {
			return;
		}

		for (int i = 0; i < L; ++i) {
			std::cout << path[i];
		}
		std::cout << "\n";
		return;
	}

	for (int i = idx + 1; i < C; ++i) {
		if (visit[i]) { continue; }
		path[level] = datas[i];

		visit[i] = true;
		dfs(i, level + 1);
		visit[i] = false;
	}
}
int main()
{
	cin >> L >> C;

	datas.resize(C);
	path.resize(L);
	visit.resize(C);
	for (int i = 0; i < C; ++i) {
		cin >> datas[i];
	}

	std::sort(datas.begin(), datas.end());
	 
	for (int i = 0; i <= C - L; ++i) {
		path[0] = datas[i];
		visit[i] = true;
		dfs(i , 1);
		visit[i] = false;
	}
}