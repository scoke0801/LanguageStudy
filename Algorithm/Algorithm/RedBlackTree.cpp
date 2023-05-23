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

void ShowConsoleCursor(bool flag)
{
	HANDLE output = ::GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cursorInfo;
	::GetConsoleCursorInfo(output, &cursorInfo);
	cursorInfo.bVisible = flag;
	::SetConsoleCursorInfo(output, &cursorInfo);
}

RedBlackTree::RedBlackTree()
{
	_nil = new Edge(); // Black
	_root = _nil;
}

RedBlackTree::~RedBlackTree()
{
	delete _nil;
}

void RedBlackTree::Insert(int key)
{
	Edge* newNode = new Edge();
	newNode->key = key;

	Edge* node = _root;
	Edge* parent = _nil;

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

void RedBlackTree::InsertFixup(Edge* node)
{
	// 1) p = red, uncle = red
	// -> p = black, uncle = black, pp = red로 바꿈
	// 2) p = red, uncle = black (triangle)
	// -> 회전을 통해 case 3으로 바꿈
	// 3) p = red, uncle = black (list)	
	// -> 색상 변경 + 회전

	//		[parent parent]
	// [parent]			[uncle]
	//    [newnode]

	while (node->parent->color == Color::Red) {
		if (node->parent == node->parent->parent->left) {
			Edge* uncle = node->parent->parent->right;
				
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
			Edge* uncle = node->parent->parent->left;

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

	_root->color = Color::Black;
}

void RedBlackTree::Print_PreOrder(Edge* node)
{
	// 중위 순회 
	// 후위(Post Order)
	// 전위(Pre Order)
	if (node == nullptr) { return; }

	Print_PreOrder(node->left);
	cout << node->key << endl;
	Print_PreOrder(node->right);
}

void RedBlackTree::Print(Edge* node, int x, int y)
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

void RedBlackTree::Print()
{
	::system("cls");
	ShowConsoleCursor(false);
	Print(_root, 10, 0);
}

Edge* RedBlackTree::Search(Edge* node, int key)
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

Edge* RedBlackTree::Search2(Edge* node, int key)
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

Edge* RedBlackTree::Min(Edge* node)
{
	if (node == _nil ) { return nullptr; }
	while (node->left != _nil ) {
		node = node->left;
	}
	return node;
}

Edge* RedBlackTree::Max(Edge* node)
{
	if (node == _nil) { return nullptr; }
	while (node->right != _nil ) {
		node = node->right;
	}
	return node;
}

Edge* RedBlackTree::Next(Edge* node)
{
	// 매개변수로 전달받은 노드 값보다 큰 값중 가장 작은 값을 찾아서 반환.
	if (node == _nil) { return nullptr; }

	if (node->right != _nil) {
		return Min(node->right);
	}

	Edge* parent = node->parent;

	while (parent != _nil && node == parent->right ) {
		node = parent;
		parent = parent->parent;
	}

	return parent;
}

void RedBlackTree::Replace(Edge* u, Edge* v)
{
	if (u->parent == _nil) {
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

void RedBlackTree::Delete(Edge* node)
{
	if (node == _nil) { return; }

	if (node->left == _nil) {
		Color color = node->color;
		Edge* right = node->right;
		Replace(node, node->right);

		if (color == Color::Black) {
			DeleteFixup(right);
		}
	}
	else if (node->right == _nil) {
		Color color = node->color;
		Edge* left = node->left;
		Replace(node, node->left);

		if (color == Color::Black) {
			DeleteFixup(left);
		}
	}
	else {
		// 다음 데이터 찾기.
		Edge* next = Next(node);
		node->key = next->key;
		Delete(next);
	}
}

void RedBlackTree::Delete(int key)
{
	Edge* deleteNode = Search(_root, key);
	Delete(deleteNode);
}

void RedBlackTree::DeleteFixup(Edge* node)
{
	// delete node;
	Edge* x = node;

	while (x != _root && x->color == Color::Black) {
		if (x == x->parent->left)
		{
			// case[3]
			// 형제 노드 silbing
			Edge* s = x->parent->right;
			if (s->color == Color::Red) {
				s->color = Color::Black;
				x->parent->color = Color::Red;

				LeftRotate(x->parent);

				s = x->parent->right; // [1]
			}

			// case[4]
			if (s->left->color == Color::Black && s->right->color == Color::Black) {
				s->color = Color::Red;
				x = x->parent;
			}
			else {
				// [case5]
				if (s->right->color == Color::Black) {
					s->left->color = Color::Black;
					s->color = Color::Red;
					RightRotate(s);
					s = x->parent->right;
				}

				// case[6] 
				s->color = x->parent->color;
				x->parent->color = Color::Black;
				s->right->color = Color::Black;
				LeftRotate(x->parent);
				x = _root;
			}
		}
		else {
			// case[3]
			// 형제 노드 silbing
			Edge* s = x->parent->left;
			if (s->color == Color::Red) {
				s->color = Color::Black;
				x->parent->color = Color::Red;

				RightRotate(x->parent);

				s = x->parent->left; // [1]
			}

			// case[4]
			if (s->right->color == Color::Black && s->left->color == Color::Black) {
				s->color = Color::Red;
				x = x->parent;
			}
			else {
				// [case5]
				if (s->left->color == Color::Black) {
					s->right->color = Color::Black;
					s->color = Color::Red;
					LeftRotate(s);
					s = x->parent->left;
				}

				// case[6] 
				s->color = x->parent->color;
				x->parent->color = Color::Black;
				s->left->color = Color::Black;
				RightRotate(x->parent);
				x = _root;
			}
		}
	}
	x->color = Color::Black;
}

//		[y]
//	[x]		[3]
// [1][2]
// 
//		[x]
//	[1]		[y]
//		   [2][3]

void RedBlackTree::LeftRotate(Edge* x)
{
	Edge* y = x->right;

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

void RedBlackTree::RightRotate(Edge* y)
{
	Edge* x = y->left;

	y->left = x->right;

	if (x->right != _nil) {
		x->right->parent = y;
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
//
//int main()
//{
//	//numbers = vector<int>{ 1, 8, 15, 23, 32, 44, 56, 63, 81, 91 };
//	//BinarySearch(82);
//
//	RedBlackTree rbt;
//
//	rbt.Insert(30);
//	rbt.Print();
//	this_thread::sleep_for(1s);
//
//	rbt.Insert(10);
//	rbt.Print();
//	this_thread::sleep_for(1s);
//
//	rbt.Insert(20);
//	rbt.Print();
//	this_thread::sleep_for(1s);
//
//	rbt.Insert(25);
//	rbt.Print();
//	this_thread::sleep_for(1s);
//
//	//rbt.Insert(40);
//	//rbt.Print();
//	//this_thread::sleep_for(1s);
//
//	//rbt.Insert(50);
//	//rbt.Print();
//	//this_thread::sleep_for(1s);
//
//	rbt.Delete(20);
//	rbt.Print();
//	this_thread::sleep_for(1s);
//
//	rbt.Delete(25);
//	rbt.Print();
//	this_thread::sleep_for(1s);
//	return 0;
//}
