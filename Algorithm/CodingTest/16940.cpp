// #include <iostream>
// #include <queue>
// #include <vector>
// #include <algorithm>
// using namespace std;
    
// int N;

// std::vector<std::vector<int>> board;
// std::vector<bool> visited;
// std::vector<int> inputs;
// bool Bfs()
// {
//     std::queue<int> queue;
//     queue.push(1);
//     visited[1] = true;

//     int order = 2;

//     while(queue.empty() == false)
//     {
//         int cur =queue.front();
//         queue.pop();

//         for(int i = 0; i < board[cur].size(); ++i)
//         {
//             int next = board[cur][i];
//             if(visited[next]){continue;}

//             if(order++ != inputs[next]){return false;}
 
//             visited[next] = true;
//             queue.push(next);
//         }
//     }

//     return true;
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);

//     cin >> N;

//     visited.resize(N+1);
//     board.resize(N+1);
//     inputs.resize(N+1);
//     for(int i =0 ; i < N-1; ++i)
//     {
//         int from, to;
//         cin >> from >> to;
//         board[from].push_back(to);
//         board[to].push_back(from);
//     }

//     for(int i = 1 ; i <= N; ++i)
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
//         });
//     }

//     if(inputs[1] != 1){
//         std::cout << 0;
//         return 0;
//     }

//     std::cout << Bfs() << "\n";
// }