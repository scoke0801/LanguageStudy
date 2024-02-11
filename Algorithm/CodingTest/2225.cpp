// #include <iostream>
// #include <vector>
// using namespace std;

// constexpr int MAX_CASE = 200;
// constexpr int MOD = 1000000000;
// int main()
// {
//     ios_base::sync_with_stdio(false);
// 	cin.tie(nullptr); 
    
//     int N, K;
//     cin >> N >> K;

//     int buffer[MAX_CASE + 1][MAX_CASE+1] = {0,};
    
//     for(int i =0; i <= N; ++i)
//     {
//         buffer[1][i] = 1;
//     }
    
//     for(int k = 2; k <= K; ++k)
//     {
//         for(int n =0; n <= N; ++n)
//         {
//             for(int i = 0; i <= n; ++i)
//             {
//                 buffer[k][n] = ((long long)buffer[k][n] +buffer[k-1][i] ) % MOD;
//             }
//         }
//     }
//     std::cout << buffer[K][N];
//     return 0;
// }