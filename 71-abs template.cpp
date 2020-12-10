#include <iostream>
using namespace std;

// returns the absolute value of a
// a : |a|
// a generic type T
template <typename T>
T abs(T a)
{
	if (a < 0)
		return -a;
	else
		return a;
}

int main()
{
	// ABSOLUTE VALUE OF INT
	int i;
	std::cout << "Enter 1 integer:\t";
	std::cin >> i;
	std::cout << "|" << i << "|"
			  << " = " << abs(i);

	// ABSOLUTE VALUE OF FLOAT
	float f;
	std::cout << "\n\nEnter 1 float:\t";
	std::cin >> f;
	std::cout << "|" << f << "|"
			  << " = " << abs(f);

	// ABSOLUTE VALUE OF LONG LONG
	long long l;
	std::cout << "\n\nEnter 1 long:\t";
	std::cin >> l;
	std::cout << "|" << l << "|"
			  << " = " << abs(l);

	return 0;
}
