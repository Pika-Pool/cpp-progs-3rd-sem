#include <iostream>
using namespace std;

//structure definition with private and public members
class Student
{
private:
	int rNo;
	float perc;

public:
	//constructor
	Student(int r, float p)
	{
		rNo = r;
		perc = p;
	}

	//function to read details
	void read(void)
	{
		cout << "Enter roll number: ";
		cin >> rNo;
		cout << "Enter percentage: ";
		cin >> perc;
	}

	//function to print details
	void print(void)
	{
		cout << endl;
		cout << "Roll number: " << rNo << endl;
		cout << "Percentage: " << perc << "%" << endl;
	}
};

//Main code
int main()
{
	//reading roll number and percentage to initialize
	//the members while creating object
	cout << "Enter roll number to initialize the object: ";
	int roll_number;
	cin >> roll_number;
	cout << "Enter percentage to initialize the object: ";
	float percentage;
	cin >> percentage;

	// DYNAMIC INITIALISATION
	Student s1(roll_number, percentage);
	//print the value
	cout << "\nDynamically initialized a Student object, the values are..." << endl;
	s1.print();
	cout << "\n\n";

	//reading and printing student details
	//by calling public member functions of the structure
	s1.read();
	s1.print();

	return 0;
}
