#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<long long> solution(int x, int n) {
    vector<long long> answer;

    for (int i = 0; i < n; ++i) {
        answer.push_back(x + i * x);
    }

    for (auto n : answer) {
        cout << n << " ";
    }
    cout << "\n";
    return answer;
}

int main() {
    solution( 2, 5);
    solution( 4, 3);
    solution(-4, 2);

    return 0;
}