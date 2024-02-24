// #include <iostream>
// #include <climits>
// #include <string.h>
// using namespace std;

// constexpr char BACK = 'T';
// constexpr char FRONT = 'H';
// int N;

// bool path[20];
// bool board[20][20];
// bool temp[20][20]; 

// int ans = INT_MAX;

// void Dfs(int level)
// {
//     if(level == N)
//     {
//         memcpy(temp, board, sizeof(temp));
//         for(int i = 0; i < N; ++i)
//         {
//             if(path[i] == false) {continue;}

//             for(int j = 0; j < N; ++j)
//             {
//                 temp[i][j] = 1 - temp[i][j];
//             }
//         }

//         for(int i = 0; i < N; ++i)
//         {
//             int frontCount = 0;
//             for(int j = 0; j < N; ++j)
//             {
//                 if(temp[j][i]){
//                     ++frontCount;
//                 }
//             }

//             int backCount = N - frontCount;
//             if(frontCount < backCount ){
//                 for(int j = 0; j < N; ++j){
//                     temp[j][i] = 1 - temp[j][i];
//                 }
//             }
//         }
//         int backCount = 0;
//         for(int i = 0; i < N; ++i)
//         {
//             for(int j = 0; j < N; ++j)
//             {
//                 if(temp[i][j] == false){++backCount;}
//             }
//         }

//         ans = std::min(backCount, ans);
//         return;
//     }

//     path[level] = true;
//     Dfs(level+1);

//     path[level] = false;
//     Dfs(level +1);
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);

//     cin >> N;
    
//     for(int i = 0; i < N; ++i)
//     {
//         std::string temp;
//         cin >> temp;
//         for(int j =0;j<N; ++j)
//         {
//             board[i][j] = temp[j] == 'H';
//         }
//     }
    
//     Dfs(0);

//     std::cout << ans << "\n";
// }