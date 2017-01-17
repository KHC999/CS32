#include <iostream>
using namespace std;

class Base
{
public:
	virtual void output() = 0;	 // This makes Base class an Abstract Base Class (ABC)
};
class Derived : public Base
{
public:
	void output() { cout << "Hello World!" << endl; }
};

int main()
{
	Base b;
	b.output();
	Derived d;
	d.output();
}
