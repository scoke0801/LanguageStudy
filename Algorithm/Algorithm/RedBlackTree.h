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
void ShowConsoleCurse(bool flag);

enum class Color
{
	Red = 0,
	Black = 1,
};

struct Edge {
	Edge* parent = nullptr;
	Edge* left = nullptr;
	Edge* right = nullptr;
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
	void InsertFixup(Edge* node);

	void Print_PreOrder(Edge* node);

	void Print_InOrder() { Print_PreOrder(_root); }

	void Print(Edge* node, int x, int y);

	void Print();

	Edge* Search(Edge* node, int key);

	Edge* Search2(Edge* node, int key); 

	Edge* Min(Edge* node);

	Edge* Max(Edge* node);

	Edge* Next(Edge* node);

	// u ����Ʈ���� v����Ʈ���� ��ü.
	void Replace(Edge* u, Edge* v);

	void Delete(Edge* node);
	void Delete(int key);
	void DeleteFixup(Edge* node);

	void LeftRotate(Edge* node);
	void RightRotate(Edge* node);

private:
	Edge* _root = nullptr;
	Edge* _nil = nullptr;
};
