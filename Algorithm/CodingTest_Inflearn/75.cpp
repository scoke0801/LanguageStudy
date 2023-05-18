//#include <iostream>
//#include <queue>
//using namespace std;
//
//struct Work
//{
//public:
//	int pay;
//	int day;
//};
//
//class Comper
//{
//public:
//	bool operator()(const Work& lhs, const Work& rhs) {
//		if (lhs.pay == rhs.pay) {
//			return lhs.day < rhs.day;
//		}
//
//		return lhs.pay < rhs.pay;
//	}
//};
//
//bool visit[10001];
//int main()
//{
//	int N;
//	cin >> N;
//
//	int dayLimit = 0;
//	priority_queue< Work,vector<Work>, Comper > schedule;
//	for (int i = 0; i < N; ++i) {
//		int M, D;
//		cin >> M >> D;
//
//		dayLimit = std::max(dayLimit, D);
//		schedule.push({ M, D });
//	}
//
//	int pay = 0;
//	int visitedDay = 0;
//	while (!schedule.empty() && (visitedDay < dayLimit))
//	{
//		Work work = schedule.top();
//		schedule.pop();
//
//		for (int i = work.day; i > 0; --i) {
//			if (visit[i]) { continue; }
//
//			visit[i] = true;
//			++visitedDay;
//			pay += work.pay;
//			break;
//		}
//	}
//
//	cout << pay << "\n";
//}
///*
//
//18 1
//34 1	34
//13 2	
//41 2	41
//
//11 7	
//15 7	
//48 7	48
//13 8	
//72 8	72
//
//68 10	68
//
//72
//68
//48
//41
//34
//
//*/