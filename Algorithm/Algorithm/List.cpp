#include <iostream>
#include <list>
using namespace std;

template<typename T>
class Node
{
public:
	Node() : _prev(nullptr), _next(nullptr), _data(T())
	{
	}

	Node(const T& value) : _prev(nullptr), _next(nullptr), _data(value)
	{
	}
public:
	T _data;

	Node* _prev;
	Node* _next;
};

template<typename T>
class Iterator
{
public:
	Iterator() : _node(nullptr)
	{
	}

	Iterator(Node<T>* node) : _node(node)
	{
	}

	Iterator& operator++() {
		_node = _node->_next;
		return *this;
	}

	Iterator& operator++(int) {
		Iterator<T> temp = *this;
		_node = _node->_next;
		return temp;
	}


	Iterator& operator--() {
		_node = _node->_prev;
		return *this;
	}

	Iterator& operator--(int) {
		Iterator<T> temp = *this;
		_node = _node->_prev;
		return temp;
	}

	T& operator*()
	{
		return _node->_data;
	}

	bool operator==(const Iterator& other) {
		return _node == other._node;
	}

	bool operator!=(const Iterator& other) {
		return _node != other._node;
	}
public:	
	Node<T>* _node;
};

template<typename T>
class List
{
public:
	List() : _size(0)
	{
		_head = new Node<T>();
		_tail = new Node<T>();
		_head->_next = _tail;
		_tail->_prev = _head;
	}
	
	~List() {
		delete _head;
		delete _tail;
	}

public:
	void push_back(const T& value)
	{
		AddNode(_tail, value);
	}

	void pop_back()
	{
		RemoveNode(_tail->_prev);
	}

	int size() { return _size; }
	
public:
	using iterator = Iterator<T>;

	iterator begin() { return iterator(_head->_next); }
	iterator end() { return iterator(_tail); }

	iterator insert(iterator iter, const T& value) {
		Node<T>* node = AddNode(iter._node, value);
		return iterator(node);
	}

	iterator erase(iterator iter) {
		Node<T>* node = RemoveNode(iter._node);
		return iterator(node);
	}

private:
	Node<T>* AddNode(Node<T>* before, const T& value)
	{
		Node<T>* newNode = new Node<T>(value);

		newNode->_next = before;
		newNode->_prev = before->_prev;

		before->_prev->_next = newNode;	
		before->_prev = newNode;

		++_size;
		return newNode;
	}

	Node<T>* RemoveNode(Node<T>* node)
	{
		node->_prev->_next = node->_next;
		node->_next->_prev = node->_next;

		Node<T>* retNode = node->_next;
		delete node;

		--_size;

		return retNode;
	}

private:
	Node<T>*	_head;
	Node<T>*	_tail;
	int			_size;
};

int main_()
{
	List<int> list;

	List<int>::iterator iter;

	for (int i = 0; i < 10; ++i) {
		if (i == 5) {
			iter = list.insert(list.end(), i);
		}
		else {
			list.push_back(i);
		}
	}
	list.pop_back();

	list.erase(iter);

	for (List<int>::iterator it = list.begin(); it != list.end(); ++it) {
		cout << *it << endl;
	}

	return 0;
}