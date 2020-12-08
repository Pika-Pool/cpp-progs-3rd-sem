#include <iostream>
using namespace std;

class ClassA
{
public:
	int a;
};

class ClassB : virtual public ClassA
{
public:
	int b;
};
class ClassC : virtual public ClassA
{
public:
	int c;
};

class ClassD : public ClassB, public ClassC
{
public:
	int d;
};

int main()
{

	ClassD obj;

	/** without virtual base class,
	 * there would be 2 copies of classA
	 * thus, 2 copies of obj.a
	*/

	// obj.a = 10;	 // error without virtual class
	// obj.a = 100; // error without virtual class

	obj.ClassB::a = 10;	 // resolve ambiguity when not using virtual scope resolution
	obj.ClassC::a = 100; // resolve ambiguity when not using virtual scope resolution

	obj.b = 20;
	obj.c = 30;
	obj.d = 40;

	cout << "\n A from ClassB  : " << obj.ClassB::a;
	cout << "\n A from ClassC  : " << obj.ClassC::a;
	cout << "\n A without scope resolution  : " << obj.a;

	cout << "\n B : " << obj.b;
	cout << "\n C : " << obj.c;
	cout << "\n D : " << obj.d;

	return 0;
}
