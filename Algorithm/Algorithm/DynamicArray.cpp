#include <iostream>
#include <vector>
using namespace std;

template < typename T >
class Vector
{
public:
	Vector() {}
	~Vector() { if (_data) { delete[] _data; } }
		
	void push_back(const T& value)
	{
		if (_size == _capacity)
		{
			// 증설 작업
			int newCapacity = static_cast<int>(_capacity * 1.5) + 1;

			reserve(newCapacity);
		}
		_data[_size] = value;

		++_size;
	}

	void reserve(int capacity)
	{
		if (_capacity >= capacity) {
			return;
		}

		T* newData = new T[capacity];

		if (_data) {
			memcpy(newData, _data, sizeof(T) * _capacity);
		}

		_capacity = capacity;
		
		if (_data) {
			delete[] _data;
		}
		
		_data = newData;	
	}

	void resize(int size)
	{
		// 현재 사이즈보다 작으면 있던 크기 삭제.
		// 현재 사이즈보다 크면 크기만큼 객체 생성하여 할당.
		T* newData = new T[size];

		if (_data) {
			memcpy(newData, _data, size);
		}

		if (_size <= size) {
			for (size_t i = _size; i < size; ++i) {
				newData[i] = T();
			}
		}
		
		_size = size;

		if (_data) {
			delete[] _data;
		}
		_data = newData;
		_capacity = size;
	}

	void clear()
	{
		_size = 0;
	}

	T& operator[](int pos) { return _data[pos]; }

	int size() { return _size; }
	int capacity() { return _capacity; }

private:
	T* _data = nullptr;
	int _size = 0;
	int _capacity = 0;
};
int main()
{
	Vector<int> v;

	v.resize(10);
	cout << v.size() << " " << v.capacity() << endl;

	Vector<int> v2;

	v2.reserve(10);
	cout << v2.size() << " " << v2.capacity() << endl;

	v.reserve(100);
	for (int i = 0; i < 100; ++i)
	{
		v.push_back(i);
		cout << v[i] << " " << v.size() << " " << v.capacity() << "\n";
	}

	v.clear();
	cout << v.size() << " " << v.capacity() << endl;

	vector<int> a;
	
	a.clear();
}
