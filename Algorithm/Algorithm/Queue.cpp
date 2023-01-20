#include <iostream>
#include <vector>
#include <deque>
using namespace std;

template <typename T, typename Container = deque<T> >
class Queue
{
public:
	void push(const T& value) 
	{
		_container.push_back(value);
	}

	void pop()
	{
		//_container.erase(_container.begin());
		_container.pop_front();
	}

	T& front()
	{
		return _container.front();
	}

	bool empty() { return _container.empty();  }
	size_t size() { return _container.size(); }
private:
//	vector<T> _container;
	Container _container;
};


template<typename T>
class ArrayQueue
{
public:
	ArrayQueue() { _container.reseize(100); }
	
	void push(const T& value)
	{
		// 증설작업
		if (_size == _container.size()) {
			int newSize = std::max(1, _size * 1.5f);
			vector<T> newData;
			newData.resize(newSize);

			// copy
			for (int i = 0; i < _size; ++i ) {
				int index = (_front + i) % _container.size();
				newData[i] = _container[index];
			}
			_container.swap(newData);
			_front = 0;

			_back = _size;
		}
		_container[_back] = value;
		_back = (_back + 1) % _container.size();
		_size++;
	}

	void pop()
	{
		_front = (front + 1) % _container.size();
		_size++;
	}
	
	T& front()
	{
		return _container[_front];
	}

	bool empty() { return _size == 0; }
	size_t size() { return _size; }

private:
	vector<T> _container;
	int			_back;
	int			_front;
	int			_size;
	
};

int main()
{
	Queue<int> q;

	for (int i = 0; i < 100; ++i) {
		q.push(i);
	}

	while (q.empty() == false) {
		int value = q.front();
		q.pop();
		cout << value << endl;
	}

	size_t size = q.size();

	return 0;
}