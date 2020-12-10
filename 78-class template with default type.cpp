#include <iostream>
using namespace std;

// template with default type
template <typename T = double>
class Calculator
{
	T op1, op2;

public:
	Calculator(T op1, T op2) : op1(op1), op2(op2)
	{
		cout << "Operands are:\t" << op1 << ", " << op2;
	}

	void add()
	{
		cout << op1 << " + " << op2 << "  =  " << op1 + op2 << '\n';
	}

	void subtract()
	{
		cout << op1 << " - " << op2 << "  =  " << op1 - op2 << '\n';
	}

	void multiply()
	{
		cout << op1 << " * " << op2 << "  =  " << op1 * op2 << '\n';
	}

	void divide()
	{
		cout << op1 << " / " << op2 << "  =  " << op1 / op2 << '\n';
	}
};

int main()
{
	// DOUBLE
	double op1, op2;
	cout << "Enter operands(double):\t";
	cin >> op1 >> op2;
	// using default explicit type = double
	Calculator calc1(op1, op2);

	cout << "\n";
	calc1.add();
	calc1.subtract();
	calc1.multiply();
	calc1.divide();

	cout << "\n\n";

	// INT
	int op3, op4;
	cout << "Enter operands(int):\t";
	cin >> op3 >> op4;
	// using implicit type
	Calculator<int> calc2(op3, op4);

	cout << "\n";
	calc2.add();
	calc2.subtract();
	calc2.multiply();
	calc2.divide();

	return 0;
}
