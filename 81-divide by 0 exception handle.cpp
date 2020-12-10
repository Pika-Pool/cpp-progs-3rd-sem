#include <iostream>
#include <stdexcept>
using namespace std;

// returns result of num divided by den
double divide(double num, double den)
{
	if (den == 0)
	{
		// numbers can't be divided by 0
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

	// handle any exception thrown on calling divide
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
