/*
* V. Sriram
* 10314902019
*/

/* cone: pi * r * r * h / 3
* cylinder: pi * r * r * h
* sphere: 4 * pi * r * r * r / 3
* cube: a * a * a
* cuboid: l * b * h
*/
#include <iostream>
#include <stdio.h>
#define PI 3.141592653589793238462643383

using namespace std;

// cone and cylinder
// cone and cylinder both take 2 arguments(radius, height)
// and have similar formula for valume
// pass fracion = 1/3 for cone's volume
void volume(double radius, double height, double fraction = 1.0)
{
	cout << "Volume = " << PI * radius * radius * height * fraction << "\n";
}

// sphere
void volume(double radius)
{
	cout << "Volume = " << 4.0 / 3.0 * radius * radius * radius * PI << "\n";
}

// cube
void volume(long long side)
{
	cout << "Volume = " << side * side * side << "\n";
}

// cuboid
void volume(long long length, long long breadth, long long depth)
{
	cout << "Volume = " << length * breadth * depth << "\n";
}

int main()
{
	double radius, height;
	long long side, length, breadth, depth;
	char toContinue;

	// its a menu driven program
	// program ends when user enter anything
	// other than y or Y when asked
	do
	{
		cout << "Calculate volume of:\n";
		cout << "1. Cylinder\n";
		cout << "2. Cone\n";
		cout << "3. Sphere\n";
		cout << "4. Cube\n";
		cout << "5. Cuboid\n";

		// choice is the index of above printed options
		int choice;
		cin >> choice;

		switch (choice)
		{
		case 1:
			cout << "Enter radius:\t";
			cin >> radius;
			cout << "Enter height:\t";
			cin >> height;
			volume(radius, height);
			break;
		case 2:
			cout << "Enter radius:\t";
			cin >> radius;
			cout << "Enter height:\t";
			cin >> height;
			volume(radius, height, (1.0 / 3.0));
			break;
		case 3:
			cout << "Enter radius:\t";
			cin >> radius;
			volume(radius);
			break;
		case 4:
			cout << "Enter side length:\t";
			cin >> side;
			volume(side);
			break;
		case 5:
			cout << "Enter length:\t";
			cin >> length;
			cout << "Enter breadth:\t";
			cin >> breadth;
			cout << "Enter depth:\t";
			cin >> depth;
			volume(length, breadth, depth);
			break;
		}

		// ask user if they wanna continue or end the prog
		cout << "Continue??\t";
		cin >> toContinue;
		cout << "\n\n";

	} while (toContinue == 'y' || toContinue == 'Y');

	return 0;
}
