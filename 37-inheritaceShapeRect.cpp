#include <iostream>
#include <cstring>
using namespace std;

class Shape // can be any shape
{
protected:
	char label[15];

public:
	Shape(char label[])
	{
		strcpy(this->label, label);
	}
};

// Rectangle inherits from Shape
class Rectangle : private Shape
{
	double length, breadth;

public:
	Rectangle(char label[], int l = 0, int b = 0) : Shape(label) // calling the Shape contructor
	{
		length = l;
		breadth = b;
	}

	void inputDimensions()
	{
		cout << "Input dimensions of " << label;
		cout << "\nLength = ";
		cin >> length;

		cout << "Breadth = ";
		cin >> breadth;
	}

	double calcArea()
	{
		return length * breadth;
	}

	char *getLabel()
	{
		return label;
	}
};

int main()
{
	char label[20];
	cout << "Enter a label for the rectangle:\t";
	cin >> label;
	cout << "\n\n";

	Rectangle r1(label);
	r1.inputDimensions();

	cout << "\nArea of shape " << r1.getLabel() << " = " << r1.calcArea();

	return 0;
}
