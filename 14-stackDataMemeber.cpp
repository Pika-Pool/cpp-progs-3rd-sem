#include <iostream>

using namespace std;

class Student
{
private:
	int rollNo;
	char name[10];
	int marks;
	// objectCount is a variable of class
	// only 1 instance is made
	static int objectCount;

public:
	Student()
	{
		// objectCount is incremented every time
		// an object of type Student is declared
		objectCount++;
	}

	void get()
	{
		// get data as input from user
		cout << "Enter roll number:\t";
		cin >> rollNo;
		cout << "Enter name:\t";
		cin >> name;
		cout << "Enter marks:\t";
		cin >> marks;
	}

	void put()
	{
		// print object data
		printf("%-10d%-20s%-10d\n", rollNo, name, marks);
	}

	static int getObjectCount()
	{
		// static member function can only access
		// static data members
		return objectCount;
	}
};
int Student::objectCount = 0;

int main()
{
	// program shows that value of objectCount remains
	// incrementing after each object declaration
	Student s1;
	s1.get();
	cout << "\n\n";

	Student s2;
	s2.get();
	cout << "\n\n";

	Student s3;
	s3.get();
	cout << "\n\n";

	printf("%-10s%-20s%-10s\n", "Roll No", "Name", "Marks");
	s1.put();
	s2.put();
	s3.put();

	cout << "\n\n";
	// access static member function
	// and thus the static data member
	cout << "Total objects created = " << Student::getObjectCount();
	return 0;
}
