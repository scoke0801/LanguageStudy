#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;

int solution(int n) {
    int answer = 0;

    string s = "";
    while (n > 0) {
        int cur = n % 3;
        n /= 3;
        s += to_string(cur);
    }
    cout << s << "\n";

    int length = s.length() - 1;
    for (unsigned int i = 0; i < s.length(); ++i)
    {
        char ch = s[i];
        int num = atoi(&ch);
        answer += num * pow(3, length--);
    }
    return answer;
}

int main()
{
    cout << solution(45) << "\n";
}
