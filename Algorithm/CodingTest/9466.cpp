#include <iostream>
#include <vector>
using namespace std;

int T, N;
vector<bool> visited;
vector<bool> finished;
vector<int> students;

int teamCount = 0;

void dfs(int current)
{
    visited[current] = true;
    int next = students[current];
    if (visited[next] == false)
    {
        dfs(next);
    }
    else if (finished[next] == false)
    {
        int temp = next;
        while (temp != current)
        {
            ++teamCount;
            temp = students[temp];
        }
        ++teamCount;
    }

    finished[current] = true;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> T;
    for (int i = 0; i < T; ++i)
    {
        cin >> N;

        students.resize(N + 1);

        visited.clear();
        visited.resize(N + 1);

        finished.clear();
        finished.resize(N + 1);
        for (int j =1; j <= N; ++j)
        {
            cin >> students[j];
        }
        
        // 모든 학생에 대해 DFS 수행
        for (int j = 1; j <= N; ++j)
        {
            if (!visited[j])
            {
                dfs(j);
            }
        }

        cout << N - teamCount << "\n";
        teamCount = 0;
    }

    
}