#include <iostream>

class IntNode {
public:
	IntNode* next;
	int value;

	IntNode() : value(0), next(nullptr) {}
	IntNode(int value, IntNode* next) : value(value), next(next) {}
	~IntNode() {}
};

class MyStack {
public:
	MyStack()
	{
		head = new IntNode();
		head->next = nullptr;

		tail = new IntNode();
		tail->next = head;
	}
	~MyStack() { init(); }

	void init()
	{
		IntNode* node = tail;  
		while (node->next != head) {
			IntNode* delNode = node;
			node = node->next;
			delete delNode;
		}
	}

	void push(int value)
	{
		IntNode* newNode = new IntNode;
		newNode->value = value;
		newNode->next = tail->next;
		tail->next = newNode;
	}

	IntNode* pop()
	{
		if (tail->next == head) {
			return nullptr;
		}
		IntNode* popNode = tail;
		tail = tail->next;
		return popNode;
	}

	void display(int num)
	{
		IntNode* node = tail;
		for (int i = 0; i < num; ++i) {
			if (node->next == head) {
				return;
			}
			std::cout << "i : " << i << ", value: " << node->value << "\n";
			node = node->next;
		}
	}

private:
	IntNode* head,* tail;
};


int main()
{
	//MyStack stack;

	//for (int i = 0; i < 10000; ++i) {
	//	int randNo = rand() % 2;
	//	switch (randNo) {
	//	case 0: stack.push(rand() % 1000); break;
	//	case 1: stack.pop(); break;
	//	case 2:break;
	//	default:break;
	//	}
	//}

	//stack.display(20);


	int i = 3;
	bool b = false;

	int* ip = &i;
	bool* bp = &b;

	if (ip && bp) {
		std::cout << "검사 성공\n";
	}
	else {
		std::cout << "검사 실패\n";
	}

	return 0;
}