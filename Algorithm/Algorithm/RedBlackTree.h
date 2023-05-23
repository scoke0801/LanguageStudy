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

// 1) 모든 노드는 레드 or 블랙
// 2) 루트 노트는 블랙
// 3) 리프 노트는 블랙
// 4) Red노드의 자식은 Black ( 연속해서 Red노드는 안됨 )
// 5) 각 노드로부터 리프까지 가는 경로들은 모두 같은 수의 black 노드를 가짐
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

	// u 서브트리를 v서브트리로 교체.
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
