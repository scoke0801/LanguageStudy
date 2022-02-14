#include <string>
#include <vector>
#include <algorithm> 
#include <iostream>
#include <queue>
using namespace std;
 
struct Job {
    int start, end;
};
int g_time;
struct Comper {
    bool operator()(const Job& a, const Job& b) { 
        // 작업까지 시간이 적게 걸리는 경우를 우선해서 처리하도록
        if (a.end == b.end) {
            return a.start < b.start;
        }
        return (a.end) > (b.end);
    }
};
int solution(vector<vector<int>> jobs) {
    int answer = 0;
    g_time = 0;
    int count = jobs.size();

    sort(jobs.begin(), jobs.end());
     
    priority_queue<Job, vector<Job>, Comper> heap;  
    int idx = 0;
    while (false == heap.empty() || idx < count) {
        if (true == heap.empty()) {
            // 작업이 끝나지 않았는데, 아무런 작업이 없는 경우 시간 증가
            g_time = jobs[idx][0];
        }
        else {
            Job cur = heap.top();
            g_time += cur.end;
            answer += g_time - cur.start;
            heap.pop();
        } 
        for (; idx < jobs.size(); ++idx) {
            if (jobs[idx][0] <= g_time) {
                heap.push({ jobs[idx][0], jobs[idx][1] });
            }
            else {
                break;
            }
        } 
    } 
    answer /= count;
    return answer;
}

int main() {
    cout << solution({ {0, 3} ,{0, 2},{0, 1}, {1,10}, {2, 20} }) << "\n";

    cout << solution({ {0, 10} }) << "\n";
    cout << solution({ {0, 9} ,{0, 4},{0, 5},{0, 7},{0, 3} }) << "\n";
   
    
    cout << solution({ {0, 10},{4, 10},{5, 11},{15, 2} }) << "\n";

    cout << solution({ {0, 5}, { 2, 10 }, { 10000, 2 } }) << "\n";

    cout << solution({ {0, 3} ,{0, 2},{0, 1} }) << "\n";

    cout<< solution({ {0, 3} ,{1, 9},{2, 6} }) <<"\n";
}