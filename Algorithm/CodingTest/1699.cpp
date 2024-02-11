// #include <iostream>
// #include <vector>
// #include <climits>
// using namespace std;

// constexpr int MAX_NUM = 100000;
// int main()
// {
//     int N;
//     cin >> N;

//     std::vector<int> nums;
//     nums.push_back(0);
//     for(int i = 1; ; ++i)
//     {
//         int num = i * i;
//         if(num <= N)
//         {
//             nums.push_back(num);
//         }
//         else{
//             break;
//         }
//     } 

//     int buffer[MAX_NUM + 1] = {0, };

//     buffer[1] = 1;
//     for(int i = 2; i<= N; ++i)
//     {
//         buffer[i] = buffer[i-1] + 1;
//         int minVal = INT_MAX;
//         for(int j = 1; j < nums.size(); ++j)
//         {   
//             if( i - nums[j] < 0 ){ break;} 
 
//             minVal = std::min( minVal,
//                 buffer[i-nums[j]] + 1); 
//         }
//         buffer[i] = minVal; 
//     }
    
//     std::cout << buffer[N] << "\n";
// }