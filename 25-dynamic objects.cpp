#include <iostream>
using namespace std;

class Dynam
{
private:
	int x, y;

public:
	void input()
	{
		cout << "Enter x:\t";
		cin >> x;

		cout << "Enter y:\t";
		cin >> y;
	}

	void output()
	{
		cout << "x = " << x << "\n";
		cout << "y = " << y << "\n";

		cout << "x + y"
			 << " = " << x + y;
		cout << '\n';

		cout << "x - y"
			 << " = " << x - y;
		cout << '\n';
	}
};

int main()
{
	int size = 3;

	// dynamically allocate block of memory
	// each unit is of type Dynam
	Dynam *p = new Dynam[size];

	cout << "Object - " << 1 << endl;
	p[0].input();
	p[0].output();
	cout << "\n\n";

	cout << "Object - " << 2 << endl;
	(p + 1)->input();
	(p + 1)->output();
	cout << "\n\n";

	cout << "Object - " << 3 << endl;
	(*(p + 2)).input();
	(*(p + 2)).output();
	cout << "\n\n";

	// deallocate the block of memory
	delete[] p;

	return 0;
}
