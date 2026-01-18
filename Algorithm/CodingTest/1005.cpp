// #include <iostream>
// #include <vector>
// #include <queue>
// using namespace std;
//
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//
//     int T;
//     cin >> T;
//
//     for (int i = 0; i < T; ++i)
//     {
//         int N, K;
//         cin >> N >> K;
//
//         vector<int> buildTime(N+1);
//         for (int j = 1; j <= N; ++j)
//         {
//             cin >> buildTime[j];
//         }
//
//         vector<vector<int>> graph(N + 1);
//         vector<int> indegress(N+1, 0);
//         for (int j = 0; j < K; ++j)
//         {
//             int from, to;
//             cin >> from >> to;
//
//             graph[from].push_back(to);
//             indegress[to]++;
//         }
//         int W;
//         cin >> W;
//
//         vector<int> dp(N+1, 0);
//         queue<int> q;
//         for (int j = 1; j <= N; ++j)
//         {
//             if (indegress[j] == 0)
//             {
//                 q.push(j);
//                 dp[j] = buildTime[j];
//             }
//         }
//
//         while (!q.empty())
//         {
//             int current = q.front();
//             q.pop();
//             
//             for(int next : graph[current])
//             {
//                 dp[next] = max(dp[next], dp[current] + buildTime[next]);
//                 
//                 indegress[next]--;
//                 
//                 if(indegress[next] == 0)
//                 {
//                     q.push(next);
//                 }
//             }
//         }
//
//         cout << dp[W] << '\n';
//     }
// }