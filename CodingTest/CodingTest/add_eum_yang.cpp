#include <string>
#include <vector>

using namespace std;

int solution(vector<int> absolutes, vector<bool> signs) {
    int answer = 0;

    for (size_t i = 0; i < absolutes.size(); ++i) {
        if (signs[i]) {
            answer += absolutes[i];
        }
        else {
            answer -= absolutes[i];
        }
    }
    return answer;
}

#include <iostream>
int main() {
    cout << solution({ 4,7,12 }, { true,false, true }) << "\n";
}