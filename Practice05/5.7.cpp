#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

template<typename T>
class myClass
{
public:
	myClass() { }

	T getValue() const { return value; }

	bool operator<(______________________   &b) 
{
		return value <  _______________ ;
	}

	myClass& operator=(const string &str) 
	{
		__________________________
		return *this;
	}
private:
	T value;
};

int main()
{
	myClass<string> mc[3];

	mc[0] = "Hello";
	mc[1] = "ABC";
	mc[2] = "XYZ";

	sort(mc, mc + 3);

	for (int i = 0; i<3; i++)
		cout << mc[i].getValue() << " ";
	cout << endl;
}
