#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
using namespace std;

int N;
std::vector<int> team;
std::vector<std::vector<int>> vec;
int ans = INT_MAX;

constexpr int TEAM_A = 0;
constexpr int TEAM_B = 1;

void teamSet(int idx, int level)
{
	if (level == N * 0.5f)
	{
		int teamA = 0;
		int teamB = 0;

		std::vector<int> vecA;
		std::vector<int> vecB;
		for (int i = 0; i < N; ++i) {
			if (team[i] == TEAM_A) {
				vecA.push_back(i);
			}
			else {
				vecB.push_back(i);
			}
		}

		//std::cout << "A Team: ";
		for (size_t i = 0; i < vecA.size(); ++i)
		{
//			std::cout << vecA[i] << " ";
			for (size_t j = 0; j < vecA.size(); ++j) {
				teamA += (vec[vecA[i]][vecA[j]]);
			}
		}
	//	std::cout << " ";

		for (size_t i = 0; i < vecB.size(); ++i) {
			for (size_t j = 0; j < vecB.size(); ++j) {
				teamB += (vec[vecB[i]][vecB[j]]);
			}
		}
		 
		//std::cout << "A: " << teamA << " B: " << teamB << "\n";
		ans = std::min(ans, std::abs(teamA - teamB));
	}

	for (int i = idx; i < N; ++i) { 
		team[i] = TEAM_B;
		teamSet(i + 1,level + 1);
		team[i] = TEAM_A;
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> N;
	team.resize(N);
	vec = std::vector<std::vector<int>>(N, std::vector<int>(N));

	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < N; ++j) {
			cin >> vec[i][j];
		}
	}

	teamSet(0, 0);

	std::cout << ans << "\n";
}