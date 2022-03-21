#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer;

    for (size_t i = 0; i < arr1.size(); ++i) {
        answer.push_back({});
    }

    
    for (size_t i = 0; i < arr1.size(); ++i) {
        for (size_t j = 0; j < arr1[i].size(); ++j) {
            answer[i].push_back(arr1[i][j] +  arr2[i][j]);
        }
        answer.push_back({});
    }

    for (auto arr : answer) {
        for (auto n : arr) {
            cout << n << " ";
        }
        cout << "\n";
    }
    cout << "\n";
    return answer;
}

int main() {
    solution({ {1,2} ,{2,3 } }, { {3,4},{5,6} });
    solution({ {1} ,{2 } }, { {3},{4} });
    return 0;
}