#include <iostream>
#include <vector>
using namespace std;

int wrap(int x, int low, int high) {
    const int n = (x - low) % (high - low);
    return (n >= 0) ? (n + low) : (n + high);
}
int main() {
    int N;
    vector<int> balloons;
    bool visited[1000] = { false, };
    vector<int> answers;
    
    N = 5;
    balloons.push_back(3);
    balloons.push_back(2);
    balloons.push_back(1);
    balloons.push_back(-3);
    balloons.push_back(-1);

    /*cin >> N;
    for (int i = 0; i < N; ++i) {
        int temp = 0;
        cin >> temp;
        balloons.emplace_back(temp);
    }*/
     
    int idx = 0;    

    for (int i = 0; i < N; ++i) { 
        int origin = idx;
        int dist = abs(balloons[idx]);

        answers.push_back(origin + 1);
        visited[origin] = true;

        while (dist > 0 && answers.size() < N) {
            if (balloons[origin] > 0) {
                idx =  wrap(idx + 1, 0, N);
            }
            else {
                idx = wrap(idx - 1, 0, N);
            }
            if (false == visited[idx]) {
                --dist;
            }
        } 
    }

    for (int i = 0; i < answers.size(); ++i) {
        cout << answers[i] << " ";
    }
    return 0;
}