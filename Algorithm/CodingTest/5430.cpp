// #include <iostream>
// #include <string>
// #include <deque>
// #include <algorithm>
// using namespace std;
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     int T;
//     cin >> T;

//     int n;
//     std::string str, subStr;
//     std::deque<int> nums;
//     for(int i = 0; i < T; ++i)
//     {
//         cin >> str;
//         cin >> n;
//         cin >> subStr;
 
//         nums.clear();
//         int pos = 1;
//         int left = 1;
//         int count = 0;
//         while( count < n && pos < subStr.length() )
//         {
//             if(subStr[pos] == ',' || subStr[pos] == ']')
//             {
//                 //std::cout<< "Count: " << count << " " << subStr.substr(left, pos- left) << "\n";
//                 int num = std::stoi(subStr.substr(left, pos - left));
//                 nums.push_back(num);

//                 ++count;

//                 left = pos + 1;
//             }
//             ++pos;
//         } 
//         int opCount = str.size();
//         count = 0;

//         bool errorFlag = false; 
//         bool reverseFlag = false;
//         while(count < opCount)
//         {
//             char op = str[count];

//             if(op == 'R')
//             { 
//                 reverseFlag = 1 - reverseFlag;
//             }
//             else if(op == 'D')
//             { 
//                 if(nums.empty()){
//                     errorFlag = true;
//                     break;
//                 }

//                 if(reverseFlag){
//                     nums.pop_back();
//                 }
//                 else{
//                     nums.pop_front();
//                 }
//             }
//             ++count;
//         }
//         if(errorFlag)
//         {
//             std::cout << "error\n";
//         }
//         else
//         {
//             if(reverseFlag)
//             {
//                 std::reverse(nums.begin(), nums.end());
//             }
//             std::cout << "[";
//             for(int j = 0; j < nums.size(); ++j)
//             {
//                 std::cout << nums[j];
//                 if(j != nums.size() -1){
//                     std::cout << ",";
//                 }
//             }
//             std::cout << "]\n";
//         }
//     }
// }