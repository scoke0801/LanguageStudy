#include <string>
#include <vector>
#include <cmath>
using namespace std;

long long solution(long long n) {
    long long answer = std::sqrt(n);
    if ( answer * answer == n ) {
        return pow(answer + 1, 2);
    }
    return -1;
}