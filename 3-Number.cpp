#include <iostream>
using namespace std;

class Number
{
private:
	int i, j;

	int return_larger()
	{
		return i > j ? i : j;
	}

public:
	void get()
	{
		cout << "Enter numbre 1:\t";
		cin >> i;

		cout << "Enter numbre 2:\t";
		cin >> j;
	}

	void put()
	{
		cout << "Larger of the two numbers = " << return_larger();
	}
};

int main()
{
	Number n1;
	n1.get();
	cout << "\n\n";
	n1.put();

	return 0;
}
