// #include <iostream>
// #include <deque>
// using namespace  std;

// constexpr int MAX_CASE = 100;
// struct State
// {
//     bool robot = false;
//     int dur = 0;
//     State(){}
//     State(bool robot, int dur) :robot(robot), dur(dur){}
// };

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int N, K;
//     cin >> N >> K;
 
//     std::deque<State> belt;
 
//     int emptyBelt = 0;
//     for(int i = 0; i < 2* N; ++i)
//     {
//         int num;
//         cin >> num;
//         belt.push_back(State(false, num));
         
//         if(num == 0){
//             ++emptyBelt;
//         }
//     }

//     int ans = 0;

//     do
//     {
//         ++ans;

//         // 회전
//         auto temp = belt.back();
//         belt.pop_back();
//         belt.push_front(temp);

//         if(belt[N-1].robot){
//             belt[N-1].robot = false;
//         }

//         static int first = 0;
//         for(int i = N * 2 - 1; i>= 0; --i){
//             if(belt[i].robot == false){continue;}

//             int next = (i + 1) % (N* 2);

//             if(belt[next].dur > 0 && belt[next].robot == false )
//             {
//                 belt[next].dur--;
//                 belt[i].robot =false;
//                 belt[next].robot = true;
//                 if(belt[next].dur == 0){ 
//                     ++emptyBelt;
//                 }

//                 if(next == N-1)
//                 {
//                     belt[next].robot = false;
//                 }
//             }
//         }

//         if(belt.front().dur > 0 && belt.front().robot == false)
//         {
//             belt.front().dur--;
//             belt.front().robot = true;

//             if(belt.front().dur == 0){
//                 ++emptyBelt;
//             }
//         }

//         if(emptyBelt >= K){break;}
//     } while (true); 
    
//     std::cout << ans << "\n";
// }