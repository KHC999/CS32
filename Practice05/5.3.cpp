#include <iostream>
using namespace std;
template<typename T>
T min(T* begin, T* end)
{
	T min_value = *begin++;







	return min_value;
}
// Write your max() function implementation below…













int main()
{
	double arr[] = {  5.5, 4.5, 3.5, 2.5, 1.5 };
	int values[] = {  1, 2, 3, 4, -1, 5 };
	cout << "min of arr[] is : " << min(arr, arr + 5) << endl;
	cout << "min of values[] is : " << min(values, values + 6) << endl;
	cout << "max of arr[] is : " << max(arr, arr + 5) << endl;
	cout << "max of values[] is : " << max(values, values + 6) << endl;
	cout << "min of the first 2 elements in arr : " << min(arr, arr + 2) << endl;
}
