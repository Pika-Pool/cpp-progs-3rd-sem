#include <iostream>
#define PI 3.14159265358979323846264
using namespace std;

class Degree
{
	double angle;

public:
	Degree(double a = 0.0) : angle(a) {}

	void input()
	{
		cout << "Enter angle(degrees):\t";
		cin >> angle;
	}

	void display()
	{
		cout << "Angle:\t" << angle << " deg\n";
	}

	double getAngle() const
	{
		return angle;
	}
};

class Radian
{
	double angle;

public:
	Radian(double a = 0.0) : angle(a) {}

	// to convert Radian -> Degree
	operator Degree() const
	{
		return Degree(angle * 180 / PI);
	}

	// to convert Degree -> Radian
	Radian(Degree d)
	{
		angle = d.getAngle() * PI / 180;
	}

	void input()
	{
		cout << "Enter angle(radians):\t";
		cin >> angle;
	}

	void display()
	{
		cout << "Angle:\t" << angle << " rad\n";
	}

	double getAngle() const
	{
		return angle;
	}
};

int main()
{
	Radian rad;
	Degree deg;

	// convert Radian -> Degree
	rad.input();
	cout << "Converting to degrees:\n";
	deg = rad;
	deg.display();

	cout << "\n\n";

	// convert Degree -> Radian
	deg.input();
	cout << "Converting to radians:\n";
	rad = deg;
	rad.display();

	return 0;
}
