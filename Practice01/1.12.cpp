#include <iostream>
using namespace std;
// You cannot use strcpy(), strcat() or strcmp() functions.

class mystring
{
public:
	mystring() { str = new char[1];  str[0] = '\0';  length = 0; }
	mystring(const char *source);
	mystring(const mystring& s);
	mystring& operator= (const mystring& s);
	~mystring();
	int size() const;    		// return length back;
	char* c_str();	    		// return c-string back
private:
	char *str;
	int length;
};

mystring::~mystring()
{

}

inline int mystring::size() const
{

}

inline char* mystring::c_str()
{

}

mystring::mystring(const char *source)
{

}

mystring::mystring(const mystring& s)
{

}

mystring& mystring::operator=(const mystring& s)
{

}

int main()
{
	int i;
	mystring *s[2];           	// What does this mean? Please explain it.
	for (i = 0; i<2; i++)
		s[i] = new mystring();  	// What does this mean? Please explain it.
	*s[0] = "Review";			// What does this mean? Please explain it.
	*s[1] = "Session";

	cout << s[0]->c_str() << " " << s[1]->c_str() << endl;

	*s[0] = "For";
	*s[1] = "CS32";
	cout << s[0]->c_str() << " " << s[1]->c_str() << endl;

	for (i = 0; i<2; i++)
		delete s[i];           // What does this mean? Please explain it.
}
