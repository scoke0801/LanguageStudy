// #include <iostream>
// #include <queue>
// #include <vector>
// using namespace std;
//
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     
//     int N, M;
//     cin >> N >> M;
//     
//     vector<vector<int>> graph(N + 1);
//     vector<int> indegree(N + 1, 0);
//     
//     for (int i = 0; i < M; ++i)
//     {
//         int cnt;
//         cin >> cnt;
//     
//         int prev, cur;
//         cin >> prev;
//     
//         for (int j = 1; j < cnt; j++)
//         {
//             cin >> cur;
//             graph[prev].push_back(cur);
//             indegree[cur]++;
//             prev = cur;
//         }
//     }
//
//     queue<int> q;
//     vector<int> result;
//     
//     for (int i = 1; i <= N; i++)
//     {
//         if (indegree[i] == 0)
//         {
//             q.push(i);
//         }
//     }
//     
//     while (!q.empty())
//     {
//         int cur = q.front();
//         q.pop();
//         result.push_back(cur);
//         
//         for (int next : graph[cur])
//         {
//             indegree[next]--;
//             if (indegree[next] == 0)
//             {
//                 q.push(next);
//             }
//         }
//     }
//     
//     if (result.size() != N)
//     {
//         cout << 0 << '\n';
//     }
//     else
//     {
//         for (int n : result)
//         {
//             cout << n << '\n';
//         }
//     }
//     
//     return 0;
// }