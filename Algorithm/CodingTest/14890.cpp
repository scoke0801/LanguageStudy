// #include <iostream>
// #include <vector>
// #include <cstring>
// #include <cmath>
// using namespace std;
 
// int map[100][100];
// vector<int> board[200];
 
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int ans = 0;
//     int N, L;
//     cin >> N >> L;
    
//     for(int i = 0; i<N; i++){
//         for(int j = 0; j<N; j++){
//             cin>>map[i][j];
//         }
//     }
  
//     for(int row=0; row<N; row++){
//         for(int col = 0; col<N; col++){
//             board[row].push_back(map[row][col]);
//         }
//     }
//     for(int col=0; col<N; col++){
//         for(int row=0; row<N; row++){
//             board[col+N].push_back(map[row][col]);
//         }
//     }
    
 
//     for(int i = 0; i<2*N; i++)
//     {
//         bool stop = false;
//         int cur = 1;
//         for(int j = 0; j<board[i].size()-1; j++){
            
//             if(board[i][j] == board[i][j+1]){
//                 cur++;
//                 continue;
//             }
            
//             else if(board[i][j] == board[i][j+1] + 1 )
//             {
//                 int cnt = 1;
//                 bool check=true;
//                 for(int k=1; k<L; k++){
//                     if(board[i][j+k] == board[i][j+k+1]){
//                         cnt++;
//                     }
//                     else{		
//                         check = false;    
//                         break;
//                     }
 
//                 }
//                 if(check == false){     
//                     stop = true;		
//                     break;
//                 }
//                 else{
//                     if(cnt==L){			
//                         j += cnt-1;
//                         cur = 0;
//                     }
//                 }
//             }
    
//             else if(board[i][j] + 1 == board[i][j+1])
//             {  
//                 if(cur>=L) 
//                 {	
//                     cur = 1;
//                     continue;
//                 }
//                 else
//                 {
//                     stop = true;
//                     break;
//                 }
 
//             }
//             else if (std::abs(board[i][j] - board[i][j+1]) >= 2)
//             {  
//                 stop = true;
//                 break;
//             }
//         }
        
//         if(!stop){
//             ans++;
//         }
//     }
    
//     cout << ans;
    
//     return 0;
// }