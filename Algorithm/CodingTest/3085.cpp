//#include <iostream>
//#include <cmath>
//#include <algorithm>
//using namespace std;
//
//string candies[50];
//
//int length(int N)
//{
//    int result = 1;
//
//    //양 옆
//    for (int i = 0; i < N; i++)
//    {
//        int temp = 1;
//
//        for (int j = 1; j < N; j++) {
//
//            if (candies[i][j - 1] == candies[i][j]) {
//                temp++;
//            }
//            else
//            {
//                result = max(result, temp);
//                temp = 1;
//            }
//            result = max(result, temp);
//        }
//
//        //위 아래
//        for (int i = 0; i < N; i++)
//        {
//            int temp = 1;
//            for (int j = 0; j < N - 1; j++) {
//                if (candies[j + 1][i] == candies[j][i]) {
//                    temp++;
//                }
//                else
//                {
//                    result = max(result, temp);
//                    temp = 1;
//                }
//
//                result = max(result, temp);
//            }
//        }
//    }
//
//    return result;
//}
//
//int main(void)
//{
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    int N;
//    cin >> N;
//    
//    for (int i = 0; i < N; i++) {
//        cin >> candies[i];
//    }
//
//    int result = 0;
//    for (int i = 0; i < N; i++) {
//        for (int j = 0; j < N - 1; j++)
//        {
//            // 좌 우
//            swap(candies[i][j], candies[i][j + 1]);
//
//            result = max(result, length(N));
//
//            // 원복
//            swap(candies[i][j], candies[i][j + 1]);
//
//            //상 하
//            swap(candies[j][i], candies[j + 1][i]);
//
//            result = max(result, length(N));
//
//            // 원복
//            swap(candies[j][i], candies[j + 1][i]);
//        }
//    }
//    cout << result << "\n";
//
//    return 0;
//
//}