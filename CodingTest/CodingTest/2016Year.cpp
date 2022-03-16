#include <string>
#include <vector>
#include <iostream>
using namespace std;

int MONTH[12] = {
    31, 29, 31, 30, 31,
    30, 31, 31, 30, 31,
    30, 31
};
string DAY[7] = {
    "FRI",
    "SAT",
    "SUN",
    "MON",
    "TUE",
    "WED",
    "THU"
};

string solution(int a, int b) {
    string answer = "";
    
    int dayGap = b - 1;
    int monthGap = a - 1;
    for (int i = 0; i < monthGap; ++i) { 
        dayGap += MONTH[i];
    }
    dayGap %= 7;
    return DAY[dayGap];
}

int main() {
    cout << solution(1, 1) << "\n";
    cout << solution(5, 24) << "\n";
}