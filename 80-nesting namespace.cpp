#include <iostream>

namespace first
{
	int var = 10;
	namespace second
	{
		int secVar = 20;
	} // namespace second
} // namespace first
using namespace std;

char var = 'g';

int main()
{
	double var = 20.53;
	cout << "local var = " << var << endl;
	cout << "global var = " << ::var << endl;
	cout << "first::var = " << first::var << endl;
	cout << "second::var = " << first::second::secVar;

	return 0;
}
