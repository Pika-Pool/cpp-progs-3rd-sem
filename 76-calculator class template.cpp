#include <iostream>
using namespace std;

template <typename T>
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
	int op1, op2;
	cout << "Enter operands(int):\t";
	cin >> op1 >> op2;
	Calculator<int> calc(op1, op2);

	cout << "\n";
	calc.add();
	calc.subtract();
	calc.multiply();
	calc.divide();

	return 0;
}
