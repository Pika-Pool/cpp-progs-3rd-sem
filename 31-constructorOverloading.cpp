#include <iostream>
using namespace std;

class Room
{
private:
	double length, breadth;

public:
	// 1. Constructor with no arguments
	Room()
	{
		length = 6.9;
		breadth = 4.2;
	}

	// 2. Constructor with two arguments
	Room(double l, double b)
	{
		length = l;
		breadth = b;
	}

	// 3. Constructor with one argument
	Room(double len)
	{
		length = len;
		breadth = 7.2;
	}

	// 4. Copy constructor
	Room(const Room &r)
	{
		this->length = r.length;
		this->breadth = r.breadth;
	}

	double calcArea()
	{
		return length * breadth;
	}
};

int main()
{
	Room room1, room2(8.2, 6.6), room3(8.2);

	// NO ARGUMENT
	cout << "When no argument is passed:" << endl;
	cout << "Area of room = " << room1.calcArea() << endl;

	// ==========================================================================
	// LENGTH AND BREADTH PASSED
	cout << "\nWhen (8.2, 6.6) is passed:" << endl;
	cout << "Area of room = " << room2.calcArea() << endl;

	// ==========================================================================
	// LENGTH PASSED, BREADTH FIXED
	cout << "\nWhen breadth is fixed to 7.2 and (8.2) is passed:" << endl;
	cout << "Area of room = " << room3.calcArea() << endl;

	// ==========================================================================
	Room room4(room2), room5 = room3;
	// COPY CONSTRUCTOR
	cout << "\nWhen copy constructor is used:" << endl;
	cout << "Area of room = " << room4.calcArea() << endl;

	// ==========================================================================
	// OBJECT ASSIGNMENT
	cout << "\nWhen object assignment is used:" << endl;
	cout << "Area of room = " << room5.calcArea() << endl;

	return 0;
}
