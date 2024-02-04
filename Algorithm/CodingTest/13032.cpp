//#include <iostream>
//#include <vector>
//using namespace std;
//
//int N, M;
//
//std::vector<std::vector<int>> friendship;
//std::vector<bool> visit;
//bool found = false;
//
//bool Dfs(int cur, int level)
//{
//    if (level >= 4)
//    {
//        found = true;
//        return true;;
//    }
//
//    visit[cur] = true;
//    for (int i = 0; i < friendship[cur].size(); ++i)
//    {
//        if (visit[friendship[cur][i]]) { continue; }
//        if (Dfs(friendship[cur][i], level + 1))
//        {
//            return true;
//        }
//    }
//    visit[cur] = false;
//    return false;
//}
//int main()
//{
//    ios_base::sync_with_stdio(false);
//    cin.tie(nullptr);
//
//    cin >> N >> M;
//
//    friendship.resize(N);
//    visit.resize(N);
//    for (int i = 0; i < M; ++i)
//    {
//        int from, to;
//        cin >> from >> to;
//
//        friendship[from].push_back(to);
//        friendship[to].push_back(from);
//    }
//
//    for (int i = 0; i < N; ++i)
//    {
//        visit[i] = true;
//        for (int j = 0; j < friendship[i].size(); ++j)
//        {
//            if (Dfs(friendship[i][j], 1))
//            {
//                break;
//            }
//        }
//        visit[i] = false;
//        if (found) { break; }
//    }
//
//    std::cout << found;
//    return 0;
//
//}