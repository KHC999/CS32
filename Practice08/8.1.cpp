#include <iostream>
using namespace std;
#define NUM_BUCK   10

class ClosedHashTable
{
public:
	void insert(int idNum);
	bool search(int idNum) const;
	void output() const;
private:
	inline int hashFunc(int idNum) const
	{
		return idNum % NUM_BUCK;
	}
	struct BUCKET
	{
		int idNum;
		bool used;
		BUCKET() { used = false; idNum = -1; }
	};
	BUCKET m_buckets[NUM_BUCK];
};

int main()
{
	ClosedHashTable cht;

	for (int i = 0; i<8; i++)
		cht.insert(i + 10);		// Insert 10, 11, 12, 13, 14, 15, 16, 17
	cht.output();

	for (int i = 0; i<4; i++)		// Insert 20, 21, 22, and 23
		cht.insert(i + 20);
	cht.output();

	if (cht.search(23))
		cout << "23 is in the hash table." << endl;
}
void ClosedHashTable::insert(int idNum)
{
	int bucket = hashFunc(____________________________);
	for (int tries = 0; tries<NUM_BUCK; tries++)
	{
		if (m_buckets[bucket].used == false)
		{
			m_buckets[bucket].idNum = ________________________;
			m_buckets[bucket].used = ________________________;
			return;
		}
		bucket = (bucket + 1) % ___________________________;
	}
	cout << "no room left in hash table!!!" << endl;
}
bool ClosedHashTable::search(int idNum) const
{
	int bucket = hashFunc(____________________________);
	for (int tries = 0; tries<NUM_BUCK; tries++)
	{
		if (m_buckets[bucket].used == ___________________________)
			return false;
		if (m_buckets[bucket].idNum == _______________________)
			return true;
		bucket = (bucket + 1) % _______________________________;
	}
	return false;	// false means that idNum is not in the hash table.
}

void ClosedHashTable::output() const
{
	for (int i = 0; i<NUM_BUCK; i++)
		cout << m_buckets[i].idNum << " ";
	cout << endl;
}
