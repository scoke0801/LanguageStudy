#include <iostream>
#include <queue>
using namespace std;

struct Node
{
	Node* left;
	Node* right;
	int data;
};

const int TABLE_MAX = 100001;
class PQ
{
public:
	PQ() :size(0)
	{
		memset(table, sizeof(table), 0);
	}

public:
	void Push(int data)
	{
		if (size + 1 >= TABLE_MAX) { return;  }

		table[++size] = data;

		int cur = size;
		while (cur > 0)
		{
			int parent = cur / 2;
			if (parent <= 0) { break; }

			if (table[cur] >= table[parent]) {
				Swap(cur, parent);
			}
			cur = parent;
		}
	}
	
	void Pop()
	{
		if (size == 0) { return; }

		int front = table[1];
		table[1] = table[size];

		int cur = 1;
		while (cur <= size)
		{
			int left = cur * 2;
			int right = left + 1;
			if (left > size) { break; }

			int to = cur;
			if (table[left] > table[right])
			{
				to = left;
			}
			else if (table[left] < table[right])
			{
				to = right;
			}

			if (table[cur] < table[to])
			{
				Swap(to, cur);
				cur = to;
			}
			else {
				break;
			}
		}
	}

	int Front() 
	{
		if (size == 0) {
			return -1;
		}
		return table[1];
	}

	int Size() { return size - 1; }
	
private:
	void Swap(int left, int right)
	{
		int temp = table[left];
		table[left] = table[right];
		table[right] = temp;
	}

private:
	int size;
	int table[100000];
};
PQ pq;
queue<int> input;
int main()
{
	while (true)
	{
		int num;
		cin >> num;

		if (num == -1) {
			break;
		}
		input.push(num);
	}

	while (!input.empty())
	{
		int num = input.front();
		input.pop();

		if (num == 0) {
			cout << pq.Front() << "\n";
			pq.Pop();
		}
		else {
			pq.Push(num);
		}
	}
}