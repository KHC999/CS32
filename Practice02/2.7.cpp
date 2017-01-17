#include <iostream>
#include <queue>
#include <stack>
#include <cassert>
using namespace std;
class twoStacks
{
public:
	twoStacks() { }
	void push(int value) {
		s1.push(value);
	}
	void moveFromS1toS2() {
		// Only move elements from Stack 1 to Stack 2 when Stack 2 is empty
		// because the order of elements in Stack 2 should be ordered like a Queue.
		if (s2.empty()) {
			if (s1.empty()) {
				cerr << "twoStacks are empty!" << endl;
				exit(1);
			}

			while ( _________________________ ) {

				s2.push( ________________________ );
				
				____________________________
			}
		}
	}
	int front() const {

		__________________________________

		return s2.top();
	}
	void pop() {

		__________________________________

		s2.pop();
	}
private:
	stack<int> s1; 	// push elements into s1
	stack<int> s2; 	// pop elemtns from s2
};
int main()
{
	int i;
	queue<int> q;
	twoStacks ts;
	for(i=0;i<10;i++) {		// push numbers 0~9 to the queue
		q.push(i);
		ts.push(i);
	}

	q.pop();				// pop 0 out of the queue
	ts.pop();

	for(i=10;i<20;i++) {	// push numbers 10~19 to the queue
		q.push(i);
		ts.push(i);
	}

	while( !q.empty() )  {
		assert( q.front() == ts.front() );
		q.pop();
		ts.pop();
	}
}
