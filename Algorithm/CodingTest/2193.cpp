// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int N;
//     cin >> N;

//     // 0 : 0으로 끝나는
//     // 1 : 1으로 끝나는
//     long long buffer[91][2];

//     buffer[1][0] = 0;
//     buffer[1][1] = 1;
//     buffer[2][0] = 1;
//     buffer[2][1] = 0;

//     for(int i = 3; i <= N; ++i)
//     {
//         buffer[i][0] = buffer[i-1][0] + buffer[i-1][1];
//         buffer[i][1] = buffer[i-1][0]; 
//     }

//     std::cout << buffer[N][0] + buffer[N][1] << "\n";
    
//     return 0;
// }