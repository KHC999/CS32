#include <iostream >
#include <string>
using namespace std;

bool isPalindrome(string &str)
{
	for (int i = 0; i<str.size() / 2; i++)
		if (str[i] != str[str.size() - i - 1])
			return false;
	return true;
}

int main()
{
	string str;
	cin >> str;
	if (isPalindrome(str))
		cout << str << " is a Palindrome." << endl;
	else
		cout << str << " is not a Palindrome." << endl;
}
