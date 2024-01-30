//#include <iostream>
//#include <queue>
//using namespace std;
//
//using Pair = std::pair<int, int >;
//
//class Comper {
//public:
//	bool operator()(const Pair& lhs, const Pair& rhs) {
//		return lhs.second > rhs.second;
//	}
//};
//int main()
//{
//	int N, K;
//	cin >> N >> K;
//
//	std::vector<bool> visit(100001);
//	
//	std::priority_queue < Pair, std::vector<Pair>, Comper> pq;
//	pq.push(std::make_pair(N, 0)); 
//	
//	int ans = 0;
//	while (!pq.empty())
//	{
//		auto cur = pq.top();
//		pq.pop();
//
//		if (cur.first == K) {
//			ans = cur.second;
//			break;
//		}
//		if (visit[cur.first]) { continue; }
//		visit[cur.first] = true;
//
//		int plus = cur.first + 1;
//		int minus = cur.first - 1;
//		int mult = cur.first * 2;
//
//		if (minus >= 0 && !visit[minus]) {
//			pq.push(std::make_pair(minus, cur.second + 1));
//		}
//		if (plus < 100001 && !visit[plus]) {
//			pq.push(std::make_pair(plus, cur.second + 1));
//		}
//
//		if (mult < 100001 && !visit[mult]) {
//			pq.push(std::make_pair(mult, cur.second));
//		}
//	}
//
//	std::cout << ans;
//
//}