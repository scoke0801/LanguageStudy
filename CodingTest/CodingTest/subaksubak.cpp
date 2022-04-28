#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string answer = "";
    
    while (n > 0)
    {
        if (n >= 2)
        {
            answer += "����";
            n -= 2;
        }
        else if (n >= 1) {
            answer += "��";
            --n;
        }
    }
    
    return answer;
}

#include <iostream>
int main()
{
    cout << solution(3) << "\n";
    cout << solution(4) << "\n";
}
