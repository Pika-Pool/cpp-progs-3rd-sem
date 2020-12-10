#include <iostream>
using namespace std;

enum foodType
{
	BURGER,
	PIZZA,
	CHOLE_BHATURE,
	MOMOS
};

// dummy function that throws errors
void throwError(foodType t)
{
	if (t == BURGER)
		throw 1;
	else if (t == PIZZA)
		throw double(1.3);
	else if (t == CHOLE_BHATURE)
		throw float(1.3);
	else if (t == MOMOS)
		throw 'c';
	else
		throw t;
}

int main()
{
	for (int i = 0; i < 5; ++i)
	{
		try
		{
			int n;
			cout << "Enter an integer from " << BURGER << " to " << MOMOS << ":\t";
			cin >> n;

			throwError(foodType(n));
		}
		catch (int e) // catch an error of type int
		{
			cout << "Integer exception caught!";
		}
		catch (double e) // catch an error of type double
		{
			cout << "Double exception caught!";
		}
		catch (float e) // catch an error of type float
		{
			cout << "Float exception caught!";
		}
		catch (char e) // catch an error of type char
		{
			cout << "Character exception caught!";
		}
		catch (...) // catch error of any other type
		{
			cout << "Unknown exception caught";
		}

		cout << "\n\n";
	}

	return 0;
}
