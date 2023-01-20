#include <iostream>
#include <stack>
#include <vector>
using namespace std;

template<typename T, typename Container = std::vector<T> >
class Stack
{
public:
	void push(const T& value)
	{
		_container.push_back(value);
	}

	void pop()
	{
		_container.pop_back();
	}

	T& top()
	{
		return _container.back();
	}

	bool empty() { return _container.empty(); }
	int size() { return _container.size(); }

private:
	Container _container;
	// vector<T> _container;
	// list<T> _container;
};
int main__()
{
	Stack<int> s;

	s.push(1);
	s.push(2);
	s.push(3);
	
	while (s.empty() == false) {
		int data = s.top();
		s.pop();
		cout << data << "\n";
	}
	return 0;
}