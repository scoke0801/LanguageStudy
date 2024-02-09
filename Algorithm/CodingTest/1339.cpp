// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <cmath>

// using namespace std;

// std::vector<char> chars;
// int N;
// std::vector<std::string> inputs;
// std::vector<int> alpha;
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cout.tie();

//     alpha.resize(26);

//     int N;
//     cin >> N;

//     chars.resize(10);

//     inputs.resize(N);
//     for(int i =0;i < N;++i)
//     {
//         cin >> inputs[i];
//     }

//     for(int i =0;i < N;++i)
//     {
//         for(int j = 0; j < 10; ++j)
//         {
//             if(inputs[i].size() <= j){continue;}
            
//             int idx = inputs[i][j] - 'A';
//             alpha[idx] += std::pow(10, inputs[i].size() - j - 1);
//         } 
//     }

//     int sum =0;
//     int cur =9;
//     std::sort(alpha.begin(), alpha.end(), std::greater<int>());
//     for(int i = 0; i < 26; ++i)
//     {
//         if(alpha[i] == 0){continue;}

//         sum += (alpha[i] * cur);
//         cur--;    
//     }

//     std::cout << sum << "\n";
// }