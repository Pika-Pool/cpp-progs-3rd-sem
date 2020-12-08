#include <iostream>
#include <stdexcept>
using namespace std;

double divide(double num, double den)
{
	if (den == 0)
	{
		throw runtime_error("Math error: Cannot divide by 0!!");
	}

	return (num / den);
}

int main()
{
	double num, den, res;

	cout << "Enter numerator:\t";
	cin >> num;

	cout << "Enter denominator:\t";
	cin >> den;

	cout << "\n\n";

	try
	{
		res = divide(num, den);
		cout << num << " / " << den << "  =  " << res << "\n";
	}
	catch (runtime_error &e)
	{
		cout << e.what() << "\n";
	}

	return 0;
}
