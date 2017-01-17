#include <iostream>
using namespace std;

class Base 
{
public:
	Base() { cout << "1" << endl; }
	~Base() { cout << "4" << endl; }
};
class Derived : public Base
{
public:
	Derived() { cout << "2" << endl; }
	~Derived() { cout << "3" << endl; }
};
int main()
{
	Base *ptr = new Derived();
	delete ptr;
}
