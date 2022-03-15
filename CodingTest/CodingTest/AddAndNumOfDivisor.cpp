#include <string>
#include <vector>

using namespace std;

int getNumOfDivisor(int num) {
    int count = 0;
    for (int i = 1; i <= num; ++i) {
        if (num % i == 0) {
            ++count;
        }
    }
    return count;
}
int solution(int left, int right) {
    int answer = 0;

    for (int i = left; i <= right; ++i) {
        if (getNumOfDivisor(i) % 2 == 0) {
            // 약수의 개수가 짝수인 경우
            answer += i;
        }
        else {
            // 약수의 개수가 홀수인 경우
            answer -= i;
        }
    }
    return answer;
}

#include <iostream>
int main() {
    cout << solution(13, 17) << "\n";
    cout << solution(24, 27) << "\n";
}