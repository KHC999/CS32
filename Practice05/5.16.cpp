#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

template <typename T>
class MyClass
{
public:
	MyClass(T * begin, int n)
	{
		T *end = begin + n;

		while (_________________________________)
		{

			name.push_back(____________________);
			begin++;
		}
		sort(_________________, _________________);
	}
	void output()
	{
		_________________  it = name.begin();
		cout << *it++;
		for (; it != name.end(); it++)
			cout << "," << *it;
		cout << endl;
	}

private:
	vector<T> name;
};

int main()
{
	string str[5] = { "Pineapple","Strawberry","Banana","Apple","Blackberry" };

	MyClass<string> mc(str, 5);

	mc.output();
}
