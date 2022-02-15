#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int solution(vector<vector<int>> routes) {
    int answer = 0;
    sort(routes.begin(), routes.end());
    bool checked[10000] = { false, };
    // start ~ end 사이에 있어야지
    // end보다 작다고 무조건 존재하는 것이 아님
    for (int i = 0; i < routes.size(); ++i) {
        if (checked[i]) {
            continue;
        }
        int start = routes[i][0];
        int end = routes[i][1]; 

        for (int j = i + 1; j < routes.size(); ++j) {
            int ns = routes[j][0];
            int ne = routes[j][1];
            
            if (start <= ns && end >= ne) { 
                // 이 지점은 카메라 공유 사용가능
                start = ns;
                end = ne;
                checked[j] = true;
            }
            else if (ns >= start && end >= ns) {
                // 이 지점은 카메라 공유 사용가능
                start = ns;
                end = end;
                checked[j] = true;
            }
            else {
                //공유해서 설치 불가능
                i = j - 1;
                break;
            }
        }
        ++answer;
    }
    return answer;
}
int main() {
    // -100 100 / -50 -10 / 10 20 / 30 40 / 50 170 / 150 200
    // -50 -10 : 1
    // 10 20 : 1
    // 30 40 : 1
    // -100 100 ~ 50 170 ~ 150 200 1
    // 현재 차량 범위에서 설치했을 때, 가장 큰 포용성을 갖는 위치에 설치..
    // 현재 차량 주행 거리가 가장 큰 경우..
    // 현재 범위 통과하고, 다음 범위는 통과하지 못한다?
    // 현재 범위까지를 등록하고 
    // 현재 범위에서부터 다시 출발
    
    // 4
    cout << solution({ {-100, 100},{50, 170},{150, 200},{-50, -10},{10, 20},{30, 40} }) << "\n";

    // 2
    cout << solution({ {-20,-15}, {-14,-5}, {-18,-13},{-5,-3 } }) << "\n"; 
    
    //4
    cout << solution({ {0, 0},{0, 1},{0, 2},{1, 1},{2, 2},{3, 6} }) << "\n";
    return 0;
}