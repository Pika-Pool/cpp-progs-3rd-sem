#include <iostream>
using namespace std;

// a test class
class Class
{
private:
	// static data member
	static int objectCount;
	char name[10];

public:
	Class()
	{
		// constructor of class increments ObjectCount
		// each time new object is declared
		objectCount++;
		cout << "Class constructor has been called " << objectCount << " times\n\n";
	}

	void get()
	{
		cout << "Enter name";
		cin >> name;
	}

	void put()
	{
		cout << "Name:\t" << name;
	}

	static int getObjectCount()
	{
		// statuc member function can only access
		// status data members
		return objectCount;
	}
};
int Class::objectCount = 0;

int main()
{
	// prog demonstrated that static data member
	// exists even before an object is of class
	// is created
	cout << "\n\nBefore declaring any class objects:\n";
	cout << "objectCount = " << Class::getObjectCount() << "\n\n";

	Class c;

	cout << "After declaring 1 class object:\n";
	cout << "objectCount = " << Class::getObjectCount() << "\n\n";

	return 0;
}
