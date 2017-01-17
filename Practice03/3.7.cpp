#include <iostream>
using namespace std;

class Base
{
public:
	void output(int n) 
	{ 
		cout << "Hello Base" << n << endl; 
	}
};

class Derived : public Base
{
public:
	void output()		// This hides the output(int n) member function from Base class
	{ 
		cout << "Hello Derived Class!" << endl; 
	}
};

int main()
{
	Base b;
	b.output(1);
	Derived d;
	d.output();
	d.Base::output(2);
}
