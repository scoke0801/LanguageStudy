#include <string>
#include <vector>

using namespace std;
bool bIsPrime[1000001] = { false, };

void InitArray(int n)
{
    fill(bIsPrime, bIsPrime + sizeof(bIsPrime), true);

    for (int i = 2; i < n; ++i) {
        if (!bIsPrime) {
            continue;
        }
        for (int j = 2* i; j  <= n; j += i) {
            bIsPrime[j] = false;
        }
    }

}

bool IsPrime(int n)
{
    return bIsPrime[n];
}

int solution(int n) {
    int answer = 0;
    
    InitArray(n);
    for (int i = 2; i <= n; ++i) 
    {
        if (IsPrime(i)) {
            ++answer;
        }
        
    }

    return answer;
}

#include <iostream>
int main()
{  
    cout << solution(10)<< "\n";
    cout << solution(5) << "\n";
}
