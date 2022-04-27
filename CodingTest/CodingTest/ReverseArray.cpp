#include <string>
#include <vector>

using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;

    while (n > 0)
    {
        int cur = n % 10;
        n /= 10;
         
        answer.push_back( cur );
    }

    return answer;
}

#include <iostream>

int main()
{
    vector<int> result = solution( 12345 );

    for (auto n : result)
    {
        cout << n << " ";
    }
    cout << "\n";
}
