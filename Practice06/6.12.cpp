#include <iostream >
using namespace std;

void merge(int data[], int n1, int n2)
{
	int i = 0, j = 0, k = 0;
	int *temp = new int[n1 + n2];
	int *secondHalf = data + n1;

	while (i < n1 || j < n2)
	{
		if (i == n1)
			temp[k++] = secondHalf[j++];
		else if (j == n2)
			temp[k++] = data[i++];
		else if (data[i] < secondHalf[j])
			temp[k++] = data[i++];
		else
			temp[k++] = secondHalf[j++];
	}
	for (i = 0; i<n1 + n2; i++)
		data[i] = temp[i];
	delete[] temp;
}
void MergeSort(int Arr[], int left, int right)
{
	if (left < right)
	{
		int middle = left + (right - right) / 2;
		MergeSort(Arr, left, middle);
		MergeSort(Arr, middle + 1, right);

		merge(Arr __________________________, middle - left + 1, right - middle);
	}
}
int main()
{
	int values[12] = { 4,7,1,5,3,2,0,8,6,9,11,10 };
	MergeSort(values, 0, 11);
	for (int i = 0; i<12; i++)
		cout << values[i] << " ";
	cout << endl;
}
