#include <iostream>
#include <iomanip>
#define R 3
#define C 3

using namespace std;

// take a 2D array input
void get2DArray(int arr[][C], int r, int c)
{
	cout << "Enter a " << r << "x" << c << " 2D array:\n";

	for (int i = 0; i < r; ++i)
		for (int j = 0; j < c; ++j)
			cin >> arr[i][j];
}

// calculate sum of given arrays and
// store in res which can be accessed by the caller
void sumOf2DArrays(int arr1[][C], int arr2[][C], int r, int c, int res[][C])
{
	for (int i = 0; i < r; ++i)
		for (int j = 0; j < c; ++j)
			res[i][j] = arr1[i][j] + arr2[i][j];
}

// print an array
void print2DArray(int arr[][C], int r, int c)
{
	for (int i = 0; i < r; ++i)
	{
		for (int j = 0; j < c; ++j)
			cout << right << setw(2) << arr[i][j] << ' ';
		cout << endl;
	}
}

int main()
{
	// Array of Arrays
	int arr1[R][C], arr2[R][C], sumArr[R][C];

	cout << "Array 1\n";
	get2DArray(arr1, R, C);

	cout << "\nArray 2\n";
	get2DArray(arr2, R, C);

	cout << "\narr1 + arr2 => \n";
	sumOf2DArrays(arr1, arr2, R, C, sumArr);
	print2DArray(sumArr, R, C);

	return 0;
}
