#include <string>
#include <vector>
#include <map>
#include <iostream>
#include <algorithm>
using namespace std;

constexpr int MAX_STAGE = 200000;

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    map<int, int> buffer;
    vector<pair<float, int>> temp;

    sort(stages.begin(), stages.end());

    for (size_t i = 0; i < stages.size(); ++i) {
        auto res = buffer.find(stages[i]);
        if (res == buffer.end()) {
            buffer.insert({ stages[i],0 });
        }
        buffer[stages[i]] += 1;
    }

    int max = stages.back();
    int challenger = stages.size();

    for (size_t i = 1; i <= N; ++i) {
        auto res = buffer.find(i);
        int cur = 0;
        if (res != buffer.end()) {
            cur = res->second;
        }
        float failureRate = (float)cur / challenger;
        cout << "FR: " << failureRate << "     i : " << i << " cur : " << cur << " ch : " << challenger << "\n";
        temp.push_back({ failureRate, i });
        challenger -= cur;
    }

    cout << "\n";

    sort(temp.begin(), temp.end(), [](pair<float, int> a, pair<float, int> b) {
        if (a.first == b.first) {
            return a.first < b.first;
        }
        return a.first > b.first;
        }); 

    for (auto pr : temp) {
        answer.push_back(pr.second);
    }
    return answer;
}

int main() {
    solution(5, { 2, 1, 2, 6, 2, 4, 3, 3 });
    solution(4, { 4,4,4,4,4 });
}