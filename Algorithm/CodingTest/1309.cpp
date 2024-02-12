// #include <iostream>
// #include <vector>
// using namespace std;

// constexpr int MOD = 9901;

// constexpr int XX = 0;
// constexpr int OX = 1;
// constexpr int XO = 2;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int N;
//     cin >> N;

//     int buffer[100001][3] = {0,};

//     buffer[1][XX] = 1;
//     buffer[1][OX] = 1;
//     buffer[1][XO] = 1;

//     for(int i = 2; i <= N; ++i)
//     {
//         buffer[i][XX] = ( buffer[i-1][XX] + buffer[i-1][XO] + buffer[i-1][OX] ) % MOD;
//         buffer[i][XO] = (buffer[i-1][XX] + buffer[i-1][OX]) % MOD;
//         buffer[i][OX] = (buffer[i-1][XX] + buffer[i-1][XO]) % MOD;
//     }

//     std::cout << (buffer[N][XX] + buffer[N][XO] + buffer[N][OX] ) % MOD  << "\n";
// }