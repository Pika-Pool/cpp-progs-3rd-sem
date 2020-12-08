#include <iostream>

// use pass by reference to direcly invert the input's sign
void negate(int &i)
{
	i = -i;
}

int main()
{
	int i;
	std::cout << "Enter an integer:\t";
	std::cin >> i;

	std::cout << "(-1)*(" << i << ") = ";
	negate(i);
	std::cout << i << "\n";

	return 0;
}
