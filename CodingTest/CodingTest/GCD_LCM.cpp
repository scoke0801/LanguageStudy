#include <string>
#include <vector>
#include <cmath>

using namespace std;

int GCD(int n, int m)
{
    int answer = 1;

    for (int i = 2; i <= std::min(n, m); ++i) 
    {
        while ((n % i == 0) && (m % i == 0)) {
            n = n / i; 
            m = m / i;
            answer *= i; 
            continue;
        }
    }

    return answer;
}

int LCM(int n, int m)
{
    int gcd = GCD(n, m);
    for (int i = 2; i <= std::min(n, m); ++i)
    {
        while ((n % i == 0) && (m % i == 0)) {
            n = n / i;
            m = m / i;
            continue;
        }
    }

    // 최대공약수 * 서로소인 둘
    return gcd * n * m;
}
vector<int> solution(int n, int m) {
    vector<int> answer;

    answer.push_back(GCD(n, m)); 
    answer.push_back(LCM(n, m)); 

    return answer;
}