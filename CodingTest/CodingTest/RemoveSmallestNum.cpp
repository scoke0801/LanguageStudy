#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int min = INT_MAX;

    for (auto n : arr) {
        if (n < min) {
            min = n;
        }
    }

    for (auto n : arr) {
        if (n != min) {
            answer.push_back(n);
        }
    }
    if (true == answer.empty()) {
        answer.push_back(-1);
    }
    return answer;
}