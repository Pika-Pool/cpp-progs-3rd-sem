#include <iostream>
#define PI 3.14159265358979323846264

using namespace std;

class Cylinder
{
private:
	float radius, height;

	float calcVol()
	{
		return PI * radius * radius * height;
	}

	float calcCSA()
	{
		return 2 * PI * radius * height;
	}

public:
	void input()
	{
		cout << "Enter radius:\t";
		cin >> radius;

		cout << "Enter height:\t";
		cin >> height;
	}

	void output()
	{
		cout << "Radius:\t" << radius;
		cout << "\nHeight:\t" << height;

		cout << "\nVolume:\t" << calcVol();
		cout << "\nCSA:\t" << calcCSA();
	}
};

int main()
{
	Cylinder c1;
	c1.input();
	cout << "\n\n";
	c1.output();

	return 0;
}
