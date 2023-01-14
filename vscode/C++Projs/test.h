#include <iostream> 

using namespace std;

class Test 
{
public:
    virtual ~Test();       
};

class TestDervied : public Test
{
public:

};

int main()
{
    cout << sizeof(Test) << "\n" << sizeof(TestDervied);
}

