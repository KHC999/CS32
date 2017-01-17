#include <iostream>
#include <cassert>
using namespace std;

int fib2(int n)
{
	int *arr = new int[n+1];
	int value;
	arr[0] = 1;
	arr[1] = 1;
	for(int i=2;i<=n;i++)
		arr[i] = arr[i-1] + arr[i-2];
	value = arr[n];
	delete [] arr;
	return value;
}

int fib(int n)
{















}

int main()
{
	for(int i = 1 ; i < 5 ; i++ )
		assert( fib(i) == fib2(i) );
}
