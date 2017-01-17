#include <iostream>
using namespace std;

class Queue {
public:
	Queue() { head = tail = nullptr; }
	Queue(const Queue &s);
	~Queue();
	void push(int n);
	void pop();
	int front() const;
	bool empty() const;
	Queue& operator=(const Queue& s);
private:
	struct Node {
		Node *prev, *next;
		int value;
		Node(int v, Node *prv, Node* nxt) : value(v), prev(prv), next(nxt) { }
	};
	Node *head, *tail;
};

int main()
{
	Queue A;
	for (int i = 0; i<5; i++)
		A.push(i);
	Queue B(A);
	Queue C;
	C = B;
	while (!C.empty()) {
		cout << C.front() << endl;
		C.pop();
	}
}

Queue::~Queue()
{
	while ( __________________________ ) {
		Node *temp = head;
		head = head->next;
		delete temp;
	}
}
void Queue::push(int n)
{
	if ( ________________________ )
		head = tail = new Node(n, nullptr, nullptr);
	else {
		tail->next = new Node(n, tail, nullptr);

		tail = _________________________
	}
}

int Queue::front() const
{
	if (empty()) {
		cout << "Queue is empty!!" << endl;
		exit(1);
	}
	return _________________________
}

bool Queue::empty() const
{
	if (head == __________________ )
		return true;
	return false;
}

void Queue::pop()
{
	if (empty()) {
		cout << "Queue is empty!!" << endl;
		return;
	}
	Node *temp = head;
	head = head->next;
	if (head != nullptr)
		head->prev = nullptr;

	delete _________________________
}

 
Queue::Queue(const Queue &s)
{
	if (s.empty())
	{
		head = nullptr;
		return;
	}
	tail = head = new Node( ________________________________________ );

	for (Node* source = s.head->next, *dest = head; source != nullptr;
		source = source->next, dest = dest->next)
	{
		dest->next = new Node(source->value, dest, nullptr);

		tail = __________________________________
	}
}

Queue& Queue::operator=(const Queue& s)
{
	if (&s != this)
	{
		if (s.head == nullptr)
		{
			head = nullptr;
			return *this;
		}
		tail = head = new Node( ________________________________________ );

		for (Node* source = s.head->next, *dest = head; source != nullptr;
			source = source->next, dest = dest->next)
		{
			dest->next = new Node(source->value, dest, nullptr);

			tail = _______________________________
		}
	}
	return *this;
}
