// stack 써서 큐 구현하기
// Queue 써서 스택 구현하기

#include <iostream>
#include <stack>
#include <queue>
using namespace std;

// 스택 써서 큐
class StackQueue {
	stack<int> a;
	stack<int> b;

public:
	void Enqueue(int data) {
		a.push(data);
	}
	int Dequeue() {
		if(true == b.empty()){
			while (false == a.empty()) {
				b.push(a.top());
				a.pop();
			}
		}
		if (true == b.empty()) {
			return -1;
		}
		int ret = b.top();
		b.pop();
		return ret;
	}
};

// 큐 써서 스택 구현
class QueueStack {
	queue<int> a;
	queue<int> b;

public:
	void push(int data) {
		while (false == a.empty()) {
			b.push(a.front());
			a.pop();
		}
		a.push(data);

		while (false == b.empty()) {
			a.push(b.front());
			b.pop();
		}
	}
	int pop() {
		if (true == a.empty()) {
			return -1;
		}
		int ret = a.front();
		a.pop();
		return ret;
	}
};
int main() {
	StackQueue sq;

	sq.Enqueue(1);
	sq.Enqueue(2);
	sq.Enqueue(3);
	sq.Enqueue(4);
	sq.Enqueue(5);

	cout << sq.Dequeue() << "\n";
	cout << sq.Dequeue() << "\n";
	cout << sq.Dequeue() << "\n";
	cout << sq.Dequeue() << "\n";
	cout << sq.Dequeue() << "\n";
	
	cout << "-----------------------------------\n";

	QueueStack qs;

	qs.push(1);
	qs.push(2);
	qs.push(3);
	qs.push(4);
	qs.push(5);

	cout << qs.pop() << "\n";
	cout << qs.pop() << "\n";
	cout << qs.pop() << "\n";
	cout << qs.pop() << "\n";
	cout << qs.pop() << "\n";
}