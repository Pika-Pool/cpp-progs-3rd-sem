#include <iostream>
#include <limits>
using namespace std;

// input array of generic type from user
template <typename T>
void input(T *arr, const int n)
{
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}
}

// print sum, min, max of array
template <typename T>
void sum_min_max(T *arr, const int n)
{
	T min = numeric_limits<T>::max();
	T max = numeric_limits<T>::min();
	T sum = 0;

	for (int i = 0; i < n; ++i)
	{
		if (arr[i] < min)
			min = arr[i];
		if (arr[i] > max)
			max = arr[i];

		sum += arr[i];
	}

	cout << "Sum:\t" << sum;
	cout << "\nMin:\t" << min;
	cout << "\nMax:\t" << max;
}

// print array of any type
template <typename T>
void printArray(T *arr, const int n)
{
	cout << "Array:\n";
	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << ' ';
	}
	cout << "\n";
}

int main()
{
	// INTEGER ARRAY
	const int length = 10;
	int arri[length];
	cout << "Enter an integer array of length: " << length << "\n";
	input(arri, length);
	cout << "\n\n";
	printArray(arri, length);
	sum_min_max(arri, length);

	cout << "\n\n";

	// FLOAT ARRAY
	float arrf[length];
	cout << "Enter an floating point array of length: " << length << "\n";
	input(arrf, length);
	cout << "\n\n";
	printArray(arrf, length);
	sum_min_max(arrf, length);

	return 0;
}
