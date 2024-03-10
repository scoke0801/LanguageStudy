// #include <iostream>
// #include <queue>
// #include <vector>
// #include <cstring>
// #include <climits>
// #include <algorithm>
// using namespace std;
// using Pair = std::pair<int,int>;

// int n,x,m;
// vector<Pair> v[1002];
// int dst[1002]; 
// int result; 

// void GetCost(int a, int d)
// {
//     std::fill_n(dst, sizeof(dst)/sizeof(int), INT_MAX);
//     priority_queue<Pair, vector<Pair>, greater<Pair>> pq; 
 
//     pq.push({0, a});
//     dst[a] = 0; 
    
//     while(!pq.empty())
//     {
//         int cx = pq.top().second;
//         int cdst = pq.top().first;

//         pq.pop();
        
//         if(cx == d)
//         {
//             result = dst[cx];
//             break;
//         }

//         for (int i = 0; i < v[cx].size();i++)
//         {     
//             int nx = v[cx][i].first; 
//             int ndst = v[cx][i].second + cdst; 
//             if(dst[nx] > ndst)
//             {
//                 dst[nx] = ndst; 
//                 pq.push({ndst, nx}); 
//             }
//         }
//     }
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);

//     cin >> n >> m >> x;
    
//     int ans1, ans2, ans;
//     ans = 0;
    
//     int a, b, t;
    
//     for (int i = 0; i < m;i++)
//     {
//         cin >> a >> b >> t;
//         v[a].push_back({b, t});
//     }
    
//     for (int i = 1; i <= n;i++)
//     {
//         GetCost(i, x);  
//         ans1 = result; 
        
//         GetCost(x, i); 
//         ans2 = result;

//         if(ans < ans1+ans2)
//         {
//             ans = ans1 + ans2; // 합
//         }
//     }
    
//     cout << ans << '\n'; // 최단 거리 출력
//     return 0;
// }