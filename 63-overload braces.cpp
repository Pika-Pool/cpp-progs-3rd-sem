#include <iostream>
using namespace std;

class IntList
{
	int list[10];

public:
	IntList() : list({0, 0, 0, 0, 0, 0, 0, 0, 0, 0}) {}

	// overloading [] operator
	// reference is returned so that assignment is possible
	// at an index
	int &operator[](int index)
	{
		if (index < 0 || index >= 10)
		{
			cout << "Out of range index\n";
		}

		return list[index];
	}
};

int main()
{
	IntList il;

	int len;
	cout << "How many integers do you need?(<=10):\t";
	cin >> len;

	cout << "Enter " << len << " integers\n";
	for (int i = 0; i < len; ++i)
		cin >> il[i]; // using the overloaded [] operator to assign a value at index

	int index;
	cout << "\nWhich index do you wish to peek?:\t";
	cin >> index;
	cout << "list[" << index << "]  =  " << il[index]; // using the overloaded [] operator to get the value at index

	return 0;
}
