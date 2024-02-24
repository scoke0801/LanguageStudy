//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//// ȸ�� ������ ��� ����ü
//struct Meeting {
//    int start, end;
//};
//
//// ȸ���� ������ �ð��� �������� ���ϴ� �Լ�
//bool compare(Meeting a, Meeting b) {
//    if (a.end == b.end) {
//        return a.start < b.start;
//    }
//    return a.end < b.end;
//}
//
//int main() {
//    int N;
//    cin >> N;
//
//    vector<Meeting> meetings(N);
//
//    // ȸ�� ���� �Է� �ޱ�
//    for (int i = 0; i < N; ++i) {
//        cin >> meetings[i].start >> meetings[i].end;
//    }
//
//    // ������ �ð��� �������� ����
//    sort(meetings.begin(), meetings.end(), compare);
//
//    int count = 1; // ù ��° ȸ�Ǵ� ������ ����
//    int endTime = meetings[0].end;
//
//    // ���� ȸ�Ǻ��� ��ȸ�ϸ鼭 �ִ� ȸ�� ���� ã��
//    for (int i = 1; i < N; ++i) {
//        if (meetings[i].start >= endTime) {
//            // ���� ȸ���� ���� �ð��� ���� ȸ���� ������ �ð� ���Ķ�� ���� ����
//            ++count;
//            endTime = meetings[i].end;
//        }
//    }
//
//    cout << count << endl;
//
//    return 0;
//}