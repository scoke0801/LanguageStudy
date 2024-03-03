// #include <iostream>
// #include <vector>
// #include <queue>
// #include <climits>
// #include <unordered_map>
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int T;
//     cin >> T;

//     for(int t = 0; t < T; ++t)
//     {
//         std::priority_queue<int, std::vector<int>, std::less<int>> right;
//         std::priority_queue<int, std::vector<int>, std::greater<int>> left;
//         std::unordered_map<int, int> counter;

//         int N;
//         cin >> N;
//         for(int n = 0; n < N; ++n)
//         {
//             char ch;
//             int num;
//             cin >> ch;
//             cin >> num;
 
//             if(ch == 'I')
//             {
//                 left.push(num);
//                 right.push(num);
//                 counter[num]++;
//             }
//             else if(ch == 'D')
//             {  
//                 if(num == -1)
//                 {
//                     if(left.empty()){continue;}
                    
//                     counter[left.top()]--;
//                     left.pop();
//                 }
//                 else if(num == 1 )
//                 {
//                     if(right.empty()){continue;}
                    
//                     counter[right.top()]--;
//                     right.pop();
//                 }

//                 while(left.empty() == false && counter[left.top()] == 0 )
//                 { 
//                     left.pop();
//                 }

//                 while(right.empty() == false && counter[right.top()] == 0)
//                 { 
//                     right.pop();
//                 }
//             }
//         }
        
//         if(left.empty() || right.empty()) std::cout << "EMPTY\n";
//         else
//         {
//             std::cout << right.top() << " " << left.top() << "\n";
//         }
//     }      
// }