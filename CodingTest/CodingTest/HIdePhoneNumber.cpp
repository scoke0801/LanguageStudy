#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(string phone_number) {
    string answer = "";
    
    for (size_t i = 0; i < phone_number.length() -4 ; ++i) {
        answer += "*";
    }
    answer += phone_number.substr(phone_number.length() - 4, 4);
    return answer;
}

int main() {
    cout << solution("01033334444") << "\n";
    cout << solution("027778888") << "\n";
}