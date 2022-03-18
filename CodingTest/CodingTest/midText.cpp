#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(string s) {
    string answer = "";

    int mid = s.length() / 2;
    answer = s[mid];
    if (mid * 2 == s.size()) {
        answer = s.substr(mid - 1, 2);
    }
    return answer;
}

int main() {
    cout << solution("abcde") << "\n";
    cout << solution("qwer") << "\n";
    return 0;
}