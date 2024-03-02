// #include <iostream>
// #include <queue>
// #include <vector>
// #include <cmath>
// using namespace std;

// int N;

// struct Comper
// {
//     bool operator()(int a, int b)
//     {
//         int abs_a = std::abs(a);
//         int abs_b = std::abs(b);
//         if( abs_a == abs_b){
//             return a > b;
//         }
//         return abs_a > abs_b;
//     }
// };

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);

//     cin >> N;
    
//     std::priority_queue<int, std::vector<int>, Comper> test;

//     int op;
//     for(int i = 0; i < N; ++i)
//     {
//         cin >> op;
//         if(op == 0)
//         {
//             int cur = 0;
//             if(test.empty() == false)
//             {
//                 cur = test.top();
//                 test.pop();
//             }
//             std::cout << cur << "\n";
//         }    
//         else
//         {
//             test.push(op);
//         }
//     }    
// }