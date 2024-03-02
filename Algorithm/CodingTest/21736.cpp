// #include <iostream>
// #include <queue>
// using namespace std;

// constexpr char EMPTY = 'O';
// constexpr char WALL = 'X';
// constexpr char DOYEON = 'I';
// constexpr char PERSON = 'P';
// char board[600][600];
// bool visited[600][600];
// int N, M;
// int dx[4] = {-1,1,0,0};
// int dy[4] = {0,0,-1,1};

// std::queue<std::pair<int,int>> buffer;
// int Bfs()
// {
//     int ans = 0;
//     while(buffer.empty() == false)
//     {
//         int x = buffer.front().first;
//         int y = buffer.front().second;
//         buffer.pop();

//         for(int i = 0; i < 4; ++i)
//         {
//             int nx = x + dx[i];
//             int ny = y + dy[i];
//             if(nx < 0 || nx >= M){continue;}
//             if(ny < 0 || ny >= N){continue;}

//             if(visited[ny][nx]){continue;}
//             if(board[ny][nx] == WALL){continue;}
//             if(board[ny][nx] == PERSON){ ++ans;}
//             visited[ny][nx] = true;
//             buffer.push(std::make_pair(nx,ny));
//         }
//     }
//     return ans;
// }
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
    
//     cin >> N >> M;
//     std::string str;

//     for(int i = 0; i < N; ++i)
//     {
//         cin >> str;
//         for(int j = 0; j < M; ++j)
//         {
//             board[i][j] = str[j];
//             if(board[i][j] == DOYEON)
//             {
//                 buffer.push(std::make_pair(j,i));
//                 visited[i][j] = true;
//             }
//         }
//     }

//     int ans = Bfs();

//     if(ans == 0){
//         std::cout << "TT";
//     }
//     else{
//         std::cout << ans;
//     }
// }