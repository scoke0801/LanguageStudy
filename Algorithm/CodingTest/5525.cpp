// #include <iostream>
// #include <string>
// using namespace std;

// int N;
// int sLength;
// std::string S;
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);

//     cin >> N >> sLength;
//     cin >> S;

//     int count = 0;

//     int nLength = (3 + 2 *(N-1));
    
//     for(int i = 0;i <= sLength - nLength; ++i)
//     {
//         if(S[i] == 'O'){continue;}

//         int temp = 0;
//         while(S[i+1] == 'O' && S[i+2] == 'I')
//         {
//             ++temp;
//             if(temp == N)
//             {
//                 --temp;
//                 ++count;
//             }
//             i +=2;
//         }
//     }

//     std::cout << count << "\n";
// }