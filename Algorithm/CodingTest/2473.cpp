// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <cmath>
//
// using namespace std;
//
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//
//     int N;
//     cin >> N;
//
//     vector<long long> v(N);
//
//     for (int i = 0; i < N; ++i)
//     {
//         cin >> v[i];
//     }
//
//     sort(v.begin(), v.end());
//
//     long long minValue = 5000000000;
//     vector<long long> answer(3);
//
//     for (int i = 0; i < N; ++i)
//     {
//         int left = i + 1;
//         int right = N - 1;
//
//         while (left < right)
//         {
//             long long sum = v[i] + v[left] + v[right];
//
//             if (abs(sum) < abs(minValue))
//             {
//                 minValue = sum;
//                 answer[0] = v[i];
//                 answer[1] = v[left];
//                 answer[2] = v[right];
//             }
//
//             if (sum == 0)
//                 break;
//
//             if (sum > 0)
//                 right--;
//             else if (sum < 0)
//                 left++;
//         }
//     }
//
//     cout << answer[0] << " " << answer[1] << " " << answer[2] << "\n";
// }