#include <iostream>

// nesting second inside first

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
	cout << "first::var = " << first::var << endl;	   // access var defined inside namespace first
	cout << "second::var = " << first::second::secVar; // access secVar defined inside namespace second

	return 0;
}
