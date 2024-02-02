//#include <iostream>
//#include <queue>
//#include <vector>
//using namespace std;
//
//struct Data {
//	int cur;
//	int clipBoard;
//	int time;
//
//	Data(int cur, int clipBoard, int time) : cur(cur), clipBoard(clipBoard), time(time) {}
//};
//int ans;
//int S;
//
//std::vector<std::vector<bool>> visit(1001, std::vector<bool>(1001));
//
//int main()
//{
//	cin >> S;
//
//	std::queue<Data> buffer;
//	buffer.push(Data(1, 0, 0));
//	visit[1][0] = true;
//
//	while (buffer.empty() == false) {
//		auto data = buffer.front();
//		buffer.pop();
//
//		if (data.cur == S) {
//			ans = data.time;
//			break;
//		}
//		if (data.cur > 0 && data.cur < 1001)
//		{
//			if (visit[data.cur][data.cur] == false) {
//				visit[data.cur][data.cur] = true;
//				buffer.push(Data(data.cur, data.cur, data.time + 1));
//			}
//
//			if (visit[data.cur - 1][data.clipBoard] == false) {
//				visit[data.cur - 1][data.clipBoard] = true;
//				buffer.push(Data(data.cur -1, data.clipBoard, data.time + 1));
//			}
//		}
//
//		if (data.cur > 0 && data.cur + data.clipBoard < 1001)
//		{
//			if (visit[data.cur + data.clipBoard][data.clipBoard] == false)
//			{
//				visit[data.cur + data.clipBoard][data.clipBoard] = true;
//				buffer.push(Data(data.cur + data.clipBoard, data.clipBoard, data.time + 1));
//			}
//		} 
//	}
//
//	std::cout << ans << "\n";
//}