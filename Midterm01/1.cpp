#include <iostream>
#include <cassert>
using namespace std;

class LinkedList
{
public:
	LinkedList() : head(nullptr) { }
	~LinkedList();
	void addToList(int value);  		// Append to the end of the linked list
	void reverse();           		// Reverse the linked list
	void output();
	bool findNthFromLast(int N, int &value);
private:
	struct Node
	{
		int num;
		Node *next;
	};
	Node *head;
};

void LinkedList::output()
{
	Node *ptr = head;
	cout << "The elements in the list are: ";
	while (ptr != nullptr)
	{
		cout << ptr->num << " ";
		ptr = ptr->next;
	}
	cout << endl;
}

int main()
{
	LinkedList list;
	for (int i = 1; i <= 10; i++)
		list.addToList(i);

	list.output();
	list.reverse();
	list.output();
}

LinkedList::~LinkedList()
{

}

void LinkedList::addToList(int value)
{

}

void LinkedList::reverse()
{

}

bool LinkedList::findNthFromLast(int N, int &value)
{

}
