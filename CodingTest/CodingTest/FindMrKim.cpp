#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul) {
    for (unsigned int i = 0; i < seoul.size(); ++i) {
        if (seoul[i] == "kim") {
            return "�輭���� " + to_string(i) + "�� �ִ�";
        }
    }
    return "";
}