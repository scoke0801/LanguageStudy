#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N, M;
    cin >> N >> M;
    
    vector<vector<int>> graph(N + 1);
    vector<int> indegree(N + 1, 0);
    
    for (int i = 0; i < M; ++i)
    {
        int A;
        cin >> A;
        vector<int> order(A);
        for (int j = 0; j < A; ++j)
        {
            cin >> order[j];
        }

        for (int j = 0; j < A - 1; ++j)
        {
            graph[order[j]].push_back(order[j + 1]);
            indegree[order[j + 1]]++;
        }
    }

    queue<int> q;
    vector<int> result;
    
    for (int i = 1; i <= N; i++)
    {
        if (indegree[i] == 0)
        {
            q.push(i);
        }
    }
    
    while (!q.empty())
    {
        int cur = q.front();
        q.pop();
        result.push_back(cur);
        
        for (int next : graph[cur])
        {
            indegree[next]--;
            if (indegree[next] == 0)
            {
                q.push(next);
            }
        }
    }
    
    if (result.size() != N)
    {
        cout << 0 << '\n';
    }
    else
    {
        for (int n : result)
        {
            cout << n << '\n';
        }
    }
    
    return 0;
}