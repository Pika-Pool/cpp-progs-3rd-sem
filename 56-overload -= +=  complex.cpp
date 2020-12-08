#include <iostream>
using namespace std;

class Complex
{
private:
	int real, imag;

public:
	Complex(int r = 0, int i = 0)
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

	// outputs in format
	// 2 + 32i
	void output()
	{
		cout << real;
		if (imag < 0)
			cout << " - " << -imag;
		else
			cout << " + " << imag;

		cout << "i\n";
	}

	// overload += operator
	void operator+=(const Complex &c2)
	{
		cout << "operator+= called\n";
		real += c2.real;
		imag += c2.imag;
	}

	// overload -= operator
	void operator-=(const Complex &c2)
	{
		cout << "operator-= called\n";
		real -= c2.real;
		imag -= c2.imag;
	}

	Complex operator-(const Complex &c2)
	{
		cout << "operator- called\n";
		return Complex(real - c2.real, imag - c2.imag);
	}
};

// swap 2 obejects of Complex type
void swap(Complex &c1, Complex &c2)
{
	c1 += c2;
	c2 = c1 - c2;
	c1 -= c2;
}

int main()
{
	Complex c1, c2;

	cout << "Enter complex number 1:\n";
	c1.input();
	cout << "\nEnter complex number 2:\n";
	c2.input();

	cout << "\n\nYour Complex numbers:\n";
	cout << "c1  =  ";
	c1.output();
	cout << "c2  =  ";
	c2.output();

	cout << "\n";
	// swap values
	// this function called operator+=, operator-
	// operator-= internally
	swap(c1, c2);

	cout << "\n\nAfter swapping values\n";
	cout << "c1  =  ";
	c1.output();
	cout << "c2  =  ";
	c2.output();

	return 0;
}
