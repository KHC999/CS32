#include <iostream >
#include <algorithm>
using namespace std;

int Partition(int a[], int low, int high)
{
	int pi = low;
	int pivot = a[low];
	do {
		while (low <= high && a[low] <= pivot)

			________________________
			while (a[high] > pivot)
				high--;
		if (low < high)
			swap(_______________________________________________);
	} while (low < high);

	swap(_____________________________________);
	pi = high;
	return (pi);
}

void QuickSort(int Array[], int First, int Last)
{
	if (Last - First >= 1)
	{
		int PivotIndex;
		PivotIndex = Partition(Array, First, Last);
		QuickSort(Array, First, PivotIndex - 1); 		// left 
		QuickSort(Array, PivotIndex + 1, Last);  		// right
	}
}

int main()
{
	int values[12] = { 4,7,1,5,3,2,0,8,6,9,11,10 };

	QuickSort(values, 0, 11);

	for (int i = 0; i<12; i++)
		cout << values[i] << " ";
	cout << endl;
}
