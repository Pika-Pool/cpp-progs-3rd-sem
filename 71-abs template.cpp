#include <iostream>
using namespace std;

template <typename T>
T abs(T a) {
	if(a < 0)
		return -a;
	else
		return a;
}

int main() {
	int i;
	std::cout << "Enter 1 integer:\t";
	std::cin >> i;
	std::cout << "|" << i << "|" << " = " << abs(i);

	float f;
	std::cout << "\n\nEnter 1 float:\t";
	std::cin >> f;
	std::cout << "|" << f << "|" << " = " << abs(f);

	long long l;
	std::cout << "\n\nEnter 1 long:\t";
	std::cin >> l;
	std::cout << "|" << l << "|" << " = " << abs(l);

	return 0;
}
