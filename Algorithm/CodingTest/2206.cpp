// #include <iostream>
// #include <queue>

// using namespace std;

// constexpr bool WALL = 1;
// constexpr bool MOVABLE = 0;
// bool board[1001][1001];
// bool visited[1001][1001][2];
// int N, M;

// struct Info
// {
//     int x, y, level;
//     bool broken;

//     Info(){}
//     Info(int x, int y, int level, bool broken) : x(x), y(y), level(level), broken(broken){}
// };

// int dx[4] = {-1, 1, 0,0};
// int dy[4] = {0,0,-1,1};

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);

//     cin >> N >> M;
//     for(int i = 0; i < N; ++i)
//     {
//         std::string str;
//         cin >> str;
//         for(int j = 0; j < M; ++j)
//         {
//             board[i][j] = str[j] - '0';
//         }
//     }
//     std::queue<Info> buffer;
//     buffer.push(Info(0,0, 1, false));
//     visited[0][0][0] = visited[0][0][1] = true;

//     int ans = -1;
//     while(buffer.empty() == false)
//     {
//         int x = buffer.front().x;
//         int y = buffer.front().y;
//         int level = buffer.front().level;
//         bool broken = buffer.front().broken;
//         buffer.pop();

//         if(x == N - 1 && y == M - 1)
//         {
//             ans = level;
//             break;
//         }
//         for(int i = 0; i < 4; ++i)
//         {
//             int nx = x + dx[i];
//             int ny = y + dy[i];
//             int nLevel = level +1;

//             if(nx < 0 || nx >= N){continue;}
//             if(ny < 0 || ny >= M){continue;}

//             if(board[nx][ny] == WALL && broken == false)
//             {
//                 if(visited[nx][ny][1]) { continue; }
//                 visited[nx][ny][1] = true;
//                 buffer.push(Info(nx,ny, level + 1, true));
//             }
//             else if(board[nx][ny] != WALL)
//             {
//                 if(visited[nx][ny][broken]){continue;}
//                 visited[nx][ny][broken] = true;
//                 buffer.push(Info(nx,ny, level+1, broken));
//             }
//         }
//     }

//     std::cout << ans << "\n";

//     return 0;
// }