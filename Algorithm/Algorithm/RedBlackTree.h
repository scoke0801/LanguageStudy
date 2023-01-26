#pragma once


#include "Common.h"
#include <Windows.h>

enum class ConsoleColor
{
	BLACK = 0,
	RED = FOREGROUND_RED,
	GREEN = FOREGROUND_GREEN,
	BLUE = FOREGROUND_BLUE,
	YELLOW = RED | GREEN,
	WHITE = RED | GREEN | BLUE,
};

void SetCursorPosition(int x, int y);
void SetCursorColor(ConsoleColor color);

enum class Color
{
	Red = 0,
	Black = 1,
};

struct Node {
	Node* parent = nullptr;
	Node* left = nullptr;
	Node* right = nullptr;
	int		key = {};
	Color color = Color::Black;
};

// 1) ��� ���� ���� or ��
// 2) ��Ʈ ��Ʈ�� ��
// 3) ���� ��Ʈ�� ��
// 4) Red����� �ڽ��� Black ( �����ؼ� Red���� �ȵ� )
// 5) �� ���κ��� �������� ���� ��ε��� ��� ���� ���� black ��带 ����
class RedBlackTree
{
public:
	RedBlackTree();
	~RedBlackTree();

public:
	void Insert(int key);
	void InsertFixup(Node* node);

	void Print_PreOrder(Node* node);

	void Print_InOrder() { Print_PreOrder(_root); }

	void Print(Node* node, int x, int y);

	void Print() { Print(_root, 10, 0); }

	Node* Search(Node* node, int key);

	Node* Search2(Node* node, int key); 

	Node* Min(Node* node);

	Node* Max(Node* node);

	Node* Next(Node* node);

	// u ����Ʈ���� v����Ʈ���� ��ü.
	void Replace(Node* u, Node* v);
	void Delete(Node* node);
	void Delete(int key);

	void LeftRotate(Node* node);
	void RightRotate(Node* node);

private:
	Node* _root = nullptr;
	Node* _nil = nullptr;
};
