#include <string>
#include <vector>
#include <cmath>
using namespace std;

string solution(int num) { 
    string buf[2] = { "Even", "Odd" };

    return buf[abs(num % 2)];
}