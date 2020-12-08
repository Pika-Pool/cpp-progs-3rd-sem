#include <iostream>
using namespace std;

enum varType
{
	INT,
	DOUBLE,
	FLOAT,
	CHAR
};

void throwError(varType t)
{
	if (t == INT)
		throw 1;
	else if (t == DOUBLE)
		throw double(1.3);
	else if (t == FLOAT)
		throw float(1.3);
	else if (t == CHAR)
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
			cout << "Enter an integer from " << INT << " to " << CHAR << ":\t";
			cin >> n;

			throwError(varType(n));
		}
		catch (int e)
		{
			cout << "Integer exception caught!";
		}
		catch (double e)
		{
			cout << "Double exception caught!";
		}
		catch (float e)
		{
			cout << "Float exception caught!";
		}
		catch (char e)
		{
			cout << "Character exception caught!";
		}
		catch (...)
		{
			cout << "Unknown exception caught";
		}

		cout << "\n\n";
	}

	return 0;
}
