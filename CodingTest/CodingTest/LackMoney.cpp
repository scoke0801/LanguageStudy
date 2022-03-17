#include <iostream>
using namespace std;

long long solution(int price, int money, int count)
{
    int idx = 1;
    long long sum = 0;
    while (count > 0) {
        sum += (long long)price * idx++;
        --count;
    }

    if (sum - money <= 0) {
        return 0;
    }
    return sum - money;
}

int main() {
    cout << solution(3, 20, 4) << "\n";
    return 0;
}