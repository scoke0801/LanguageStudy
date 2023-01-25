//#include "Common.h"
//
//// 힙 트리 조건 : 부모 노드가 가진 값은, 자식 노드가 가진 값보다 크다.
//// 마지막 레벨을 제외한 모든 레벨에 노드가 꽉차 있다(완전 이진 트리)
//// 마지막 레벨에 노드가 있을 때는 항상 왼쪽부터 순서대로 채워야 한다.
//// --> 노드 개수를 알면, 트리 구조는 확정할 수 있다.
//
//template<typename T, typename Container = vector<T>, typename Predicate = less<T>>
//class PriorityQueue
//{
//public:
//	void push(const T& data)
//	{
//		// 맨 아래에 삽입
//		// 자리 찾아가기.
//		_container.push_back(data);
//
//		int idx = static_cast<int>( _container.size() ) - 1;
//		while (idx > 0) {
//			int parent = (idx - 1) / 2;
//			
//			if (_predicate(_container[idx], _container[parent])) {
//				break;
//			}
//
//			std::swap(_container[idx], _container[parent]);
//			idx = parent;
//		}
//	}
//
//	T& top()
//	{
//		//맨 위에 있는 놈 반환
//		return _container[0];
//	}
//
//	void pop()
//	{
//		// 맨 위에 있는 놈 제거
//		// 맨 아래에 있는 놈 맨 위로
//		// 자리 찾아가기.
//		_container[0] = _container.back();
//		_container.pop_back();
//
//		int idx = 0;
//		while (true) {
//			int left = idx * 2 + 1;
//			int right = idx * 2 + 2;
//
//			if (left >= _container.size()) {
//				break;
//			}
//
//			int child = idx;
//			if (_predicate(_container[child], _container[left])) {
//				child = left;
//			}
//			
//			if (right >= _container.size()) {
//				break;
//			}
//
//			if (_predicate( _container[child],	 _container[right])) {
//				child = right;
//			}
//
//			if (child == idx) { break; }
//
//			::swap(_container[idx], _container[child]);
//			idx = child;
//		}
//	}
//
//	bool empty() { return _container.empty(); }
//	size_t size() { return _container.size();  }
//
//private:
//	Container	_container = {};
//	Predicate	_predicate = {};
//};
//
//int main()
//{
//	// default 는 세번째 인자로 less
//	//priority_queue<int, vector<int>, greater<int>> pq;
//	PriorityQueue<int, vector<int>, greater<int>> pq;
//
//	pq.push(100);
//	pq.push(300);
//	pq.push(200);
//	pq.push(500);
//	pq.push(400);
//
//	while (pq.empty() == false) {
//		int value = pq.top();
//		pq.pop();
//
//		cout << value << endl;
//	}
//}