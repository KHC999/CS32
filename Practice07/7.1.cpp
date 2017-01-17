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
	void preorder(Node *ptr);
	void inorder(Node *ptr);
	void postorder(Node *ptr);
	void levelorder();
	int GetMin(Node *pRoot);
	int GetMax(Node *pRoot);
	bool Search(int V, Node *ptr);
private:
	Node *m_root;
	void FreeTree(Node *cur);
};
int main() {
	BinarySearchTree BST;
	BST.insert(5); BST.insert(3); BST.insert(7);
	for (int i = 0; i <= 10; i += 2)
		BST.insert(i); // Insert 0, 2, 4, 6, 8, 10

	BST.preorder(BST.getRoot());  cout << endl;
	BST.inorder(BST.getRoot());  cout << endl;
	BST.postorder(BST.getRoot());  cout << endl;
	BST.levelorder(); cout << endl;
	cout << "Minimal value is: " << BST.GetMin(BST.getRoot()) << endl;
	cout << "Maximal value is: " << BST.GetMax(BST.getRoot()) << endl;
}
void BinarySearchTree::FreeTree(Node *cur) 
{

}
void BinarySearchTree::insert(const int value) 
{

}
void BinarySearchTree::preorder(Node *ptr) 
{

}
void BinarySearchTree::inorder(Node *ptr) 
{

}
void BinarySearchTree::postorder(Node *ptr) 
{

}
bool BinarySearchTree::Search(int V, Node *ptr) 
{

}
void BinarySearchTree::levelorder() 
{

}
int BinarySearchTree::GetMin(Node *pRoot) 
{

}
int BinarySearchTree::GetMax(Node *pRoot) 
{

}