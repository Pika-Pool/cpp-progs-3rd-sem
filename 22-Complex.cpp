#include <iostream>
using namespace std;

class Complex
{
private:
	int real, imag;

public:
	Complex() {}

	Complex(int r, int i)
	{
		real = r;
		imag = i;
	}

	void input()
	{
		cout << "Real part:\t";
		cin >> real;

		cout << "Imaginary part:\t";
		cin >> imag;
		cout << '\n';
	}

	void output()
	{
		cout << real;
		if (imag < 0)
			cout << " - " << -imag;
		else
			cout << " + " << imag;

		cout << "i\n";
	}

	// using friend classes to add and substract 2 Complex instances
	friend Complex add(const Complex &c1, const Complex &c2);
	friend Complex subtract(const Complex &c1, const Complex &c2);
};

// can access all members of any Complex class object
Complex add(const Complex &c1, const Complex &c2)
{
	return Complex(c1.real + c2.real, c1.imag + c2.imag);
}

// can access all members of any Complex class object
Complex subtract(const Complex &c1, const Complex &c2)
{
	return Complex(c1.real - c2.real, c1.imag - c2.imag);
}

int main()
{
	Complex c1, c2;

	cout << "Enter complex number c1:\n";
	c1.input();

	cout << "Enter complex number c2:\n";
	c2.input();

	Complex c3 = add(c1, c2);
	Complex c4 = subtract(c1, c2);

	cout << "c1 + c2 = ";
	c3.output();

	cout << "c1 - c2 = ";
	c4.output();

	return 0;
}
