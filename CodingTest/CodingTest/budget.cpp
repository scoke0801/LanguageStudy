#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> d, int budget) {
    int answer = 0;
    sort(d.begin(), d.end());

    int cur = 0;
    int idx = 0;
    while (idx < d.size()) {
        cur = d[idx++];
        budget -= cur;
        if (budget < 0) {
            break;
        }
        ++answer;
    }
    return answer;
}

#include <iostream>
int main() {
    cout << solution({ 1,3,2,5,4 }, 9) << "\n";
    cout << solution({ 2,2,3,3 }, 10) << "\n";
    return 0;
}