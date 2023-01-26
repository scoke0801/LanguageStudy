#include "RedBlackTree.h"
#include <thread>

void SetCursorPosition(int x, int y)
{
	HANDLE output = ::GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos = { static_cast<SHORT>(x), static_cast<SHORT>(y) };
	::SetConsoleCursorPosition(output, pos);
}

void SetCursorColor(ConsoleColor color)
{
	HANDLE output = ::GetStdHandle(STD_OUTPUT_HANDLE);
	::SetConsoleTextAttribute(output, static_cast<SHORT>(color));
}

RedBlackTree::RedBlackTree()
{
	_nil = new Node(); // Black
	_root = _nil;
}

RedBlackTree::~RedBlackTree()
{
	delete _nil;
}

void RedBlackTree::Insert(int key)
{
	Node* newNode = new Node();
	newNode->key = key;

	Node* node = _root;
	Node* parent = _nil;

	while (node != _nil) {
		parent = node;

		if (key < node->key) {
			node = node->left;
		}
		else {
			node = node->right;
		}
	}

	newNode->parent = parent;

	if (parent == _nil) {
		_root = newNode;
	}
	else if (key < parent->key) {
		parent->left = newNode;
	}
	else {
		parent->right = newNode;
	}

	newNode->left = _nil;
	newNode->right = _nil;
	newNode->color = Color::Red;

	// RedBlack트리 조건을 만족하는 지 확인
	// 만족하지 않으면 조건 만족하도록 수정.
	InsertFixup(newNode);
}

void RedBlackTree::InsertFixup(Node* node)
{
	// 1) p = red, uncle = red
	// 2) p = red, uncle = black ( triangle )
	// 3) p = red, unclde = black ( list )

	//		[parent parent]
	// [parent]			[uncle]
	//    [newnode]

	while (node->parent->color == Color::Red) {
		if (node->parent == node->parent->parent->left) {
			Node* uncle = node->parent->parent->left;
				
			if (uncle->color == Color::Red) {
				node->parent->color = Color::Black;	// p
				uncle->color = Color::Black; // u
				node->parent->parent->color = Color::Red;	// pp
				node = node->parent->parent;
			}
			else {
				//		[pp(B)]
				//	[p(R)	[u(B)]
				//		[n(R)]
				if (node == node->parent->right) {
					// TriangleType
					node = node->parent;
					LeftRotate(node);
				}

				// List타입
				node->parent->color = Color::Black;
				node->parent->parent->color = Color::Red;
				RightRotate(node->parent->parent);
			}
		}
		else
		{
			Node* uncle = node->parent->parent->left;

			if (uncle->color == Color::Red) {
				node->parent->color = Color::Black;	// p
				uncle->color = Color::Black; // u
				node->parent->parent->color = Color::Red;	// pp
				node = node->parent->parent;
			}
			else {
				if (node == node->parent->left) {
					// TriangleType
					node = node->parent;
					LeftRotate(node);
				}

				// List타입
				node->parent->color = Color::Black;
				node->parent->parent->color = Color::Red;
				LeftRotate(node->parent->parent);
			}
		}
	}
}

void RedBlackTree::Print_PreOrder(Node* node)
{
	// 중위 순회 
	// 후위(Post Order)
	// 전위(Pre Order)
	if (node == nullptr) { return; }

	Print_PreOrder(node->left);
	cout << node->key << endl;
	Print_PreOrder(node->right);
}

void RedBlackTree::Print(Node* node, int x, int y)
{
	if (node == _nil) {
		return;
	}

	SetCursorPosition(x, y);

	if (node->color == Color::Black) {
		SetCursorColor(ConsoleColor::BLUE);
	}
	else {
		SetCursorColor(ConsoleColor::RED);
	}
	cout << node->key;
	Print(node->left, x - (5 / (y + 1)), y + 1);
	Print(node->right, x + (5 / (y + 1)), y + 1);

	SetCursorColor(ConsoleColor::WHITE);
}

Node* RedBlackTree::Search(Node* node, int key)
{
	if (node == _nil) { return nullptr; }
	if (key == node->key) { return node; }

	if (key < node->key) {
		return Search(node->left, key);
	}
	else
	{
		return Search(node->right, key);
	}
}

Node* RedBlackTree::Search2(Node* node, int key)
{
	while (node != nullptr) {
		if (node->key < key) {
			node = node->left;
		}
		else if (node->key > key) {
			node = node->right;
		}
		else {
			break;
		}
	}
	return node;
}

Node* RedBlackTree::Min(Node* node)
{
	if (node == _nil ) { return nullptr; }
	while (node->left != _nil ) {
		node = node->left;
	}
	return node;
}

Node* RedBlackTree::Max(Node* node)
{
	if (node == _nil) { return nullptr; }
	while (node->right != _nil ) {
		node = node->right;
	}
	return node;
}

Node* RedBlackTree::Next(Node* node)
{
	// 매개변수로 전달받은 노드 값보다 큰 값중 가장 작은 값을 찾아서 반환.
	if (node == _nil) { return nullptr; }

	if (node->right != _nil) {
		return Min(node->right);
	}

	Node* parent = node->parent;

	while (parent != _nil && node == parent->right ) {
		node = parent;
		parent = parent->parent;
	}

	return parent;
}

void RedBlackTree::Replace(Node* u, Node* v)
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

void RedBlackTree::Delete(Node* node)
{
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

void RedBlackTree::Delete(int key)
{
	Node* deleteNode = Search(_root, key);
	Delete(deleteNode);
}

//		[y]
//	[x]		[3]
// [1][2]
// 
//		[x]
//	[1]		[y]
//		   [2][3]

void RedBlackTree::LeftRotate(Node* x)
{
	Node* y = x->right;

	x->right = y->left;		// [2];

	if (y->left != _nil) {
		y->left->parent = x;
	}
	y->parent = x->parent;
	
	if (x->parent == _nil) {
		_root = y;
	}
	else if (x == x->parent->left) {
		x->parent->left = y;
	}
	else {
		x->parent->right = y;
	}

	y->left = x;
	x->parent = y;
}

void RedBlackTree::RightRotate(Node* y)
{
	Node* x = y->left;

	y->left = x->right;

	if (y->right != _nil) {
		y->right->parent = x;
	}

	x->parent = y->parent;
	if (y->parent == _nil) {
		_root = x;
	}
	else if (y == y->parent->left) {
		y->parent->left = x;
	}
	else {
		y->parent->right = x;
	}

	x->right = y;
	y->parent = x;
}

int main()
{
	//numbers = vector<int>{ 1, 8, 15, 23, 32, 44, 56, 63, 81, 91 };
	//BinarySearch(82);

	RedBlackTree rbt;
	rbt.Insert(30);
	rbt.Print();
	this_thread::sleep_for(1s);

	rbt.Insert(10);
	rbt.Print();
	this_thread::sleep_for(1s);	

	rbt.Insert(20);
	rbt.Print();
	this_thread::sleep_for(1s);	

	rbt.Insert(25);
	rbt.Print();
	this_thread::sleep_for(1s);		
	
	rbt.Insert(40);
	rbt.Print();
	this_thread::sleep_for(1s);

 	rbt.Insert(50);
	rbt.Print();
	this_thread::sleep_for(1s);

//	bst.Print();

	rbt.Delete(25);

	rbt.Print();
	
	return 0;
}
