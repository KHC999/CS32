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
	int size(Node *ptr);
	int height(Node *ptr);
	int numOfLeafNodes(Node *ptr);
	int numOfNonLeafNodes(Node *ptr);
	int sumOfAllNodes(Node *ptr);
	bool hasPathSum(Node *ptr, int sum);
	void reflectBinaryTree(Node* current);
private:
	Node *m_root;
	void FreeTree(Node *cur);
};

int main()	// For Problem 7.3.1 ~ 7.3.6
{
	BinarySearchTree BST;

	BST.insert(5); BST.insert(3); BST.insert(7);
	for (int i = 0; i <= 10; i += 2)
		BST.insert(i);	// Insert 0, 2, 4, 6, 8, 10

	cout << "Size of BST is: " << BST.size(BST.getRoot()) << endl;
	cout << "Height of BST is: " << BST.height(BST.getRoot()) << endl;
	cout << "There are " << BST.numOfLeafNodes(BST.getRoot())
		<< " leaf nodes " << endl;
	cout << "There are " << BST.numOfNonLeafNodes(BST.getRoot())
		<< " non-leaf nodes " << endl;
	cout << "Sum of all nodes is: " << BST.sumOfAllNodes(BST.getRoot())
		<< endl;

	if (BST.hasPathSum(BST.getRoot(), 4))
		cout << "There is a path sum of 4" << endl;
	if (BST.hasPathSum(BST.getRoot(), 18))
		cout << "There is a path sum of 18" << endl;

}

void BinarySearchTree::FreeTree(Node *cur)
{

}

void BinarySearchTree::insert(const int value) 
{

}

int BinarySearchTree::size(Node *ptr)
{
	if (ptr == nullptr)
		return 0;

	return ________________________________
}


int BinarySearchTree::sumOfAllNodes(Node *ptr)
{
	if (ptr == nullptr)
		return 0;

	return ________________________________
}


int BinarySearchTree::height(Node *ptr)
{
	if (ptr == nullptr)
		return 0;

	int left_height = ________________________

	int right_height = ________________________

	if (________________________)

		return ________________________
	else

		return ________________________
}


int BinarySearchTree::numOfLeafNodes(Node *ptr)
{
	if (ptr == nullptr)
		return 0;

	if (________________________)
		return 1;

	return ________________________________________________
}


int BinarySearchTree::numOfNonLeafNodes(Node *ptr)
{
	if (ptr == nullptr || (________________________________________________))
		return 0;

	return ___________________________________________________________
}


bool BinarySearchTree::hasPathSum(Node *ptr, int sum)
{
	if (ptr == nullptr && sum == 0)

		________________________
	if (ptr == nullptr && sum != 0)

		________________________

	return	hasPathSum(__________________________________) ||

			hasPathSum(__________________________________);
}


void BinarySearchTree::reflectBinaryTree(Node* current)
{
	Node *temp;
	if (current != nullptr)
	{












	}
}