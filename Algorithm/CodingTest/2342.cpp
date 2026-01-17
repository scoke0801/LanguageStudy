// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <cstring>
// using namespace std;
//
// int getCost(int from, int to)
// {
//     if (from == to) return 1;
//     if (from == 0) return 2; 
//     
//     if ((from == 1 && to == 3)
//         || (from == 3 && to == 1)
//         || (from == 2 && to == 4)
//         || (from == 4 && to == 2))
//     {
//         return 4;
//     }
//     
//     return 3;
// }
//
// int dp[5][5][100001];
// int main()
// {
//     std::ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     
//     vector<int> moves;
//     int n;
//     
//     // 입력 받기 (0이 나올 때까지)
//     while (cin >> n && n != 0)
//     {
//         moves.push_back(n);
//     }
//     
//     int size = moves.size();
//     
//     // dp[왼발][오른발][단계] = 최소 힘
//     memset(dp, -1, sizeof(dp));
//     
//     dp[0][0][0] = 0;  // 초기 상태: 양발 중앙, 힘 0
//     
//     for (int step = 0; step < size; step++)
//     {
//         int target = moves[step];
//         
//         for (int left = 0; left <= 4; left++)
//         {
//             for (int right = 0; right <= 4; right++)
//             {
//                 if (dp[left][right][step] == -1) continue;
//                 
//                 int current = dp[left][right][step];
//                 
//                 // 왼발을 target으로 이동
//                 if (right != target)
//                 {  // 오른발이 target에 없을 때만
//                     int newCost = current + getCost(left, target);
//                     if (dp[target][right][step + 1] == -1
//                         || dp[target][right][step + 1] > newCost)
//                     {
//                         dp[target][right][step + 1] = newCost;
//                     }
//                 }
//                 
//                 // 오른발을 target으로 이동
//                 if (left != target)
//                 {
//                     // 왼발이 target에 없을 때만
//                     int newCost = current + getCost(right, target);
//                     if (dp[left][target][step + 1] == -1 || 
//                         dp[left][target][step + 1] > newCost)
//                     {
//                         dp[left][target][step + 1] = newCost;
//                     }
//                 }
//             }
//         }
//     }
//     
//     // 최소값 찾기
//     int answer = 444444444;
//     for (int left = 0; left <= 4; left++)
//     {
//         for (int right = 0; right <= 4; right++)
//         {
//             if (dp[left][right][size] != -1)
//             {
//                 answer = min(answer, dp[left][right][size]);
//             }
//         }
//     }
//     
//     cout << answer << "\n";
//     
//     return 0;
// }