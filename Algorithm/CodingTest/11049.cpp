// #include <iostream>
// #include <vector>
// #include <climits>
// using namespace std;
//
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     
//     int N;
//     cin >> N;
//     
//     vector<pair<int, int>> matrix(N);
//     for (int i = 0; i < N; i++)
//     {
//         cin >> matrix[i].first >> matrix[i].second;
//     }
//     vector<vector<int>> dp(N, vector<int>(N, 0));
//     for (int len = 2; len <= N; len++)
//     {
//         for (int i = 0; i <= N - len; i++)
//         {
//             int end = i + len - 1;
//             dp[i][end] = INT_MAX;
//             
//             for (int k = i; k < end; k++)
//             {
//                 int cost = dp[i][k] + dp[k + 1][end] 
//                          + matrix[i].first * matrix[k].second * matrix[end].second;
//                 
//                 dp[i][end] = min(dp[i][end], cost);
//             }
//         }
//     }
//     
//     cout << dp[0][N - 1] << "\n";
//     
//     return 0;
// }