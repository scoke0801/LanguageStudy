#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;

    for (auto n : arr) {
        if (n % divisor == 0) {
            answer.push_back(n);
        }
    }

    if (true == answer.empty()) {
        answer.push_back(-1);
    }
    else {
        sort(answer.begin(), answer.end());
    }

    for (auto n : answer) {
        cout << n << " ";
    }
    cout << "\n";
    return answer;
}

int main() {
    solution({ 5,9,7,10 }, 5);
    solution({ 2, 36, 1, 3 }, 1);
    solution({ 3,2,6 }, 10);
}