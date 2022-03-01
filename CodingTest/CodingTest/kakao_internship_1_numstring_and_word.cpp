/*
네오와 프로도가 숫자놀이를 하고 있습니다. 
네오가 프로도에게 숫자를 건넬 때 일부 자릿수를 영단어로 바꾼 카드를 건네주면 프로도는 원래 숫자를 찾는 게임입니다.

다음은 숫자의 일부 자릿수를 영단어로 바꾸는 예시입니다.

1478 → "one4seveneight"
234567 → "23four5six7"
10203 → "1zerotwozero3"
이렇게 숫자의 일부 자릿수가 영단어로 바뀌어졌거나, 
혹은 바뀌지 않고 그대로인 문자열 s가 매개변수로 주어집니다. 

s가 의미하는 원래 숫자를 return 하도록 solution 함수를 완성해주세요.
*/

#include <string>
#include <vector>

using namespace std;

constexpr int MAX_BUF = 10;
string buf[MAX_BUF] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };

int solution(string s) { 
    string answer = "";

    for (uint16_t i = 0; i < s.length(); ++i) {
        // 숫자가 0~9의 범위인 경우
        if (s[i] >= '0' && s[i] <= '9') {
            answer += s[i];
            continue;
        }

        // 단어여서 숫자로 변경해줘야 하는 경우
        for (uint16_t j = 0; j < MAX_BUF; ++j) {
            if (s.substr(i, buf[j].length()) == buf[j]) { 
                answer += to_string(j);
                break;
            }
        }

    } 
    return stoi(answer);
}


#include<iostream> 

int main() {
    cout << solution("one4seveneight") << "\n";
    cout << solution("23four5six7") << "\n";
    cout << solution("2three45sixseven") << "\n";
    cout << solution("123") << "\n";
}