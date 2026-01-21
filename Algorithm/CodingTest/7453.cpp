#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    vector<long> A(N), B(N), C(N), D(N);
    for (int i = 0; i < N; ++i)
    {
        cin >> A[i] >> B[i] >> C[i] >> D[i];
    }

    vector<long long> AB;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            AB.push_back(A[i] + B[j]);
        }
    }

    sort(AB.begin(), AB.end());

    // C+D의 각 조합에 대해 -(C+D)가 AB에 몇 개 있는지 확인
    long long answer = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            long long target = -(C[i] + D[j]);
            
            // target과 같은 값의 개수를 이분 탐색으로 찾기
            auto lower = lower_bound(AB.begin(), AB.end(), target);
            auto upper = upper_bound(AB.begin(), AB.end(), target);
            
            answer += (upper - lower);
        }
    }
    
    cout << answer << '\n';
}