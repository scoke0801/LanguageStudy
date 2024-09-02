#include <iostream>

using namespace std;

class A
{
public:
	virtual void Test()
	{
		std::cout << "A" << "\n";
	}
};

class B : public A
{
public:
	void Test() final
	{
		std::cout << "B" << "\n";
	}
};
int main()
{
	A* tt = new B();

	tt->Test();

	return 0;
}