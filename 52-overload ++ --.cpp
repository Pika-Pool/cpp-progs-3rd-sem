#include <iostream>
using namespace std;

class Index
{
private:
	int val;

public:
	// convert int -> Index
	Index(int v = 0) : val(v) {}

	void input()
	{
		cout << "Enter val:\t";
		cin >> val;
	}

	void display()
	{
		cout << "Val  =  " << val << "\n";
	}

	// overloading prefix decrement operator
	friend Index operator--(Index &k)
	{
		return Index(--k.val);
	}

	// overloading postfix decrement operator
	friend Index operator--(Index &k, int)
	{
		return Index(k.val--);
	}

	// overloading prefix increment operator
	friend Index operator++(Index &k)
	{
		return Index(++k.val);
	}

	// overloading postfix increment operator
	friend Index operator++(Index &k, int)
	{
		return Index(k.val++);
	}
};

int main()
{
	Index i1;
	i1.input();

	cout << "Before operations:\n";
	i1.display();

	cout << "\n\n";

	// =============================================================
	cout << "On postfix decrement:\n";
	(i1--).display(); // using postfix decrement opertor
	cout << "After postfix decrement:\n";
	i1.display();

	cout << "\n\n";

	// =============================================================
	cout << "On prefix decrement:\n";
	(--i1).display(); // using prefix decrement opertor
	cout << "After prefix decrement:\n";
	i1.display();

	cout << "\n\n";

	// =============================================================
	cout << "On postfix increment:\n";
	(i1++).display(); // using postfix increment opertor
	cout << "After postfix increment:\n";
	i1.display();

	cout << "\n\n";

	// =============================================================
	cout << "On prefix increment:\n";
	(++i1).display(); // using prefix increment opertor
	cout << "After prefix increment:\n";
	i1.display();

	return 0;
}
