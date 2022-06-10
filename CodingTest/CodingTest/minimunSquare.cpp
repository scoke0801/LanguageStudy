#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<vector<int>> sizes)
{
    int answer = 0;

    for (int i = 0; i < sizes.size(); ++i)
    {
        int temp = sizes[i][0];
        if (sizes[i][0] < sizes[i][1])
        {
            sizes[i][0] = sizes[i][1];
            sizes[i][1] = temp;
        }
    }
    int w = 0;
    int h = 0;
    for (int i = 0; i < sizes.size(); ++i)
    {
        if (sizes[i][0] > w) {
            w = sizes[i][0];
        }
        if (sizes[i][1] > h) {
            h = sizes[i][1];
        }
    }
    return w * h;
}

int main()
{
    cout << solution({ {60, 50},{30, 70},{60, 30},{80, 40} });
}