//#include <iostream>
//#include <queue>
//#include <algorithm>
//using namespace std;
//
//struct Work
//{
//	unsigned short day;
//	unsigned short pay;
//
//	Work() :day(0), pay(0) {}
//	Work(unsigned short day, unsigned short pay) :day(day), pay(pay) {}
//
//	bool operator<(const Work& other) const
//	{
//		if (this->day < other.day)
//		{
//			// 비교 대상이 이후의 날이고
//			return this->pay < other.pay;
//		}
//		if (this->pay == other.pay)
//		{
//			return this->day > other.day;
//		}
//
//		return this->pay < other.pay;
//	}
//};
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//	cout.tie(nullptr);
//
//	unsigned short N;
//	std::cin >> N;
//
//	std::priority_queue<unsigned short, std::vector<unsigned short>, std::greater<unsigned short>> buffer;
//	std::vector<Work> works(N);
//
//	for (int i = 0; i < N; ++i) {
//		unsigned short pay, day;
//		cin >> pay >> day;
//		works[i] = Work(day, pay);
//	}
//	std::sort(works.begin(), works.end(), [](const Work& a, const Work& b) {
//		if (a.day == b.day) {
//			return a.pay < b.pay;
//		}
//		return a.day < b.day;
//		});
//
//	for (int i = 0; i < N; ++i){
//		buffer.push(works[i].pay);
//		if (buffer.size() > works[i].day) {
//			unsigned short pay = buffer.top();
//			buffer.pop();
//		}
//	}
//
//	int sum = 0;
//	while (buffer.empty() == false) {
//		sum += buffer.top();
//		buffer.pop();
//	}
//
//	std::cout << sum << "\n";
//}