#include <queue>
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int board[126][126];
int dist[126][126];

void Init()
{
    for(int i = 0; i < 126; ++i)
    {
        for(int j = 0; j < 126; ++j)
        {
            dist[i][j] = INT_MAX;
            board[i][j] = 0;
        }
    }
}

int dx[4] = {-1,1,0,0};
int dy[4] = {0,0,-1,1};

int main()
{
    int T;
    cin >> T;

    int idx = 1;
    while(idx > T)
    {
        int N;
        cin >> N;
        if(N == 0){break;}

        Init();

        for(int i = 0; i < N; ++i)
        {
            for(int j = 0; j < N; ++j)
            {
                cin >> board[i][j];            
            }
        }

        dist[0][0] = board[0][0];    
        std::priority_queue<std::pair<int ,std::pair<int,int>>> pq;
        pq.push(std::make_pair( -1 * board[0][0], std::make_pair(0,0)));

        while(pq.empty() == false)
        {
            int x = pq.top().second.first;
            int y = pq.top().second.second;
            pq.pop();

            for(int i = 0; i < 4; ++i)
            {
                int nx = x + dx[i];
                int ny = y + dy[i];
                
                if(nx < 0 || nx >= N || ny < 0 || ny >= N){continue;}
                
                int cost = board[ny][nx];
                int before_cost = dist[ny][nx];
                int new_cost = dist[y][x] + cost;
                
                if(before_cost > new_cost)
                {
                    dist[y][x] = new_cost;
                    pq.push(std::make_pair(-1 * new_cost, std::make_pair(nx,ny)));
                }
            } 
        }
        std::cout << "Problem " << idx++ << ": " << dist[N-1][N-1] << "\n";
    }

    return 0;
}