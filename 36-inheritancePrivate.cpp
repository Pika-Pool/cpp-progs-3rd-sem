#include <iostream>
#include <cstring>
using namespace std;

class Teacher
{
protected:
	char name[50];
	char collegeName[50];

public:
	void input()
	{
		cout << "Enter name:\t";
		cin >> name;
		cout << "Enter college name:\t";
		cin >> collegeName;
	}

	void sayHi()
	{
		cout << "Hi, I am " << name << ". ";
		cout << "I am a teacher. ";
		cout << "I teach at " << collegeName << ".\n";
	}
};

//This class inherits Teacher class with private vidibility mode
// MathTeacher inherits all members except private ones
// as its own private members
class MathTeacher : private Teacher
{
	char mainSub[30];

public:
	MathTeacher()
	{
		strcpy(mainSub, "Mathematics");
		input();
	}

	void sayHi()
	{
		Teacher::sayHi();
		cout << "I teach " << mainSub;
	}
};

int main()
{
	MathTeacher obj;

	cout << "\n\n";
	// obj.input(); cannot be called as its a private member
	obj.sayHi();
	cout << "\n\n";

	return 0;
}
