#pragma once

#include <Windows.h>
#include <iostream>
#include <vector>
#include "Types.h"
#include <queue>
#include <map>

using namespace std;

struct Info
{
	bool operator==(Info& other)
	{
		return y == other.y && x == other.x;
	}

	bool operator!=(Info& other)
	{
		return !(*this == other);
	}
	bool operator<(const Info& other) const
	{
		if (y != other.y) { return y < other.y; }
		return x < other.x;
	}

	Info operator+(Info& other)
	{
		Info ret;
		ret.x = x + other.x;
		ret.y = y + other.y;
		return ret;
	}
	Info& operator+=(Info& other)
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
