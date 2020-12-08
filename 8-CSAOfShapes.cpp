/*
* V. Sriram
* 10314902019
*/

// Cuboid: 2(hd + lh + ld)
// Cone: PI*r*(r + sqrt(h^2 + r^2))
// Sphere: 4*pi*r*r

#include <iostream>
#include <cmath> // for sqrt() function
#define PI 3.14159265357989323846264
using namespace std;

// overload surface_area() to calculate surface area
// of different shapes

// cuboid
void surface_area(int l, int b, int d)
{
	int CSA = 2 * (l * b + l * d + b * d);
	cout << "Surface Area = " << CSA << "\n";
}

// cone
void surface_area(double r, double h)
{
	double CSA = PI * r * (r + sqrt(h * h + r * r));
	cout << "Surface Area = " << CSA << "\n";
}

// sphere
void surface_area(double r)
{
	double CSA = 4 * PI * r * r;
	cout << "Surface Area = " << CSA << "\n";
}

int main()
{
	// its a menu driven program
	// program ends when user enter anything
	// other than y or Y when asked
	char toContinue;

	do
	{
		cout << "Calculate surface area of:\n";
		cout << "1. Cuboid\n";
		cout << "2. Cone\n";
		cout << "3. Sphere\n";

		// choice is the index of above printed options
		int choice;
		cin >> choice;

		int length, breadth, depth;
		double radius, height;

		switch (choice)
		{
		case 1:
			cout << "Enter length:\t";
			cin >> length;
			cout << "Enter breadth:\t";
			cin >> breadth;
			cout << "Enter depth:\t";
			cin >> depth;
			surface_area(length, breadth, depth);
			break;

		case 2:
			cout << "Enter radius:\t";
			cin >> radius;
			cout << "Enter height:\t";
			cin >> height;
			surface_area(radius, height);
			break;

		case 3:
			cout << "Enter radius:\t";
			cin >> radius;
			surface_area(radius);
			break;

		default:
			cout << "Invalid input\n";
			break;
		}

		// ask user if they wanna continue or end the prog
		cout << "Continue??\t";
		cin >> toContinue;
		cout << "\n\n";
	} while (toContinue == 'Y' || toContinue == 'y');

	return 0;
}
