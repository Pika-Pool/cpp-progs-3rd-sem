#include <iostream>
using namespace std;

void absolute(int i)
{
	cout << "|" << i << "| = ";
	cout << ((i < 0) ? -i : i) << "\n\n";
}

void absolute(float f)
{
	cout << "|" << f << "| = ";
	cout << ((f < 0) ? -f : f) << "\n\n";
}

void absolute(long long ll)
{
	cout << "|" << ll << "| = ";
	cout << ((ll < 0) ? -ll : ll) << "\n\n";
}

int main()
{
	int i;
	cout << "Enter integer:\t\t";
	cin >> i;
	absolute(i);

	float f;
	cout << "Enter float:\t\t";
	cin >> f;
	absolute(f);

	long long ll;
	cout << "Enter long long:\t";
	cin >> ll;
	absolute(ll);

	return 0;
}
