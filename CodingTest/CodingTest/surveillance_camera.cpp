#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int solution(vector<vector<int>> routes) {
    int answer = 0;
    sort(routes.begin(), routes.end());
    bool checked[10000] = { false, };
    // start ~ end ���̿� �־����
    // end���� �۴ٰ� ������ �����ϴ� ���� �ƴ�
    for (int i = 0; i < routes.size(); ++i) {
        if (checked[i]) {
            continue;
        }
        int start = routes[i][0];
        int end = routes[i][1]; 

        for (int j = i + 1; j < routes.size(); ++j) {
            int ns = routes[j][0];
            int ne = routes[j][1];
            
            if (start <= ns && end >= ne) { 
                // �� ������ ī�޶� ���� ��밡��
                start = ns;
                end = ne;
                checked[j] = true;
            }
            else if (ns >= start && end >= ns) {
                // �� ������ ī�޶� ���� ��밡��
                start = ns;
                end = end;
                checked[j] = true;
            }
            else {
                //�����ؼ� ��ġ �Ұ���
                i = j - 1;
                break;
            }
        }
        ++answer;
    }
    return answer;
}
int main() {
    // -100 100 / -50 -10 / 10 20 / 30 40 / 50 170 / 150 200
    // -50 -10 : 1
    // 10 20 : 1
    // 30 40 : 1
    // -100 100 ~ 50 170 ~ 150 200 1
    // ���� ���� �������� ��ġ���� ��, ���� ū ���뼺�� ���� ��ġ�� ��ġ..
    // ���� ���� ���� �Ÿ��� ���� ū ���..
    // ���� ���� ����ϰ�, ���� ������ ������� ���Ѵ�?
    // ���� ���������� ����ϰ� 
    // ���� ������������ �ٽ� ���
    
    // 4
    cout << solution({ {-100, 100},{50, 170},{150, 200},{-50, -10},{10, 20},{30, 40} }) << "\n";

    // 2
    cout << solution({ {-20,-15}, {-14,-5}, {-18,-13},{-5,-3 } }) << "\n"; 
    
    //4
    cout << solution({ {0, 0},{0, 1},{0, 2},{1, 1},{2, 2},{3, 6} }) << "\n";
    return 0;
}