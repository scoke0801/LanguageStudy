// #include <iostream>
// #include <vector>
// using namespace std;

// int path[10];
// bool visited[10];
// std::vector<char> oper;
// int ans = 0;
// int K;

// std::string first;
// std::string last;
// void Dfs(int level)
// {
//     if(level == K +1)
//     {
//         std::string temp ="";
//         for(int i =0; i <= K; ++i)
//         {
//             temp += to_string(path[i]);
//         }
//         if(first.empty()){
//             first = temp;
//         }
//         last = temp;
//         return;
//     }

//     for(int i =0; i <= 9; ++i)
//     {
//         if(visited[i]){continue;}
        
//         path[level] = i;
//         if(level == 0)
//         {
//             visited[i] = true;
//             Dfs(level +1);
//             visited[i] = false;
//             continue;        
//         }

//         if(oper[level-1] == '<')
//         {
//             if(path[level -1] >= i)
//             {
//                 continue;
//             }
//         }
//         else if(oper[level-1] == '>')
//         {
//             if(path[level - 1] <= i )
//             {
//                 continue;
//             }
//         }
    
//         visited[i] = true;
//         Dfs(level + 1);
//         visited[i] = false;
//     }
// }

// int main()
// {
//     cin >> K;
//     oper.resize(K);
//     for(int i =0;i<K;++i)
//     {
//         cin >> oper[i];
//     }
//     std::fill(std::begin(path), std::end(path), -1);

//     Dfs(0);

//     std::cout << last << "\n";
//     std::cout << first << "\n";
//     return 0;
// }