#include <string>
#include <vector>
#include <iostream>

using namespace std;

string makeOdd(string s)
{
    string answer = "";
    
    for (unsigned int i = 0; i < s.size(); ++i) 
    {
        // Â¦¼öÀÎ °æ¿ì
        if (i == 0 || i % 2 == 0)
        {
            answer += toupper(s[i]);
        }
        else {
            answer += tolower(s[i]);
        }
    }
    return answer;
}
string solution(string s) {
    string answer = "";

    unsigned int previous = 0, current = 0;

    for (unsigned int i = 0; i < s.length(); ++i)
    { 
        if (s[i] == ' ')
        {
            string subStr = s.substr(previous, i - previous);
            answer += makeOdd(subStr) + " ";
            previous = i + 1;

            cout << subStr << " ";
        }
    } 
    string subStr = s.substr(previous, s.length() - previous);
    answer += makeOdd(subStr);
    cout << subStr << " ";


    return answer;
}

int main()
{
    cout << solution("try hello world") << "\n";
    return 0;
}
