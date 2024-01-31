//#include <iostream>
//#include <vector>
//#include <climits>
//#include <algorithm>
//
//using namespace std;
//
//std::vector<std::vector<int>> board;
//std::vector<int> team;
//std::vector < bool > visit;
//int ans = INT_MAX;
//
//constexpr int TEAM_A = 0;
//constexpr int TEAM_B = 1;
//int N, S;
//void dfs(int idx, int level) {
//	if (level > N * 0.5f) 
//	{
//		return;
//	}
//	if (level > 0 && level <= N * 0.5f) {
//		std::vector<int> teamA;
//		std::vector<int> teamB;
//		
//		for (int i = 0; i < N; ++i) {
//			if (team[i] == TEAM_A) {
//				teamA.push_back(i);
//			}
//			else {
//				teamB.push_back(i);
//			}
//		}
//
//		if (teamA.empty() || teamB.empty()) { return; }
//
//		int aScore = 0;
//		for (int i = 0; i < teamA.size(); ++i) {
//			for (int j = 0; j < teamA.size(); ++j) {
//				aScore += board[teamA[i]][teamA[j]];
//			}
//		}
//
//		int bScore = 0;
//		for (int i = 0; i < teamB.size(); ++i) {
//			for (int j = 0; j < teamB.size(); ++j) {
//				bScore += board[teamB[i]][teamB[j]];
//			}
//		}
//
//		ans = std::min(ans, std::abs(aScore - bScore));
//		//return;
//	}
//
//	for (int i = idx; i < N; ++i) { 
//
//		team[i] = TEAM_B;
//		 
//		dfs(i +1, level + 1);
//
//		team[i] = TEAM_A;  
//	}
//
//}
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	cin >> N;
//	board = std::vector < std::vector<int>>(N, std::vector<int>(N));
//	visit.resize(N);
//	team.resize(N);
//	for (int i = 0; i < N; ++i) {
//		for (int j = 0; j < N; ++j) {
//			cin >> board[i][j];
//		}
//	}		
//	 
//	dfs(0, 0); 
//	std::cout << ans;
//}