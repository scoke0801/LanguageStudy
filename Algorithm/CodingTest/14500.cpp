// #include <iostream>
// using namespace std;

// constexpr int MAX_CASE = 500;

// int board[MAX_CASE][MAX_CASE] = {0,};
// bool visited[MAX_CASE][MAX_CASE] = {0,};
// int N, M;

// int ans = 0;
// int dx[4] = {-1, 1, 0,0};
// int dy[4] = {0,0,-1,1};

// void H(int x, int y)
// { 
//     if( x + 2 < M && y - 1 >= 0)
//     {
//         ans = std::max(ans, board[y][x] + board[y][x+1] + board[y][x+2] + board[y-1][x+1]);
//     } 

//     if(x + 2 < M && y + 1 < N)
//     {
//         ans = std::max(ans, board[y][x] + board[y][x+1] + board[y][x+2] + board[y+1][x+1]);
//     }

//     if(y + 2 < N && x + 1 < M)
//     {
//         ans = std::max(ans, board[y][x] + board[y+1][x] + board[y+2][x] + board[y+1][x+1]);
//     }

//     if(y + 1 < N && y -1 >= 0 && x + 1 < M)
//     {
//         ans = std::max(ans, board[y][x] + board[y-1][x+1] + board[y][x+1] + board[y+1][x+1]);
//     }
// }
// void Dfs(int x, int y, int cur, int level)
// {
//     if(level == 4)
//     { 
//         ans = std::max(cur, ans); 
//         return;
//     }

//     for(int i = 0; i <4; ++i)
//     {
//         int nx = x + dx[i];
//         int ny = y + dy[i];
//         if(nx < 0 || nx >= M){ continue;}
//         if(ny < 0 || ny >= N){ continue;}

//         if(visited[ny][nx]){continue;}

//         visited[ny][nx] = true;
 
//         Dfs(nx,ny, cur + board[ny][nx], level + 1);

//         visited[ny][nx] = false;
//     }
    
// }
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
    
//     cin >> N >> M;

//     for(int y = 0; y < N; ++y)
//     {
//         for(int x = 0; x < M; ++x)
//         {
//             cin >> board[y][x];
//         }
//     }

//     for(int y = 0; y < N; ++y)
//     {
//         for(int x =0; x < M; ++x)
//         {
//             visited[y][x] = true;
//             Dfs(x,y, board[y][x],1);
//             visited[y][x] = false;
//             H(x,y);
//         }
//     }

//     std::cout << ans << "\n";
// }