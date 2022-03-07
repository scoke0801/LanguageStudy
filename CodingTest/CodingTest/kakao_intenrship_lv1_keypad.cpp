/*
����Ʈ�� ��ȭ Ű�е��� �� ĭ�� ������ ���� ���ڵ��� ���� �ֽ��ϴ�.
123
456
789
*0#
�� ��ȭ Ű�е忡�� �޼հ� �������� �����հ������� �̿��ؼ� ���ڸ��� �Է��Ϸ��� �մϴ�.
�� ó�� �޼� �����հ����� * Ű�е忡 
������ �����հ����� # Ű�е� ��ġ���� �����ϸ� 
�����հ����� ����ϴ� ��Ģ�� ������ �����ϴ�.

�����հ����� �����¿� 4���� �������θ� �̵��� �� ������ Ű�е� �̵� �� ĭ�� �Ÿ��� 1�� �ش��մϴ�.

���� ���� 3���� ���� 1, 4, 7�� �Է��� ���� �޼� �����հ����� ����մϴ�.
������ ���� 3���� ���� 3, 6, 9�� �Է��� ���� ������ �����հ����� ����մϴ�.
��� ���� 4���� ���� 2, 5, 8, 0�� �Է��� ���� 
�� �����հ����� ���� Ű�е��� ��ġ���� �� ����� �����հ����� ����մϴ�.
----���� �� �����հ����� �Ÿ��� ���ٸ�, ���������̴� ������ �����հ���, �޼����̴� �޼� �����հ����� ����մϴ�.

������� ���� ��ȣ�� ��� �迭 numbers,
�޼��������� ������������ ���� ��Ÿ���� ���ڿ� hand�� �Ű������� �־��� ��, 
�� ��ȣ�� ���� �����հ����� �޼��� �� �������� ���� ��Ÿ���� ���ӵ� ���ڿ� ���·� return �ϵ��� solution �Լ��� �ϼ����ּ���.
*/

#include <string>
#include <vector>

using namespace std;

string solution(vector<int> numbers, string hand) {
    string answer = "";
    // �� �հ����� ��ġ�� �� ���� ���������� ����
    // �޼����� : Lefthander
    // ���������� : right handed
    bool isLeftHander = hand == "left";
    int left = 3, right = 3;
    bool onCenterL = false, onCenterR = false;

    for (uint16_t i = 0; i < numbers.size(); ++i) {
        if (numbers[i] == 1 || numbers[i] == 4 || numbers[i] == 7) {
            // ���� �հ������� ������ �Ǵ� ���
            answer += "L";
            left = numbers[i] / 3;
            onCenterL = false;
        }
        else if (numbers[i] == 3 || numbers[i] == 6 || numbers[i] == 9) {
            // ������ �հ������� ������ �Ǵ� ���
            answer += "R";
            right = numbers[i] / 3 - 1;
            onCenterR = false;
        }
        else {
            // �߰������� ���ؼ�...
            // 0�� ��� /3~~~~
            int cur = numbers[i] / 3;
            if (numbers[i] == 0) {
                cur = 3;
            }
            
            int dist[2];
            dist[0] = (onCenterL) ? abs(cur - left) : (abs(cur - left) + 1);
            dist[1] = (onCenterR) ? abs(cur - right) : (abs(cur - right) + 1);
            

            if (dist[0] < dist[1]) {
                left = cur;
                answer += "L";
                onCenterL = true;
            }
            else if (dist[0] > dist[1]) {
                right = cur;
                answer += "R";
                onCenterR = true;
            }
            else {
                if (isLeftHander) {
                    left = cur;
                    answer += "L";
                    onCenterL = true;
                }
                else {
                    right = cur;
                    answer += "R";
                    onCenterR = true;
                }
            }
        }
    }

    return answer;
}

#include<iostream>
int main() {  
    // "LRLLLRLLRRL"
    //  LRLLLRLLRRL
    cout << solution({ 1, 3, 4, 5, 8, 2, 1, 4, 5, 9, 5 }, "right") << "\n";

    // "LRLLRRLLLRR"
    //  LRLLRRLLLRR
    cout << solution({ 7, 0, 8, 2, 8, 3, 1, 5, 7, 6, 2 }, "left") << "\n";

    // "LLRLLRLLRL"
    // "LLRLLRLLRL"
    cout << solution({ 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 }, "right") << "\n";
    return 0;
}