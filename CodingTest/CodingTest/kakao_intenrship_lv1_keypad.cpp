/*
스마트폰 전화 키패드의 각 칸에 다음과 같이 숫자들이 적혀 있습니다.
123
456
789
*0#
이 전화 키패드에서 왼손과 오른손의 엄지손가락만을 이용해서 숫자만을 입력하려고 합니다.
맨 처음 왼손 엄지손가락은 * 키패드에 
오른손 엄지손가락은 # 키패드 위치에서 시작하며 
엄지손가락을 사용하는 규칙은 다음과 같습니다.

엄지손가락은 상하좌우 4가지 방향으로만 이동할 수 있으며 키패드 이동 한 칸은 거리로 1에 해당합니다.

왼쪽 열의 3개의 숫자 1, 4, 7을 입력할 때는 왼손 엄지손가락을 사용합니다.
오른쪽 열의 3개의 숫자 3, 6, 9를 입력할 때는 오른손 엄지손가락을 사용합니다.
가운데 열의 4개의 숫자 2, 5, 8, 0을 입력할 때는 
두 엄지손가락의 현재 키패드의 위치에서 더 가까운 엄지손가락을 사용합니다.
----만약 두 엄지손가락의 거리가 같다면, 오른손잡이는 오른손 엄지손가락, 왼손잡이는 왼손 엄지손가락을 사용합니다.

순서대로 누를 번호가 담긴 배열 numbers,
왼손잡이인지 오른손잡이인 지를 나타내는 문자열 hand가 매개변수로 주어질 때, 
각 번호를 누른 엄지손가락이 왼손인 지 오른손인 지를 나타내는 연속된 문자열 형태로 return 하도록 solution 함수를 완성해주세요.
*/

#include <string>
#include <vector>

using namespace std;

string solution(vector<int> numbers, string hand) {
    string answer = "";
    // 각 손가락의 위치는 각 행의 마지막에서 시작
    // 왼손잡이 : Lefthander
    // 오른손잡이 : right handed
    bool isLeftHander = hand == "left";
    int left = 3, right = 3;
    bool onCenterL = false, onCenterR = false;

    for (uint16_t i = 0; i < numbers.size(); ++i) {
        if (numbers[i] == 1 || numbers[i] == 4 || numbers[i] == 7) {
            // 왼쪽 손가락으로 선택이 되는 경우
            answer += "L";
            left = numbers[i] / 3;
            onCenterL = false;
        }
        else if (numbers[i] == 3 || numbers[i] == 6 || numbers[i] == 9) {
            // 오른쪽 손가락으로 선택이 되는 경우
            answer += "R";
            right = numbers[i] / 3 - 1;
            onCenterR = false;
        }
        else {
            // 중간지점에 대해서...
            // 0인 경우 /3~~~~
            int cur = numbers[i] / 3;
            if (numbers[i] == 0) {
                cur = 3;
            }
            
            int dist[2];
            dist[0] = (onCenterL) ? abs(cur - left) : (abs(cur - left) + 1);
            dist[1] = (onCenterR) ? abs(cur - right) : (abs(cur - right) + 1);
            

            if (dist[0] < dist[1]) {
                left = cur;
                answer += "L";
                onCenterL = true;
            }
            else if (dist[0] > dist[1]) {
                right = cur;
                answer += "R";
                onCenterR = true;
            }
            else {
                if (isLeftHander) {
                    left = cur;
                    answer += "L";
                    onCenterL = true;
                }
                else {
                    right = cur;
                    answer += "R";
                    onCenterR = true;
                }
            }
        }
    }

    return answer;
}

#include<iostream>
int main() {  
    // "LRLLLRLLRRL"
    //  LRLLLRLLRRL
    cout << solution({ 1, 3, 4, 5, 8, 2, 1, 4, 5, 9, 5 }, "right") << "\n";

    // "LRLLRRLLLRR"
    //  LRLLRRLLLRR
    cout << solution({ 7, 0, 8, 2, 8, 3, 1, 5, 7, 6, 2 }, "left") << "\n";

    // "LLRLLRLLRL"
    // "LLRLLRLLRL"
    cout << solution({ 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 }, "right") << "\n";
    return 0;
}