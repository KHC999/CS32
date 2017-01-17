#include <iostream>
#include <queue>
#include <stack>
#include <cassert>
using namespace std;
class twoQueues {
public:
	twoQueues() { }
	void push(int value);
	int pop();
private:
	queue<int> q1;
	queue<int> q2;
};

int main() {
	int i;
	stack<int> s;
	twoQueues tq;

	for(i=0;i<10;i++)  {
		s.push(i);
		tq.push(i);
	}
	for(i=0;i<10;i++)  {
		assert( s.top() == tq.pop() );
		s.pop();
	}
}

void twoQueues::push(int value)  {
	// push into q1 if both are empty.
	if (q1.empty() && q2.empty())
		q1.push(value);
	// push into q2 if q1 is empty
	else if (q1.empty() && !q2.empty())
		q2.push(value);
	// push into q1 if q2 is empty
	else if (!q1.empty() && q2.empty())
		q1.push(value);	
else {
		cerr << "Error: Both queues have values!" << endl;
		exit(1);
	}
}
// The idea is to pop the last element in q1 or q2 depending on whether
// q1 or q2 is empty. This is how to simulate a stack with 2 queues.
int twoQueues::pop() {
	if( q1.empty() && q2.empty() ) {
		cerr << "Error: Both queues are empty!" << endl;
		exit(1);
	}
	else if( q1.empty() && !q2.empty() ) {
		int temp;
		while ( _________________________ ) {

			temp = _________________________
			q2.pop();

			if ( _________________________ )
				return temp;

			q1.push( _________________________ );
		}
	}
	else if( !q1.empty() && q2.empty() ) {
		int temp;
		while ( _________________________ )
		{
			temp = _________________________
			q1.pop();

			if ( _________________________ )
				return temp;

			q2.push( _________________________ );
		}
	}
	else {
		cerr << "Error: Both queues have values!" << endl;
		exit(1);
	}
}
