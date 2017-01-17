#include <iostream>
using namespace std;

class Person 
{
public:
	void Play() 
	{ 	cout << "Person::Play" << endl; 			};
	void Study() 
	{  	cout << "Person::Study" << endl; 			}
};

class Student: public Person 
{
public:
	virtual void Study() 
	{ 	cout << "Student::Study" << endl;			}
};

class CS_Student : public Student 
{
public:
	void Play() 
	{  	cout << "CS_Student::Play!" <<endl;		}	
	void Study() 
	{  	cout << "CS_Student::Study!" << endl; 	}
};

void activity( Student &s )  
{
	s.Play();  
	s.Study();
}

int main()  
{	
	CS_Student cs_student;	
	activity(cs_student);
}
