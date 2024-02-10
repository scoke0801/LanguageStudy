// #include <iostream>
// #include <vector>
// #include <climits>
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int N;
//     cin >> N;

//     std::vector<int> nums(N + 1);
//     for(int i = 1; i <= N;++i)
//     {
//         std::cin >> nums[i];
//     }

//     int buffer[1001] = {0,};

//     int ans = INT_MIN;
//     for(int i = 1; i <= N; ++i)
//     {
//         buffer[i] = 1;
//         // 구성 가능한 최대 길이 탐색.
//         int temp =0;
//         for(int j = i -1; j >= 1; --j)
//         {
//             if(nums[i] > nums[j])
//             {
//                 buffer[i] = std::max(buffer[i], buffer[j] + 1);
//             }
//         }
        
//         ans = std::max(ans, buffer[i]);
//     }

//     std::cout << ans << "\n";
//     return 0;
// }