#include <iostream>
using namespace std;

int main()
{
	// POINTER TO CONSTANT
	char a = 'A', b = 'B';
	const char *ptc = &a;

	//*ptr = b; illegal statement (assignment of read-only location *ptr)

	// ptr can be changed
	printf("value pointed to by ptr: %c\n", *ptc);
	ptc = &b;
	printf("value pointed to by ptr: %c\n\n", *ptc);

	// ==========================================================================
	// CONST POINTER
	a = 'A', b = 'B';
	char *const cp = &a;
	printf("Value pointed to by ptr: %c\n", *cp);
	printf("Address ptr is pointing to: %d\n", cp);

	//ptr = &b; illegal statement (assignment of read-only variable ptr)

	// changing the value at the address ptr is pointing to
	*cp = b;
	printf("Value pointed to by ptr: %c\n", *cp);
	printf("Address ptr is pointing to: %d\n\n", cp);

	// ==========================================================================
	// CONST POINTER TO CONST
	a = 'A', b = 'B';
	const char *const cptc = &a;

	printf("Value pointed to by ptr: %c\n", *cptc);
	printf("Address ptr is pointing to: %d\n\n", cptc);

	// ptr = &b; illegal statement (assignment of read-only variable ptr)
	// *ptr = b; illegal statement (assignment of read-only location *ptr)

	return 0;
}
