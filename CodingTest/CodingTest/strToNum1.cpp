#include <string>
#include <vector>

using namespace std;

int solution(string s) { 
    return stoi(s);
}     

#include <iostream>
int main()
{
    cout << solution("1234") << "\n";
    cout << solution("-1234") << "\n";
    cout << solution("+1234") << "\n";
}
