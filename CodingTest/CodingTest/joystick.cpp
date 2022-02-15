#include <string>
#include <vector>
#include <iostream>
using namespace std;

bool checked[21] = { false };

int wrap(int x, int low, int high) {
    const int n = (x - low) % (high - low);
    return (n >= 0) ? (n + low) : (n + high);
}
int calc_next_lcost(const string& name, int cur, int& left) {
    int count = 1;
    int left_val = 0;
    while (count < name.length()) {
        int idx = cur - count;
        if (idx < 0) {
            idx = name.length() + idx;
        }
        if (false == checked[idx]) {
            left_val = min(name[idx] - 'A', 'Z' - name[idx] + 1) + count;
            left = count;
            break;
        }
        ++count;
    }
    return left_val;
}
int calc_next_rcost(const string& name, int cur, int& right) {
    int count = 1;
    int right_val = 0;
    while (count < name.length()) {
        int idx = cur + count;
        if (idx >= name.length()) {
            idx = idx - name.length();
        }
        if (false == checked[idx]) {
            right_val = min(name[idx] - 'A', 'Z' - name[idx] + 1) + count;
            right = count;
            break;
        }
        ++count;
    }
    return right_val;
}
int solution(string name) {
    fill(checked, checked + 21, false);
    int answer = 0;
    int cur = 0, left = 0, right = 0;
    int counter = 0;

    for (int i = 0; i < name.length(); ++i) {
        if (name[i] == 'A') {
            checked[i] = true;
            ++counter;
        }
    }

    while (true) {
        int left = 0, left_val = 0;
        int right, right_val;
        answer += min(name[cur] - 'A', 'Z' - name[cur] + 1);
        name[cur] = 'A';
        if (false == checked[cur]) {
            checked[cur] = true;
            ++counter;
        }
        if (counter >= name.length()) {
            break;
        }

        left_val = calc_next_lcost(name, cur, left);
        right_val = calc_next_rcost(name, cur, right);

        if (left_val < right_val) {
            answer += left;
            cur = wrap(cur - left, 0, name.length());
        }
        else if (left_val > right_val) {
            answer += right;
            cur = wrap(cur + right, 0, name.length());
        }
        else {
            int count = 1;
            while (left_val == right_val)
            {
                int temp;
                int next = wrap(cur - count, 0, name.length());
                left_val = calc_next_lcost(name, next, temp);

                next = wrap(cur + count, 0, name.length());
                right_val = calc_next_rcost(name, next, temp);


                count++;
                if (count >= name.length()) {
                    break;
                }
            }

            if (left_val > right_val) {
                answer += left;
                cur = wrap(cur - left, 0, name.length());
            }
            else {
                answer += right;
                cur = wrap(cur + right, 0, name.length());
            }
        }
    }
    return answer;
}
int main() {
    cout << solution("BBBBAAAABA") << "\n"; //12
    cout << solution("BBBBAAAAAB") << "\n"; //10
    cout << solution("ABAAAAAAAAABB") << "\n"; //7
    cout << solution("JEROEN") <<"\n"; // 56
    cout << solution("JAN") << "\n"; // 23
    cout << solution("JAZ") << "\n"; // 11
}