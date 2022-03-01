/*
�׿��� ���ε��� ���ڳ��̸� �ϰ� �ֽ��ϴ�. 
�׿��� ���ε����� ���ڸ� �ǳ� �� �Ϻ� �ڸ����� ���ܾ�� �ٲ� ī�带 �ǳ��ָ� ���ε��� ���� ���ڸ� ã�� �����Դϴ�.

������ ������ �Ϻ� �ڸ����� ���ܾ�� �ٲٴ� �����Դϴ�.

1478 �� "one4seveneight"
234567 �� "23four5six7"
10203 �� "1zerotwozero3"
�̷��� ������ �Ϻ� �ڸ����� ���ܾ�� �ٲ�����ų�, 
Ȥ�� �ٲ��� �ʰ� �״���� ���ڿ� s�� �Ű������� �־����ϴ�. 

s�� �ǹ��ϴ� ���� ���ڸ� return �ϵ��� solution �Լ��� �ϼ����ּ���.
*/

#include <string>
#include <vector>

using namespace std;

constexpr int MAX_BUF = 10;
string buf[MAX_BUF] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };

int solution(string s) { 
    string answer = "";

    for (uint16_t i = 0; i < s.length(); ++i) {
        // ���ڰ� 0~9�� ������ ���
        if (s[i] >= '0' && s[i] <= '9') {
            answer += s[i];
            continue;
        }

        // �ܾ�� ���ڷ� ��������� �ϴ� ���
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