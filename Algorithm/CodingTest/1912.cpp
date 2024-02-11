// #include <iostream>
// #include <vector>

// using namespace std;

// constexpr int MAX_NUM = 100000;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int N;
//     cin >> N;
    
//     int nums[MAX_NUM+1] = {0,};
//     int buffer[MAX_NUM+1] = {0,};

//     for(int i =1; i <= N; ++i)
//     {
//         cin>>nums[i];
//     }

//     int ans = nums[1];
//     buffer[1] = nums[1];
//     for(int i = 2; i <= N; ++i)
//     {
//         buffer[i] = std::max(buffer[i-1] + nums[i], nums[i]);
//         ans = std::max(buffer[i], ans);
//     }
//     std::cout << ans << "\n";
//     return 0;
// }