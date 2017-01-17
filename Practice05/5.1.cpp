#include <iostream>
using namespace std;

template <typename T>
T max(T a, T b)
{
	cout << "Use T max()" << endl;
	if (a > b)
		return a;
	return b;
}

double max(double a, double b)
{
	cout << "Use double max()" << endl;
	if (a > b)
		return a;
	return b;
}

int main()
{
	double a = 5, b = 3;
	cout << max(1.20, 3.40) << endl;
	cout << max(a, b) << endl;
}
