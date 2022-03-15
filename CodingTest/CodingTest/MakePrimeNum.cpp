#include <vector>
#include <iostream>
using namespace std;

constexpr int PRIME = 1;
constexpr int NOT_PRIME = 2;

short checked[3001] = { NOT_PRIME, NOT_PRIME, };
bool isPrimeNum(int num) {
    if (PRIME == checked[num]) {
        return true;
    }
    else if (NOT_PRIME == checked[num]) {
        return false;
    }

    for (int i = 2; i < num; ++i) {
        if (num % i == 0) {
            checked[num] = NOT_PRIME;
            return false;
        }
    }

    checked[num] = PRIME;
    return true;
}
int solution(vector<int> nums) {
    int answer = 0; 
    vector<int> buffer;

    for (size_t i = 0; i < nums.size() - 2; ++i) {
        for (size_t j = i + 1; j < nums.size() - 1; ++j) { 
            for (size_t k =j + 1; k < nums.size(); ++k) { 
                if (isPrimeNum(nums[i] + nums[j] + nums[k])) {
                    ++answer;
                }
            }
        }
    }
    
    return answer;
}

int main() {
    cout << solution({ 1,2,3,4 })   << "\n";
    cout << solution({ 1,2,7,6,4 }) << "\n";
    return 0;
}