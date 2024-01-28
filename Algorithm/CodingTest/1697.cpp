//#include <iostream>
//#include <queue>
//#include <vector>
//#include <climits>
//using namespace std;
//
//int N, K;
//int ans = INT_MAX;
//
//std::vector<bool> visit(100001);
//struct Info {
//	int pos;
//	int time;
//
//	Info() :pos(0), time(0){}
//	Info(int pos, int time) : pos(pos), time(time) {}
//};
//
//int main()
//{
//	cin >> N >> K;
//
//	std::queue<Info> data;
//	data.push(Info(N, 0));
//	while (data.empty() == false)
//	{
//		Info info = data.front();
//		data.pop();
//
//		if (info.pos == K) {
//			ans = std::min(ans, info.time);
//			continue;
//		}
//		int minus = info.pos - 1;
//		int plus = info.pos + 1;
//		int mult = info.pos * 2;
//		
//		if (minus >= 0 && minus <= 100000)
//		{
//			if (visit[minus] == false) {
//				data.push(Info(minus, info.time + 1));
//				visit[minus] = true;
//			}
//		}
//
//		if (plus >= 0 && plus <= 100000)
//		{
//			if (visit[plus] == false) {
//				data.push(Info(plus, info.time + 1));
//				visit[plus] = true;
//			}
//		}
//		
//		if (mult >= 0 && mult <= 100000)
//		{
//			if (visit[mult] == false) {
//				data.push(Info(mult, info.time + 1));
//				visit[mult] = true;
//			}
//		}
//	}
//
//	std::cout << ans;
//}