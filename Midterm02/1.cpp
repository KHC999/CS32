#include <iostream>
#include <vector>
using namespace std;

bool isQueue(const vector<int>& seq1, const vector<int>& seq2)
{

















}

bool isStack(const vector<int>& seq1, const vector<int>& seq2)
{
















}


int main()
{
	int numberOfValues;

	while (cin >> numberOfValues)  // leave loop if there is no next test case
	{
		vector<int> v1, v2;

		for (int i = 0; i < numberOfValues; i++) {
			int value;
			cin >> value;
			v1.push_back(value);
		}

		for (int i = 0; i < numberOfValues; i++) {
			int value;
			cin >> value;
			v2.push_back(value);
		}

		bool s = isStack(v1, v2);
		bool q = isQueue(v1, v2);

		if (s) {
			if (q)
				cout << "Either a Stack or a Queue!" << endl;
			else
				cout << "This is a Stack!" << endl;
		}
		else {
			if (q)
				cout << "This is a Queue!" << endl;
			else
				cout << "Neither a Stack nor a Queue!" << endl;
		}
	}
}
