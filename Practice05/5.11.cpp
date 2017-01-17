#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> vec;

	for (int i = 0; i<5; i++)
		vec.push_back(i);

	vector<int>::iterator it = vec.begin();

	while (it <= vec.end()) 		// Hmmm….?
	{
		cout << *it << endl;
		it++;
	}
}
