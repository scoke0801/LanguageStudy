// #include <iostream>
// #include <vector>
// using namespace std;

// constexpr int MOD = 1000000009;
// int main()
// {
//     int T;
//     cin >> T;

//     int buffer[1000001] = {0,};

//     buffer[1] = 1;
//     buffer[2] = 2;  // 1 + 1, 2
//     buffer[3] = 4;  // 1 + 1 + 1, 2 + 1, 1 + 2, 3
//     buffer[4] = 7;

//     int maxCase = 0;
//     std::vector<int> input(T);
//     for(int i = 0; i < T; ++i)
//     {
//         cin >> input[i];
        
//         maxCase = std::max( input[i], maxCase );
//     }

//     for(int i = 4; i <= maxCase; ++i)
//     {
//         buffer[i] = ((long long)buffer[i-3] + buffer[i-2] + buffer[i-1]) % MOD;
//     }

//     for(int i = 0; i < T; ++i)
//     {
//         std::cout << buffer[input[i]] << "\n";
//     }
// }