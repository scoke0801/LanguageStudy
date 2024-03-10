// #include <iostream>
// using namespace std;

// short LCS[1001][1001];
// std::string A;
// std::string B;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cout.tie(nullptr);

//     cin >> A >> B;

//     short i, j;
//     i = 1;
//     while(i <= A.length())
//     {
//         j = 1;
//         while(j <= B.length())
//         {
//             if(B[j-1] == A[i-1])
//             {
//                 LCS[i][j] = LCS[i-1][j-1] +1;
//             }
//             else
//             {
//                 LCS[i][j] = std::max(LCS[i-1][j], LCS[i][j-1]);
//             }
//             ++j;
//         }

//         ++i;
//     }

//     std::cout << LCS[i-1][j-1];
//     return 0;
// }