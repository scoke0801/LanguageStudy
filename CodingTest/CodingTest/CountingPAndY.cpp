#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;

    int numP = 0;
    int numY = 0;
    // [����] ��ư�� ������ ��� ���� �� �� �ֽ��ϴ�.
    cout << "Hello Cpp" << endl;
    for (size_t i = 0; i < s.length(); ++i)
    {
        if (s[i] == 'p' || s[i] == 'P') {
            ++numP;
        }
        if (s[i] == 'y' || s[i] == 'Y') {
            ++numY;
        }
    }

    return numP == numY;
}