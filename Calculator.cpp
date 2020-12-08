#include <iostream>
using namespace std;

class Calculator
{
private:
	float x, y;

	void calculate(char operation)
	{
		switch (operation)
		{
		case '+':
			cout << "Sum = " << add();
			break;
		case '-':
			cout << "Difference = " << sub();
			break;
		case '*':
			cout << "Product = " << mul();
			break;
		case '/':
			cout << "Result = " << div();
			break;
		default:
			cout << "Invalid Input!!";
		}
	}

public:
	float add()
	{
		return x + y;
	}
	float sub()
	{
		return x - y;
	}
	float mul()
	{
		return x * y;
	}
	float div()
	{
		return x / y;
	}

	void input()
	{
		cout << "Enter operand-1:\t";
		cin >> x;
		cout << "Enter operand-2:\t";
		cin >> y;

		char operation;
		cout << "Enter operation(+, -, *, /):\t";
		cin >> operation;
		calculate(operation);
	}
};

int main()
{
	Calculator c1;
	c1.input();

	return 0;
}
