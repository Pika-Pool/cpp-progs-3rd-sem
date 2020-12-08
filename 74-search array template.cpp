#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <cmath>
using namespace std;

template <typename T>
int findIndex(T *arr, const int n, T el)
{
	for (int i = 0; i < n; ++i)
		if (arr[i] == el)
			return i;

	return -1;
}

template <typename T>
void printArray(T *arr, const int n)
{
	cout.setf(ios::fixed);
	cout.precision(2);

	for (int i = 0; i < n; ++i)
		cout << arr[i] << ' ';

	cout << "\n";
}

int main()
{
	const int length = 10;
	int arri[length], eli;
	float arrf[length], elf;

	srand(time(0));
	for (int i = 0; i < length; ++i)
	{
		// int in range 10-100
		arri[i] = rand() % 91 + 10;
		// float in range 10-100
		arrf[i] = 10 + (float)rand() / (float)(RAND_MAX / 90);
		arrf[i] = round(arrf[i] * 100) / 100;
	}

	cout << "Integer Array:\n";
	printArray(arri, length);
	cout << "\nEnter an element to find in array:\t";
	cin >> eli;
	cout << "\t" << eli << " found at index:\t" << findIndex(arri, length, eli);

	cout << "\n\n";

	cout << "Float Array:\n";
	printArray(arrf, length);
	cout << "\nEnter an element to find in array:\t";
	cin >> elf;
	cout << "\t" << elf << " found at index:\t" << findIndex(arrf, length, elf);

	return 0;
}
