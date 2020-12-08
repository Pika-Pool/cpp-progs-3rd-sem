#include <iostream>
using namespace std;

class Complex
{
	int real, imag;

public:
	Complex(int r = 0, int i = 0) : real(r), imag(i) {}

	void show()
	{
		cout << "Complex number:\t" << real << " + i" << imag << endl;
	}

	// overloading the binary plus operator
	Complex operator+(Complex c2)
	{
		return Complex(real + c2.real, imag + c2.imag);
	}

	// overloading the comma operator
	Complex operator,(Complex c2)
	{
		Complex temp(c2.real, c2.imag);
		cout << " operator,(Complex) called:\t" << temp.real << " ," << temp.imag << endl;

		return temp;
	}
};

int main()
{
	Complex obj1(2, 3), obj2(4, 5), obj3;

	obj1.show();
	obj2.show();
	obj3.show();

	cout << "\nUsing overloaded \",\" ahead\n";
	obj3 = (obj1, obj1 + obj2, obj1);

	cout << "\n";
	obj3.show();

	return 0;
}
