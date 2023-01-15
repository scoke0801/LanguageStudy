#pragma once

#include <Windows.h>
#include <iostream>
#include <vector>
#include "Types.h"

using namespace std;

struct Pos
{
	bool operator==(Pos& other)
	{
		return y == other.y && x == other.x;
	}

	bool operator!=(Pos& other)
	{
		return !(*this == other);
	}

	Pos operator+(Pos& other)
	{
		Pos ret;
		ret.x = x + other.x;
		ret.y = y + other.y;
		return ret;
	}
	Pos& operator+=(Pos& other)
	{
		x += other.x;
		y += other.y;
		return *this;
	}

	int32 x = 0;
	int32 y = 0;
};

enum Dir
{
	DIR_UP = 0,
	DIR_LEFT = 1,
	DIR_DOWN,
	DIR_RIGHT,

	DIR_COUNT = 4,
};
