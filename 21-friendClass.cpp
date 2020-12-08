#include <iostream>

using namespace std;

class Square
{
	friend class Rectangle; // declaring Rectangle as friend class
	int side;

public:
	Square(int s = 0)
	{
		side = s;
	}

	void input()
	{
		cout << "Enter length of square:\t";
		cin >> side;
	}
};

class Rectangle
{
	int length;
	int breadth;

public:
	int getArea()
	{
		return length * breadth;
	}
	void shape(Square s) // can access private members of Square object s
	{
		s.input();
		length = s.side;
		breadth = s.side;
	}
};

int main()
{
	Square square;
	Rectangle rectangle;

	rectangle.shape(square);
	cout << "Area of rectangle = " << rectangle.getArea() << endl;

	return 0;
}
