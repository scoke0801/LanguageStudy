#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    bool checked[10] = { 0, };
    for (size_t i = 0; i < numbers.size(); ++i) {
        if (false == checked[numbers[i]]) {
            checked[numbers[i]] = true;
        }
    }

    for (size_t i = 1; i < 10; ++i) {
        if (false == checked[i]) {
            answer += i;
        }
    }
    return answer;
}

#include <iostream>
int main() {
    cout << solution({1, 2, 3, 4, 6, 7, 8, 0}) << "\n";
}