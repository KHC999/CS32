#include <iostream>
#include <list>
#define NUM_BUCK   10
using namespace std;

class OpenHashTable
{
public:
	void insert(int idNum);
	bool search(int idNum);
	void output();
private:
	inline int hashFunc(int idNum) const
	{
		return idNum % NUM_BUCK;
	}
	struct BUCKET
	{
		list<int> idNum;
	};
	BUCKET m_buckets[NUM_BUCK];
};
int main()
{
	OpenHashTable oht;
	for (int i = 10; i<30; i++)
		oht.insert(i);
	oht.output();
	cout << "---------------" << endl;
	if (oht.search(29))
		cout << "29 is in the open hash table." << endl;
}
void OpenHashTable::insert(int idNum)
{
	int bucket = hashFunc(idNum);

	m_buckets[bucket].idNum.push_back(idNum);
}

bool OpenHashTable::search(int idNum)
{
	int bucket = hashFunc(idNum);

	list<int>::iterator it = m_buckets[bucket].__________________________;

	for (; it != m_buckets[bucket]._________________________________; it++)
		if (*it == idNum)
			return true;	// idNum is in the hash table

	return false;			// false means idNum is not in the hash table
}

void OpenHashTable::output()
{
	for (int i = 0; i < NUM_BUCK; i++)
	{
		cout << i << ": ";

		list<int>::iterator it = m_buckets[i]._____________________________;

		for (; it != m_buckets[i].___________________________________; it++)
			cout << *it << " ";
		cout << endl;
	}
}
