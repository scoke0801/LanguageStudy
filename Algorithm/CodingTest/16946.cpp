// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
 
// int N;

// std::vector<std::vector<int>> board;
// std::vector<bool> visited;
// std::vector<int> inputs;

// int ans = 1;
// int order = 2;
// void Dfs(int cur)
// {
//     if(ans == 0){ return;}
    
//     for(int i = 0; i < board[cur].size(); ++i)
//     {
//         int next = board[cur][i];
//         if(visited[next]){continue;}

//         if(inputs[next] != order++ )
//         {
//             ans = 0;
//             return;
//         }
//         visited[next] = true;

//         Dfs(next);
//     }
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);

//     cin >> N;
//     board.resize(N+1);
//     visited.resize(N+1);
//     for(int i =0 ; i < N-1; ++i)
//     {
//         int from, to;
//         cin >> from >> to;
//         board[from].push_back(to);
//         board[to].push_back(from);
//     }

//     inputs.resize(N+1);
//     for(int i = 1; i <= N; ++i)
//     {
//         int num;
//         cin >> num;
//         inputs[num] = i;
//     }

//     for(int i = 1; i <= N; ++i)
//     {
//         std::sort(board[i].begin(), board[i].end(), [](int a, int b)
//         {
//             return inputs[a] < inputs[b];
//         }
//         );
//     }


//     visited[1] = true;
//     Dfs(1);

//     std::cout << ans << "\n";
// }