#include <string>
#include <vector>
#include <algorithm>
#include <cmath> 
using namespace std;

long long solution(long long n) {
    long long answer = 0;

    vector<long long> arr;
    while (n > 0) {
        arr.push_back(n % 10);
        n /= 10;
    }
    sort(arr.begin(), arr.end(), [](long long a, long long b) { return a > b; });

    int size = arr.size() - 1;
    for (size_t i = 0; i < arr.size(); ++i) {
        answer += arr[i] * pow(10, size - i);
    }

    return answer;
}