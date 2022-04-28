#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    
    for (unsigned int i = 0; i < s.length(); ++i)
    {
        if (s[i] == ' ') {
            answer += s[i];
            continue;
        }
        char start = (islower(s[i])) ? 'a' : 'A';

        int gap = (s[i] - start + n) % 26;
        answer += (start + gap);
    }

    return answer;
}

#include <iostream>
int main()
{ 
    cout << solution("AB", 1) << "\n";
    cout << solution("z", 1) << "\n";
    cout << solution("a B z", 4) << "\n";
}
