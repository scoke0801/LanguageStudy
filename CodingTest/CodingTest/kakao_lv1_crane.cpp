#include <string>
#include <vector>
#include <stack>
#include <iostream>
using namespace std;

int slot[30 * 30];
int top = 0;
int answer;

bool checkMatch() {
    bool ret = false;
    while (top - 2 >= 0) {
        int cur = slot[top - 1];
        int prev = slot[top - 2];
        if (cur == prev) {
            --top;
            ++answer;
            ret = true;
        }
        else {
            break;
        }
    }
    if (ret) {
        --top;
        ++answer;
    }
    return ret;
}
int solution(vector<vector<int>> board, vector<int> moves) {
    stack<int> buffer[30];

    for (int y = board.size() - 1; y >= 0; --y) {
        for (size_t x = 0; x < board[y].size(); ++x) {
            if (board[y][x] != 0) {
                buffer[x].push(board[y][x]);
            }
        }
    }

    for (size_t i = 0; i < moves.size(); ++i) {
        int idx = moves[i] - 1;
        if (!buffer[idx].empty()) {
            slot[top++] = buffer[idx].top();
            buffer[idx].pop();

            while (checkMatch());
        }
    }
    return answer;
}

int main() {

    cout << solution({ {0, 0, 0, 0, 0},{0, 0, 1, 0, 3},{0, 2, 5, 0, 1},{4, 2, 4, 4, 2},{3, 5, 1, 3, 1} }, {1, 5, 3, 5, 1, 2, 1, 4}) << "\n";
}