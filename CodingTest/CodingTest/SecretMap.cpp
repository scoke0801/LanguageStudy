#include <string>
#include <vector>
#include <iostream>
using namespace std; 

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;

    for (int i = 0; i < n; ++i) {
        int num = arr1[i];

        bool path[16] = { false };
        int idx = 0;

        while (num > 0) {
            int cur = num % 2;
            num /= 2;
            cout << cur << "\n";
            path[idx++] = cur;
        }

        num = arr2[i]; 
        idx = 0;

        while (num > 0) {
            int cur = num % 2;
            num /= 2;
            cout << cur << "\n";
            if (cur) {
                path[idx] = cur;
            }
            ++idx;
        }

        string path_s = "";
        for (int i = n - 1; i >= 0; --i) {
            if (path[i]) {
                path_s += '#';
            }
            else {
                path_s += ' ';
            }
        }
        answer.push_back(path_s);
        cout << "\n";
    }
    return answer;
}

int main()
{
    auto aa = solution(5, { 9, 20, 28, 18, 11 }, { 30, 1, 21, 17, 28 });
    int st = 3;
}