#include <iostream>
#include <queue>
using namespace std;

struct Node {
	Node(const int &myVal) {
		value = myVal;
		left = right = nullptr;
	}
	int value;
	Node *left, *right;
};

class BinarySearchTree {
public:
	BinarySearchTree() { m_root = nullptr; }
	~BinarySearchTree() { FreeTree(m_root); }
	Node* getRoot() { return m_root; }
	void insert(const int value);
	void reflectBinaryTree(Node* current);
private:
	Node *m_root;
	void FreeTree(Node *cur);
};

void BinarySearchTree::FreeTree(Node *cur) 
{

}

void BinarySearchTree::insert(const int value) 
{

}

void BinarySearchTree::reflectBinaryTree(Node* current)
{
	Node *temp;
	if (current != nullptr)
	{












	}
}


bool isReflection(Node *curr1, Node *curr2)
{

	if (curr1 == nullptr && curr2 == nullptr)

		_________________________________________

	if (curr1 && curr2)
	{
		return 	________________________________________________ &&

			________________________________________________ &&

			_________________________________________________;
	}
	else
		return false;
}


int main()
{
	BinarySearchTree BST_A, BST_B;

	BST_A.insert(5); BST_A.insert(3); BST_A.insert(7);
	for (int i = 0; i <= 10; i += 2)
		BST_A.insert(i);

	BST_B.insert(5); BST_B.insert(3); BST_B.insert(7);
	for (int i = 0; i <= 10; i += 2)
		BST_B.insert(i);
	BST_B.reflectBinaryTree(BST_B.getRoot());

	if (isReflection(BST_A.getRoot(), BST_B.getRoot()))
		cout << "BST_A is the reflection of BST_B!" << endl;
	else
		cout << "BST_A is NOT the reflection of BST_B!" << endl;
}
