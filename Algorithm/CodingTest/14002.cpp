// #include <iostream>
// #include <vector>
// #include <stack>
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cout.tie();

//     int N;
//     cin >> N;

//     short nums[1001] = {0,};
//     short buffer[1001] = {0,};

//     for(int i = 1; i <= N; ++i)
//     {
//         cin >> nums[i];
//     }

//     int last = 0;
//     short ans = -1;
//     for(int i = 1; i <= N; ++i)
//     {
//         buffer[i] = 1;
//         for(int j = i - 1; j >= 1; --j)
//         {
//             if(nums[i] > nums[j])
//             {
//                 buffer[i] = std::max(buffer[i], (short)(buffer[j] + 1));
//             }
//         }

//         if( ans < buffer[i]){
//             last = i;
//             ans = buffer[i];
//         }
//     }

//     std::cout << ans << "\n"; 

//     std::stack<short> ansStack;
//     int temp = buffer[last];
//     for(int i = last; i >= 1; --i)
//     {
//         if(buffer[i] == temp){
//             --temp;
//             ansStack.push(nums[i]);
//         }
//     }

//     while(ansStack.empty() == false)
//     {
//         std::cout << ansStack.top() << " ";
//         ansStack.pop();
//     }    
// }