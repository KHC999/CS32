#include <iostream>
#include <string>
#include <cassert>
using namespace std;
void reverse2(string &str, int len)
{
	int i;
	char temp;
	for (i = 0; i<len / 2; i++)
	{
		temp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = temp;
	}
}
void reverse(string &str, int start, int end)
{
	char temp;
	if (start < end)
	{	// In each reverse() function call, we should swap 2 characters in the string













	}
}
int main() 
{
	string str1 = "ABCDE", str2 = "ABCDE";

	reverse(str1, 0, str1.size());
	reverse2(str2, str2.size());

	assert(str1 == str2);
}
