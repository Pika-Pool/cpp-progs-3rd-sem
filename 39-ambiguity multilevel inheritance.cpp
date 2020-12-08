#include <iostream>
using namespace std;

class base //single base class
{
protected:
	int x;

public:
	void getdata()
	{
		cout << "Enter value of x= ";
		cin >> x;
	}
};

class derive1 : public base // derived class from base class
{
protected:
	int y;

public:
	void getdata() // get data is ambiguous with base's getdata
	{
		cout << "\nEnter value of y= ";
		cin >> y;
	}
};

class derive2 : public derive1 // derived from class derive1
{
private:
	int z;

public:
	void getdata() // get data is ambiguous with derive1's getdata
	{
		// to remove the ambiguity we use scope resolution operator
		derive1::getdata();

		cout << "\nEnter value of z= ";
		cin >> z;
	}
	void print()
	{
		cout << "\nProduct= " << x * y * z;
	}
};

int main()
{
	derive2 a; //object of derived class

	// to remove the ambiguity we use scope resolution operator
	a.base::getdata();
	a.getdata();
	a.print();

	return 0;
}
