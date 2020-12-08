#include <iostream>
#include <iomanip>
using namespace std;

class Matrix
{
private:
	// a pointer to pointer
	int **arr;
	int row, col;

	void inputDimensions()
	{
		cout << "Enter number of rows:\t\t";
		cin >> row;
		cout << "Enter number of columns:\t";
		cin >> col;
		cout << "\n";
	}

public:
	Matrix()
	{
		inputDimensions();
		dynamicallyAllocateMatrix();
	}

	Matrix(int r, int c)
	{
		row = r;
		col = c;

		dynamicallyAllocateMatrix();
	}

	void dynamicallyAllocateMatrix()
	{
		// dynamically allocate an array of arrays
		arr = new int *[row];
		for (int i = 0; i < row; ++i)
			arr[i] = new int[col];
	}

	void inputValues()
	{
		cout << "Enter a " << row << "x" << col << " matrix\n";
		for (int i = 0; i < row; ++i)
			for (int j = 0; j < col; ++j)
				cin >> arr[i][j];
	}

	void output()
	{
		cout << "\nThe matrix is = \n";
		for (int i = 0; i < row; ++i)
		{
			for (int j = 0; j < col; ++j)
				cout << right << setw(2) << arr[i][j] << ' ';

			cout << "\n";
		}
	}

	~Matrix()
	{
		// deallocate an array of arrays of size row/col
		for (int i = 0; i < col; ++i)
			delete[] arr[i];

		delete[] arr;
	}
};

int main()
{
	Matrix m1;
	m1.inputValues();
	m1.output();

	return 0;
}
