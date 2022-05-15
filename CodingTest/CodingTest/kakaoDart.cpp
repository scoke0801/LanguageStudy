#include <string>
#include <cmath>
#include <iostream>
using namespace std;

int solution(string dartResult) {
    int answer = 0;

    int cur = 0;
    int prev = 0; 
    for (unsigned int i = 0; i < dartResult.length();) {
        if (dartResult[i] >= '0' && dartResult[i] <= '9') {
            prev = cur;
            // 점수
            if (dartResult[i] == '1' && dartResult[i + 1] == '0') {
                cur = 10;
                ++i;
            }
            else {
                cur = dartResult[i] - '0';
            }
        } 

        // 보너스
        if (dartResult[i + 1] == 'D') {
            cur = pow(cur, 2);
        }
        else if (dartResult[i + 1] == 'T') {
            cur = pow(cur, 3);
        }
        
        // 옵션
        if (i + 2 < dartResult.length()) {
            if (dartResult[i + 2] == '*') {
                answer -= prev;
                cur *= 2;
                prev *= 2;
                answer += prev;
                i += 3;
            }
            else if (dartResult[i + 2] == '#') {
                cur *= -1;
                i += 3;
            }
            else {
                i += 2; 
            }
        }
        else {
            i += 2;
        }
        cout << "cur : " << cur << "\n";
        answer += cur;
    }
    return answer;

}

int main()
{ 
    //cout << solution("1S2D*3T") << "\n";
    cout << solution("1D2S#10S") << "\n";
    //cout << solution("1D2S0T") << "\n";
    //cout << solution("1S*2T*3S") << "\n";
    //cout << solution("1D#2S*3S") << "\n";
}