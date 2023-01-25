//#include "Common.h"
//
//// �� Ʈ�� ���� : �θ� ��尡 ���� ����, �ڽ� ��尡 ���� ������ ũ��.
//// ������ ������ ������ ��� ������ ��尡 ���� �ִ�(���� ���� Ʈ��)
//// ������ ������ ��尡 ���� ���� �׻� ���ʺ��� ������� ä���� �Ѵ�.
//// --> ��� ������ �˸�, Ʈ�� ������ Ȯ���� �� �ִ�.
//
//template<typename T, typename Container = vector<T>, typename Predicate = less<T>>
//class PriorityQueue
//{
//public:
//	void push(const T& data)
//	{
//		// �� �Ʒ��� ����
//		// �ڸ� ã�ư���.
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
//		//�� ���� �ִ� �� ��ȯ
//		return _container[0];
//	}
//
//	void pop()
//	{
//		// �� ���� �ִ� �� ����
//		// �� �Ʒ��� �ִ� �� �� ����
//		// �ڸ� ã�ư���.
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
//	// default �� ����° ���ڷ� less
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