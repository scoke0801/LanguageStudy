#include <string>
#include <vector>
#include <iostream>
using namespace std;

bool solution(int x) {
    bool answer = true;

    int temp = 0;
    int xCopy = x;
    while (xCopy > 0) {
        temp += xCopy % 10;
        xCopy /= 10;
    }
    return (x % temp) == 0;
}

int main() {
    cout << boolalpha << solution(10) << "\n";
    cout << boolalpha << solution(12) << "\n";
    cout << boolalpha << solution(11) << "\n";
    cout << boolalpha << solution(13) << "\n";

    return 0;
}