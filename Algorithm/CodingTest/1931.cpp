//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//// 회의 정보를 담는 구조체
//struct Meeting {
//    int start, end;
//};
//
//// 회의의 끝나는 시간을 기준으로 비교하는 함수
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
//    // 회의 정보 입력 받기
//    for (int i = 0; i < N; ++i) {
//        cin >> meetings[i].start >> meetings[i].end;
//    }
//
//    // 끝나는 시간을 기준으로 정렬
//    sort(meetings.begin(), meetings.end(), compare);
//
//    int count = 1; // 첫 번째 회의는 무조건 포함
//    int endTime = meetings[0].end;
//
//    // 다음 회의부터 순회하면서 최대 회의 개수 찾기
//    for (int i = 1; i < N; ++i) {
//        if (meetings[i].start >= endTime) {
//            // 현재 회의의 시작 시간이 이전 회의의 끝나는 시간 이후라면 포함 가능
//            ++count;
//            endTime = meetings[i].end;
//        }
//    }
//
//    cout << count << endl;
//
//    return 0;
//}