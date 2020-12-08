#include <iostream>

template <typename T>
void swap(T &a, T &b) {
	T temp = a;
	a = b;
	b = temp;
}

int main() {
	int i1, i2;
	std::cout << "Enter 2 integers:\t";
	std::cin >> i1 >> i2;
	swap(i1, i2);
	std::cout << "After swapping:\t" << i1 << " " << i2;

	float f1, f2;
	std::cout << "\n\nEnter 2 floats:\t";
	std::cin >> f1 >> f2;
	swap(f1, f2);
	std::cout << "After swapping:\t" << f1 << " " << f2;

	char c1, c2;
	std::cout << "\n\nEnter 2 chars:\t";
	std::cin >> c1 >> c2;
	swap(c1, c2);
	std::cout << "After swapping:\t" << c1 << " " << c2;

	long long l1, l2;
	std::cout << "\n\nEnter 2 longs:\t";
	std::cin >> l1 >> l2;
	swap(l1, l2);
	std::cout << "After swapping:\t" << l1 << " " << l2;

	return 0;
}
