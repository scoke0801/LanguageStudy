// #include <iostream>
// #include <unordered_map>
// using namespace std;

// constexpr int MAX_CASE = 1000;
// int T, N, M;

// int A[MAX_CASE];
// int B[MAX_CASE];

// int sumA, sumB;
// std::unordered_map<long long, long long> buffer;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);

//     cin >> T >> N;
//     for(int i = 0; i < N; ++i)
//     {
//         cin >> A[i];
//         sumA += A[i];
//     }

//     cin >> M;
//     for(int i = 0; i < M; ++i)
//     {
//         cin >> B[i];
//         sumB += B[i];
//     }

//     for(int i = 0; i < N; ++i)
//     {
//         long long temp = 0;
//         for(int j = i; j < N; ++j)
//         {
//             temp += A[j];
//             buffer[temp]++;
//         }
//     }

//     long long ans = 0;
//     for(int i = 0; i < M; ++i)
//     {
//         long long temp = T;
//         for(int j = i; j < M; ++j)
//         {
//             temp -= B[j];
//             if(buffer.find(temp) == buffer.end()){continue;}

//             ans += buffer[temp];
//         }
//     }

//     std::cout << ans << "\n";
// }