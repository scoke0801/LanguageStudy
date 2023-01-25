#include "Common.h"
#include <Windows.h>

vector<int> numbers;

void SetCursorPosition(int x, int y) 
{
	HANDLE output = ::GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos = { static_cast<SHORT>(x), static_cast<SHORT>(y) };
	::SetConsoleCursorPosition(output, pos);
}

void BinarySearch(int N)
{
	int left = 0;
	int right = (int)numbers.size() - 1;

	while (left <= right) {
		cout << string_format("탐색 범위 : %d ~ %d\n", left, right);
		int mid = (left + right) / 2;
		
		if (N < numbers[mid]) {
			cout << N << " < " << numbers[mid] << endl;
			right = mid - 1;
		}
		else if (N > numbers[mid]) {
			cout << N << " > " << numbers[mid] << endl;
			left = mid + 1;
		}
		else {
			cout << "찾음!\n";
			break;
		}
	}
}

struct Node {
	Node*	parent = nullptr;
	Node*	left = nullptr;
	Node*	right = nullptr;
	int		key = {};
};

class BinarySearchTree
{
public:
	void Insert(int key)
	{
		Node* newNode = new Node();
		newNode->key = key;

		if (_root == nullptr) {
			_root = newNode;
			return;
		}

		Node* node = _root;
		Node* parent = nullptr;

		while (node) {
			parent = node;

			if (key < node->key) {
				node = node->left;
			}
			else {
				node = node->right;
			}
		}

		newNode->parent = parent;
		if (key < parent->key) {
			parent->left = newNode;
		}
		else {
			parent->right = newNode;
		}
	}

	void Print_PreOrder(Node* node)
	{
		// 중위 순회 
		// 후위(Post Order)
		// 전위(Pre Order)
		if (node == nullptr) { return; }

		Print_PreOrder(node->left);
		cout << node->key << endl;
		Print_PreOrder(node->right);
	}
	void Print_InOrder() { Print_PreOrder(_root); }

	void Print(Node* node, int x, int y)
	{
		if (node == nullptr) {
			return;
		}

		SetCursorPosition(x, y);
		cout << node->key;
		Print(node->left, x - (5 / (y + 1)), y + 1);
		Print(node->right, x + (5 / (y + 1)), y + 1);
	}
	void Print() { Print(_root, 10, 0); }

	Node* Search(Node* node, int key)
	{
		if (node == nullptr) { return nullptr; }
		if (key == node->key) { return node; }

		if (key < node->key) {
			return Search(node->left, key);
		}
		else
		{
			return Search(node->right, key);
		}
	}

	Node* Search2(Node* node, int key) {
		while (node != nullptr) {
			if (node->key < key) {
				node = node->left;
			}
			else if( node->key > key) {
				node = node->right;
			}
			else {
				break;
			}
		}
		return node;
	}

	Node* Min(Node* node)
	{
		if (node == nullptr) { return nullptr; }
		while (node->left) {
			node = node->left;;
		}
		return node;
	}
	Node* Max(Node* node)
	{
		if (node == nullptr) { return nullptr; }
		while (node->right) {
			node = node->right;
		}
		return node;
	}

	Node* Next(Node* node)
	{
		// 매개변수로 전달받은 노드 값보다 큰 값중 가장 작은 값을 찾아서 반환.
		if (node == nullptr) { return nullptr; }

		if (node->right) {
			return Min(node->right);
		}

		Node* parent = node->parent;

		while (parent && node == parent->right) {
			node = parent;
			parent = parent->parent;
		}

		return parent;
	}

	// u 서브트리를 v서브트리로 교체.
	void Replace(Node* u, Node* v)
	{
		if (u->parent == nullptr) {
			_root = v;
		}
		else if (u == u->parent->left) {
			u->parent->left = v;
		}
		else {
			u->parent->right = v;
		}

		if (v) {
			v->parent = u->parent;
		}

		delete u;
	}

	void Delete(Node* node) {
		if (node == nullptr) { return; }
		if (node->left == nullptr) {
			Replace(node, node->right);
		}
		else if (node->right == nullptr) {
			Replace(node, node->left);
		}
		else {
			// 다음 데이터 찾기.
			Node* next = Next(node);
			node->key = next->key;
			Delete(next);
		}
	}
	void Delete(int key) {
		Node* deleteNode = Search(_root, key);
		Delete(deleteNode);
	}
private:
	Node* _root = nullptr;
};

int main()
{
	//numbers = vector<int>{ 1, 8, 15, 23, 32, 44, 56, 63, 81, 91 };
	//BinarySearch(82);

	BinarySearchTree bst;
	bst.Insert(20);
	bst.Insert(10);
	bst.Insert(30);
	bst.Insert(25);
	bst.Insert(26);
	bst.Insert(40);
	bst.Insert(50);

//	bst.Print();

	bst.Delete(25);

	bst.Print();
	
	return 0;
}