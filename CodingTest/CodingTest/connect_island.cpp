#include <string>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

// 최소신장트리 구하는 문제 / 크루스칼 알고리즘으로 해결하는 문제
int cycles[101]; 

int get_parent(int x) {
    if (cycles[x] == x) return x;
    return get_parent(cycles[x]);
}
void union_parent(int a, int b) {
    a = get_parent(a);
    b = get_parent(b);
    if (a < b) {
        cycles[b] = a;
    }
    else {
        cycles[a] = b;
    }
}
bool is_cycle(int a, int b) {
    a = get_parent(a);
    b = get_parent(b);
    if (a == b) { return true; }
    return false;
}
int solution(int n, vector<vector<int>> costs) {
    int answer = 0;
   
    // 비용 기준으로 정렬
    sort(costs.begin(), costs.end(), [](const vector<int>& a, const vector<int>& b) {
        return a[2] < b[2];
        });
    // 싸이클 초기화
    for (int i = 0; i <= 100; ++i) {
        cycles[i] = i;
    }

    for (int i = 0; i < costs.size(); ++i) {
        // 다른 사이클에 있는 경우에만 연결 
        int pa = get_parent(costs[i][0]);
        int pb = get_parent(costs[i][1]);

        if (pa != pb) {
            answer += costs[i][2];
            if (pa > pb) {
                cycles[pa] = pb;
            }
            else {
                cycles[pb] = pa;
            }
        }

        /*if (false == is_cycle(costs[i][0], costs[i][1])) {
            answer += costs[i][2];
            union_parent(costs[i][0], costs[i][1]);
        }*/
    }

    return answer;
}

int main() {
    solution(4, { {0,1,1} ,{0,2,2},{1,2,5},{1,3,1},{2,3,8} });
    return 0;
}