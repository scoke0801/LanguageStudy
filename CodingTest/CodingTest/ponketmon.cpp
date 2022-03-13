#include <vector>
#include <set>
using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    set<int> buffer(nums.begin(), nums.end());

    if (buffer.size() > (nums.size() / 2)) {
        answer = nums.size() / 2;
    }
    else {
        answer = buffer.size();
    }
    return answer;
}
#include <iostream>
int main() {
    cout << solution({ 3, 3, 3, 2, 2, 4 }) << "\n";

    return 0;
}