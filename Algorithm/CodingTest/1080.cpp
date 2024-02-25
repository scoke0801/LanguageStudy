// #include <iostream>
// using namespace std;

// int A[50][50];
// int B[50][50];
// bool isSame[50][50];
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int N, M;
//     cin >> N >> M;

//     std::string str;
//     for(int i = 0; i < N; ++i)
//     {
//         cin >> str;
//         for(int j = 0; j < M; ++j)
//         {
//             A[i][j] = str[j] - '0';
//         }
//     }

//     for(int i = 0; i < N; ++i)
//     {
//         cin >> str;
//         for(int j = 0; j < M; ++j)
//         {
//             B[i][j] = str[j] - '0';
//             isSame[i][j] = (A[i][j] == B[i][j]);
//         }
//     }
    
//     int ans = 0;
//     for(int i = 0; i <= N-3; ++i){
//         for(int j = 0; j <= M-3; ++j){
//             if(isSame[i][j]){continue;}

//             ++ans;
//             for(int ii = i; ii < i +3; ++ii){
//                 for(int jj = j; jj < j+3; ++jj){
//                     A[ii][jj] = 1 - A[ii][jj];
//                     isSame[ii][jj] = (A[ii][jj] == B[ii][jj]);
//                 }
//             }
//         }
//     }
//     bool remain = false;
//     for(int i = 0; i < N; ++i)
//     {
//         for(int j = 0; j < M; ++j)
//         {
//             if(isSame[i][j] == false)
//             {
//                 remain = true;
//             }
//         }
//     }
 
//     if(remain){
//         std::cout << -1;
//     }
//     else{
//         std::cout << ans;
//     }
//     return 0;
// }