#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;

// swap references of any type
template <typename T>
void swapVals(T &a, T &b)
{
	T temp = b;
	b = a;
	a = temp;
}

// print array storing any type of data
template <typename T>
void printArray(T *arr, const int n, const int green = -1)
{
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	bool toColor = (green != -1);

	cout.setf(ios::fixed);
	cout.precision(2);

	for (int i = 0; i < n; ++i)
	{
		if (toColor)
		{
			if (i >= green)
				SetConsoleTextAttribute(hConsole, 0x0a);
			else
				SetConsoleTextAttribute(hConsole, 0x07);
		}
		cout << arr[i] << ' ';
	}

	SetConsoleTextAttribute(hConsole, 0x07);
	cout << "\n";
}

// bubble sort array storing comparable type of data
template <typename T>
void bubbleSort(T *arr, const int n)
{
	for (int i = 0; i < n - 1; ++i)
	{
		printArray(arr, n, n - i);
		for (int j = 0; j < n - i - 1; ++j)
		{
			if (arr[j] > arr[j + 1])
				swapVals(arr[j], arr[j + 1]);
		}
	}
	printArray(arr, n, 0);
}

int main()
{
	const int length = 10;
	int arri[length];
	float arrf[length];

	// randomly generate array value
	srand(time(0));
	for (int i = 0; i < length; ++i)
	{
		// int in range 10-100
		arri[i] = rand() % 91 + 10;
		// float in range 10-100
		arrf[i] = 10 + (float)rand() / (float)(RAND_MAX / 90);
	}

	// INT ARRAY
	cout << "Integer Array:\n";
	printArray(arri, length);
	cout << "\nSorting Array:\n";
	bubbleSort(arri, length);

	cout << "\n\n";

	// FLOAT ARRAY
	cout << "Float Array:\n";
	printArray(arrf, length);
	cout << "\nSorting Array:\n";
	bubbleSort(arrf, length);

	return 0;
}
