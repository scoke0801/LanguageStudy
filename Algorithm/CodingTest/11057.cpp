// #include <iostream>
// #include <vector>
// #include <numeric>
// using namespace std;

// constexpr int MOD = 10007;
// int main()
// {
//     int N;
//     cin >> N;

//     int buffer[1001][10] = {0,};

//     for(int i = 0; i <10; ++i)
//     {
//         buffer[1][i] = 1;
//     }
    
//     for(int i = 2; i <= N; ++i)
//     {
//         for(int j = 0; j < 10; ++j)
//         {
//             int temp = 0;
//             for(int k = 0; k <= j; ++k){
//                 temp += buffer[i-1][k];
//             }
//             temp %= MOD;
//             buffer[i][j] = temp;
//         }
//     }

//     int ans = 0;
//     for(int i =0; i < 10; ++i)
//     {
//         ans += buffer[N][i];
//     }
//     std::cout << ans % MOD;
// }