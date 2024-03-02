// #include <iostream>

// using namespace std;

// bool board[100][100];

// bool visited[100][100];

// int N;

// void Dfs(int idx)
// {
//     for(int i = 0; i < N;++i)
//     {
//         if(board[idx][i] == false) {continue;}

//         if(visited[idx][i]){continue;}
//         visited[idx][i] = true;
//         board[idx][i] = true;
//         Dfs(i);
//     }
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);

//     cin >> N;
//     for(int i = 0; i < N; ++i)
//     {
//         for(int j = 0; j < N; ++j)
//         {
//             cin >> board[i][j];
//         }
//     }

//     // for(int k = 0; k< N; ++k)
//     // {
//     //     for(int i = 0; i < N; ++i)
//     //     {
//     //         for(int j = 0; j < N; ++j)
//     //         {
//     //             if(board[i][k] && board[k][j])
//     //             {
//     //                 board[i][j] = true;
//     //             }
//     //         }
//     //     }
//     // }

//     for(int i = 0; i < N; ++i)
//     {
//         for(int j = 0; j < N; ++j)
//         {
//             if(visited[i][j]){continue;}
//             if(board[i][j] == false) {continue;}
//             visited[i][j] = true;
//             Dfs(j);
//         }
//     }
//     for(int i = 0; i < N; ++i)
//     {
//         for(int j = 0; j < N; ++j)
//         {
//             std::cout << board[i][j] << " ";
//         }
//         std::cout << "\n";
//     }
//     return 0;
// }