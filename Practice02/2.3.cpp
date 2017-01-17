#include <iostream>
using namespace std;
class Stack  {
public:
	Stack()  {  head = nullptr; }
	Stack(const Stack &s);
	~Stack();
	void push(int n);
	void pop();
	int top() const;
	bool empty() const;
	Stack& operator=(const Stack& s);
private:
	struct Node {
		Node *next;
		int value;
		Node(int v, Node* n) : value(v), next(n) { }	// There is no default constructor!
	};
	Node *head;
};
int main()
{
	Stack A;
	for(int i=0;i<5;i++)    
A.push(i);
	Stack B(A);			// This uses the copy constructor
	Stack C;
	C = A;				// This uses the assignment operator
	while( !C.empty() ) {
		cout << C.top() << endl;
		C.pop();
	}
}
Stack::~Stack() 
{ 
	while(head != nullptr) {   // Please add codes below






	}
}
void Stack::push(int n) 
{	// Please add codes below

	




}

int Stack::top() const
{
	if( empty() ) {
		cout << "Stack is empty!!" << endl;
		exit(1);		
	}
	// Please add code(s) below




}

bool Stack::empty() const
{	// Please add code(s) below

	




}

void Stack::pop() 
{
	if( empty() ) {
		cout << "Stack is empty!!" << endl;
		return ;
	}	
// Please add code(s) below





}
Stack::Stack(const Stack &s)
{	
	if(s.head == nullptr)
	{
		head = nullptr;
		return ;
	}
	head = new Node(s.head->value, nullptr);

	// Please add codes below












}

Stack& Stack::operator=(const Stack& s) 
{
	if(&s != this) 
	{	// Please add codes below
		













	}
	return *this;
}
