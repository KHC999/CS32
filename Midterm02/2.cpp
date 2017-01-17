#include <iostream>
using namespace std;

class LinkedList
{
public:
	LinkedList() : head(nullptr) { }
	~LinkedList();
	void append(int value);		// append value to the list
	void print() const;			// show the items in the list
	void printReverse() const;	// show the items in the list in the opposite order
	void reverse();				// change list so items are in the opposite order
	int sum() const;			// return the sum of the values in the list
private:
	struct Node
	{
		int num;
		Node* next;
	};
	Node* head;  // this is the only data member; do not add any others

	void printReverseHelper(const Node* p) const;
	Node* reverseHelper(Node* current, Node* previous);
	int sumHelper(const Node* p) const;
	void removeNodes(Node* p);
};

int main()
{
	LinkedList list;
	cout << list.sum() << endl;		// writes 0
	int values[4] = { 30, 10, 40, 20 };
	for (int i = 0; i < 4; i++)
		list.append(values[i]);
	list.print();					// writes  30 10 40 20
	cout << list.sum() << endl;		// writes  100
	list.printReverse();				// writes  20 40 10 30
	list.print();					// writes  30 10 40 20 (list wasn’t changed)
	list.reverse();					// this changes the list
	list.print();					// writes  20 40 10 30
}

void LinkedList::append(int value)
{
	Node* current = new Node;
	current->num = value;
	current->next = nullptr;
	if (head == nullptr)
		head = current;
	else {
		Node* ptr = head;
		while (ptr->next != nullptr)
			ptr = ptr->next;
		ptr->next = current;
	}
}

void LinkedList::print() const
{
	for (const Node* ptr = head; ptr != nullptr; ptr = ptr->next)
		cout << ptr->num << " ";
	cout << endl;
}

void LinkedList::printReverse() const
{
	printReverseHelper(________________________);
	cout << endl;
}

void LinkedList::printReverseHelper(const Node* p) const
{
	if (________________________________)
		return;

	printReverseHelper(___________________________);

	cout << _______________________________ << " ";
}

void LinkedList::reverse()
{
	head = reverseHelper(head, ______________________);
}
LinkedList::Node* LinkedList::reverseHelper(Node* current, Node* previous)
{
	if (_______________________________)
		return previous;
	Node* last_node = reverseHelper(current->next, __________________);

	current->next = ______________________;

	return _____________________;
}

int LinkedList::sum() const
{
	return sumHelper(head);
}
int LinkedList::sumHelper(const Node* p) const
{




}

LinkedList::~LinkedList()
{
	removeNodes(head);
}

void LinkedList::removeNodes(Node* p)
{





}

