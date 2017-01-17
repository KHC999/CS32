#include <iostream>
#include <cassert>
using namespace std;

class LinkedList
{
public:
	LinkedList() : head(nullptr) { }
	~LinkedList()
	{
		Node *temp;
		while (head != nullptr)
		{
			temp = head;
			head = head->next;
			delete temp;
		}
	}
	void append(int value) // Append to the end of the linked list
	{
		Node *current = new Node(value, nullptr);
		if (head == nullptr)
			head = current;
		else
		{
			Node *ptr = head;
			while (ptr->next != nullptr)
				ptr = ptr->next;
			ptr->next = current;
		}
	}
	int JosephusCircle(int N);
private:
	struct Node
	{
		int num;
		Node *next;
		Node(int n, Node* ptr) : num(n), next(ptr) {}
	};
	Node *head;
};

int LinkedList::JosephusCircle(int N)
{
	Node* ptr = head;
	Node* prev = nullptr;
	int count;
	while (head->next != nullptr)
	{
		for (count = 1; count<N; count++)
		{

			_________________________________


				_________________________________

				if (ptr == nullptr)

					_________________________________

		}

		Node *temp = ptr;

		if (head == ptr)

			_________________________________
		else

			_________________________________

			ptr = ptr->next;

		if (ptr == nullptr)

			_________________________________


			delete temp;      // see you on the other side …
	}

	return head->num;
}


int main()
{
	int i, N;
	for (N = 1; N <= 7; N++)
	{
		LinkedList circle;

		for (i = 1; i <= N; i++)   // Append Number 1 through N to the Linked List
			circle.append(i);

		cout << "Number " << circle.JosephusCircle(2); // Every 2nd person is @!#%^

		cout << " is the last guy standing." << endl;
	}
}
