#include <iostream >
#include <algorithm>
using namespace std;

void bubbleSort(int Arr[], int n, int stop)
{
	int start = 0;
	bool atLeastOneSwap;
	do
	{
		atLeastOneSwap = false;

		for (int j = 0; j < (n - 1); j++)
		{
			if (Arr[j] > Arr[j + 1])
			{
				swap(Arr[j], Arr[j + 1]);
				atLeastOneSwap = true;
			}
		}
		start = start + atLeastOneSwap;
		if (start == stop)
			return;
	} while (atLeastOneSwap == true);
}

int main()
{
	int values[12] = { 4,7,1,5,3,2,0,8,6,9,11,10 };

	bubbleSort(values, 12, 3);
	// In other words, what is the order of the values after 3 iterations?
	// After 3 iterations, the 3 biggest numbers should be sorted in ascending order and 
	// placed at the end of the array. The rest of the numbers in the array will not be 
	// bigger than any of the 3 sorted numbers at the end of the array.

	for (int i = 0; i<12; i++)
		cout << values[i] << " ";
	cout << endl;
}
