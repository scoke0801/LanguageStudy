// #include <iostream>
// #include <vector>
// using namespace std;
// constexpr int MOD = 1000000000;

// int main()
// {
//     int N;

//     cin >> N;

//     int buffer[101][10] = {0,};    

//     for(int i = 1; i < 10; ++i){
//         buffer[1][i] = 1;
//     }

//     for(int i = 2; i <= N; ++i)
//     {
//         for(int j = 0; j <10; ++j)
//         {
//             if(j == 0)
//             {
//                 buffer[i][0] = buffer[i-1][1] % MOD;
//             }
//             else if(j == 9)
//             {
//                 buffer[i][9] = buffer[i-1][8] % MOD;
//             }
//             else{
//                 buffer[i][j] = ( buffer[i-1][j-1] + buffer[i-1][j+1] ) % MOD;
//             }
//         }
//     }

//     long long sum = 0;
//     for(int i = 0; i < 10;++i)
//     {
//         sum = ( sum + buffer[N][i]) %MOD; 
//     }
//     std::cout << sum << "\n";

//     return 0;
// }