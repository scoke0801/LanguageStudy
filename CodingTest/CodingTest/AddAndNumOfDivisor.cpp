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
            // ����� ������ ¦���� ���
            answer += i;
        }
        else {
            // ����� ������ Ȧ���� ���
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