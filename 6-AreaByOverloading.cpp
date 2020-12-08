/*
* V. Sriram
* 10314902019
*/

#include <iostream>
#define PI 3.14159265358979323846264

using namespace std;

// function overloading used

// square
void area(int side)
{
	cout << "Area = " << side * side << "\n";
}

// circle
void area(float radius)
{
	cout << "Area = " << radius * radius * PI << "\n";
}

// rectangle and triangle
// both rectangle and triangle require 2 parameters for area
// pass half=0.5 to calculate area of triangle
void area(int x, int y, float half = 1.0)
{
	cout << "Area = " << x * y * half << "\n";
}

int main()
{
	// this is a menu driven program

	// the loop breaks when user enters
	// anything other than y or Y
	char toContinue = 'y';
	while (toContinue == 'y' || toContinue == 'Y')
	{
		cout << "Calculate area of:\n";
		cout << "1. Square\n";
		cout << "2. Rectangle\n";
		cout << "3. Circle\n";
		cout << "4. Triangle\n";

		// choice is the index of options printed above
		int choice;
		cin >> choice;

		switch (choice)
		{
		case 1:
			int side;
			cout << "Enter side length:\t";
			cin >> side;
			area(side);
			break;

		case 2:
			int length, breadth;
			cout << "Enter length:\t";
			cin >> length;
			cout << "Enter breadth:\t";
			cin >> breadth;
			area(length, breadth);
			break;

		case 3:
			float radius;
			cout << "Enter radius length:\t";
			cin >> radius;
			area(radius);
			break;

		case 4:
			int height, base;
			cout << "Enter height:\t\t";
			cin >> height;
			cout << "Enter base length:\t";
			cin >> base;
			area(height, base, 0.5);
			break;

		default:
			cout << "Invalid input\n";
		}

		// ask user if they wanna continue with the application
		cout << "Continue??\t";
		cin >> toContinue;

		cout << "\n\n";
	}

	return 0;
}
