#include "stdafx.h"

class Base;

class Base
{
public:
	Base()
	{
		_this = std::make_shared<Base*>();
	}

public:
	std::weak_ptr< Base* > GetWeak() { return _this; }

	virtual void Foo() { std::cout << "Base\n"; }

private:
	std::shared_ptr< Base* > _this;
};

class A : public Base
{

public:
	void Foo() override { std::cout << "A\n"; }
};

class B
{

};

template<typename T,
	typename std::enable_if < std::is_base_of< Base, T>::value
	&& std::is_pointer<T>::value>::type* = nullptr>
class Test
{

};

using Func = void(Base::*)();

int main()
{
	do
	{
		Base* pBase1 = new Base();

		auto weak1 = pBase1->GetWeak();

		delete pBase1;

		if (weak1.expired())
		{
			std::cout << "expired\n";
		}
		else
		{
			std::cout << "object is alive\n";

			auto ptr = *(weak1.lock());
			ptr->Foo();
		}
	}while (0);

	do
	{
		Func func = &Base::Foo;
		Base* pCaller = new Base();

		delete pCaller;

		(pCaller->*func)();

	} while (0);
	return 0;
}