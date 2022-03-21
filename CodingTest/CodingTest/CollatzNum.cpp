#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(int num) {
    int answer = 0; 
    long long l = num;
    while (l != 1) {
        if (l % 2 == 0) {
            l /= 2;
        }
        else {
            l = l * 3 + 1;
        }
        ++answer;
        if (answer > 500) {
            answer = -1;
            break;
        }
    }
    return answer;
}

int main() {
    cout << solution(6) << "\n";
    cout << solution(16) << "\n";
    cout << solution(626331) << "\n";
}