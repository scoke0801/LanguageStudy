// #include <iostream>
// #include <string>
// #include <queue>
// using namespace std;

// int D(int num)
// {
//     return (num*2) % 10000;
// }

// int S(int num)
// {
//     if(num == 0)
//     {
//         return 9999;
//     }

//     return num - 1;
// }

// int L(int num)
// {    
//     return (num * 10) % 10000 + num / 1000;
// }

// int R(int num)
// {
//     return num / 10 + (num % 10) * 1000;
// }

// using Func = int(*)(int);

// char funcNames[4] = {'D', 'S', 'L', 'R'};
// Func funcs[4] = {D, S,L,R};

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cout.tie(nullptr);

//     int T;
//     cin >> T;

//     for(int t = 0; t < T; ++t)
//     {
//         int a, b;
//         cin >> a >> b;

//         bool visited[10001] = {0,};
//         std::queue<std::pair<std::string, int>> buffer;

//         buffer.push(std::make_pair("", a));

//         std::string ans = "";
//         while(buffer.empty() == false)
//         {
//             std::string level = buffer.front().first;
//             int cur = buffer.front().second;
//             buffer.pop();

//             if(cur == b)
//             {
//                 ans = level;
//                 break;
//             }

//             for(int i = 0; i < 4; ++i)
//             { 
//                 int num = funcs[i](cur);
            
//                 if(visited[num]){continue;}
//                 visited[num] = true;
                
//                 buffer.push(std::make_pair(level + funcNames[i], num));
//             } 
//         }
//         std::cout << ans << "\n";
//     }
// }
