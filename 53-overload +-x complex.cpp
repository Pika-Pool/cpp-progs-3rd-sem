#include <iostream>
using namespace std;

class Complex
{
	int real, imag;

public:
	Complex(int r = 0, int i = 0) : real(r), imag(i) {}

	void show()
	{
		cout << real << " + " << imag << "i" << endl;
	}

	void input()
	{
		cout << "Enter real part:\t";
		cin >> real;

		cout << "Enter imaginary part:\t";
		cin >> imag;
	}

	// overloading the binary plus operator
	Complex operator+(Complex c2)
	{
		cout << "operator+ called\n";
		return Complex(real + c2.real, imag + c2.imag);
	}

	// overloading the binary minus operator
	Complex operator-(Complex c2)
	{
		cout << "operator- called\n";
		return Complex(real - c2.real, imag - c2.imag);
	}

	// overloading the binary multiply operator
	Complex operator*(Complex c2)
	{
		cout << "operator* called\n";
		return Complex(
			real * c2.real - imag * c2.imag,
			real * c2.imag + imag * c2.real);
	}
};

int main()
{
	Complex c1, c2;

	cout << "Enter c1:\n";
	c1.input();

	cout << "\nEnter c2:\n";
	c2.input();

	cout << "\n\n";

	Complex c3 = c1 + c2;
	cout << "c1 + c2  =  ";
	c3.show();

	cout << "\n";

	Complex c4 = c1 - c2;
	cout << "c1 - c2  =  ";
	c4.show();

	cout << "\n";

	Complex c5 = c1 * c2;
	cout << "c1 * c2  =  ";
	c5.show();

	return 0;
}
