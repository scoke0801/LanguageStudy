#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;
    
    const int MAX = 1000001;
    vector<int> cards(N);
    vector<bool> exists(MAX, false);
    vector<int> score(MAX, 0);
    
    for (int i = 0; i < N; i++)
    {
        cin >> cards[i];
        exists[cards[i]] = true;
    }
    
    for (int i = 1; i < MAX; i++)
    {
        if (!exists[i]) continue;
        
        for (int multiple = 2 * i; multiple < MAX; multiple += i)
        {
            if (exists[multiple])
            {
                score[i]++;
                score[multiple]--;
            }
        }
    }
    
    for (int i = 0; i < N; i++)
    {
        cout << score[cards[i]];
        if (i < N - 1) cout << " ";
    }
    cout << "\n";
    
    return 0;
}