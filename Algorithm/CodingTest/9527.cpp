#include <iostream>
#include <vector>

using namespace std;

long long F(long long N)
{
    if (N  < 0 ){return 0;}

    long long result = 0;
    long long power = 1;

    // 각 비트 위치마다 1이 등장하는 횟수를 계산
    while (power <= N)
    {
        // 주기
        long long cycle = (N+1) / (power * 2);
        result += cycle * power;

        // 나머지
        long long remainder = (N+1) % (power * 2);
        if (remainder > power)
        {
            result += remainder -power;
        }
            
        power *= 2;
    }

    return result;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long A, B;
    cin >> A >> B;
    
    // count(B) - count(A-1)로 A부터 B까지의 1의 개수 합을 구함
    long long answer = F(B) - F(A - 1);
    
    cout << answer << "\n";
}