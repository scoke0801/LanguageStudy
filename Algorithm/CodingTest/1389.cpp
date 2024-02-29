//#include <iostream>
//#include <string.h>
//using namespace std;
//
//int buffer[101][101];
//
//int DEFAULT = 10000000;
//int main()
//{
//	int N, M;
//	cin >> N >> M;
//
//	for (int i = 0; i < M; ++i)
//	{
//		int from, to;
//		cin >> from >> to;
//		buffer[from][to] = 1;
//		buffer[to][from] = 1;
//	}
//
//    for (int i = 1; i <= N; i++) 
//    {
//        for (int j = 1; j <= N; j++) 
//        {
//            if (i != j && buffer[i][j] != 1) 
//            {
//                buffer[i][j] = DEFAULT;
//            }
//        }
//    }
//
//    for (int i = 1; i <= N; i++) 
//    {
//        for (int j = 1; j <= N; j++) 
//        {
//            for (int k = 1; k <= N; k++) 
//            {
//                if (buffer[j][i] + buffer[i][k] < buffer[j][k]) 
//                {
//                    buffer[j][k] = buffer[j][i] + buffer[i][k];
//                }
//
//            }
//        }
//    }
//
//    int val = DEFAULT;
//    int res = 0;
//    for (int i = 1; i <= N; i++)
//    {
//        int temp = 0;
//        for (int j = 1; j <= N; j++) 
//        {
//            temp += buffer[i][j];
//        }
//        if (temp < val) 
//        {
//            val = temp;
//            res = i;
//        }
//    }
//
//    cout << res;
//
//    return 0;
//}