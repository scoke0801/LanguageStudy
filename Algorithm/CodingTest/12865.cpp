// #include <iostream>
// #include <vector>
// #include <climits>
// using namespace std;

// struct Obj
// {
//     int w, v;
//     Obj(){}
//     Obj(int w, int v):w(w),v(v)
//     {}
// };

// std::vector<bool> visited;
// std::vector<Obj> buffer;
// int N, K;
// int ans = INT_MIN;

// void Dfs(int curW, int curV, int level)
// {
//     if(level == N)
//     {
//         ans = std::max(ans, curV);
//         return;
//     }

//     for(int i =0 ; i < N; ++i)
//     {
//         if(visited[i]){continue;}
//         if(curW + buffer[i].w  > K){continue;}

//         visited[i] = true;

//         Dfs(curW + buffer[i].w, curV + buffer[i].v, level +1);

//         visited[i] = false;
//     }

//     ans = std::max(ans,curV);
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cout.tie();

//     cin >> N >> K;

//     buffer.resize(N);
//     visited.resize(N);

//     for(int i =0 ; i < N; ++i)
//     {
//         int w, v;
//         cin >> w >> v;

//         buffer[i] = Obj(w,v);
//     }
//     Dfs(0,0,0);

//     std::cout << ans << "\n";
// }