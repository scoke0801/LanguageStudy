#include <iostream>
#include <string>
#include <vector>
#include <queue> 
#include <algorithm>
using namespace std;

vector<int> solution(vector<string> operations) {
    vector<int> answer;
    vector<int> buffer;

    for (int i = 0; i < operations.size(); ++i) {
        string command = operations[i].substr(0,1);
        string num = operations[i].substr(2); 

        if (command == "I") {
            // »ðÀÔ
            buffer.push_back(stoi(num)); 
            sort(buffer.begin(), buffer.end());
        }

        else if (command == "D") {
            if (true == buffer.empty()) {
                continue;
            }

            if (num == "-1") {
                // ÃÖ¼Ú°ª »èÁ¦
                buffer.erase(buffer.begin());
            }
            else {
                // ÃÖ´ñ°ª »èÁ¦
                buffer.pop_back();
            }
        }
    }
    if (true == buffer.empty()) {
        answer.push_back(0);       
        answer.push_back(0);
    }
    else {
        answer.push_back(buffer.back());
        answer.push_back(buffer.front());
    } 
    return answer;
}

int main() {
    solution({ "I 7","I 5","I -5","D -1" });


}