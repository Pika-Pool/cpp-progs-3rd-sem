#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;

// student class
class Student
{
	char name[50];
	double totalMarks;

public:
	Student() {}

	Student(char name[], double totalMarks)
	{
		strcpy(this->name, name);
		this->totalMarks = totalMarks;
	}

	void input()
	{
		cout << "Enter student details:\n";

		cout << "Name:\t\t";
		cin >> name;

		cout << "Total Marks:\t";
		cin >> totalMarks;
	}

	void display()
	{
		cout << "Student details:\n";
		cout << "Name:\t\t" << name << "\n";
		cout << "Total Marks\t" << totalMarks << "\n";
	}
};

int main()
{
	char filename[] = "studentDetails.dat";
	// open binary file in output/write mode
	fstream file(filename, ios::binary | ios::out);

	// get student details and
	// write to files as binary data
	Student arr[3];
	for (int i = 0; i < 3; ++i)
	{
		arr[i].input();
		cout << "Writing data to file...";
		file.write((char *)(&arr[i]), sizeof(Student));
		cout << "\n\n";
	}

	file.close();

	cout << "\n\n";

	// open binary file in input/read mode
	file.open(filename, ios::binary | ios::in);

	// read each student data stored and print to console
	Student obj;
	for (int i = 0; i < 3; ++i)
	{
		cout << "Reading data from file...\n";
		file.read((char *)(&obj), sizeof(Student));
		obj.display();
		cout << "\n";
	}

	file.close();

	return 0;
}
