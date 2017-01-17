#define _CRT_SECURE_NO_WARNINGS // To suppress Visual C++ error messages
									// on the use of strcpy()
#include <iostream>
#include <cstring>
using namespace std;

class student 
{
public:
	student(const char *name, const double &score) {
		this->name = new char[strlen(name)+1];
		strcpy(this->name, name);
		this->score = score;
	}
	student(const student &st) {
		this->name = new char[strlen(st.name)+1];
		strcpy(this->name,st.name);
		this->score = st.score;
	}
	void output() {
		cout << "Student's name is: " << name << endl;
		cout << "Score is : " << score << endl;
	}
	~student() {	delete [] name;		}
private:
	char *name;
	double score;
};

int main() 
{
	student A("ABC",100);
	student B = A;
	B.output();
	student *C = &A;
	C->output();
	B = A;         // Does this use copy constructor or assignment operator?
	B.output();
}

