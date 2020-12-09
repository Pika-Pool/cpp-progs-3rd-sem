#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;

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
	fstream file(filename, ios::binary | ios::out);

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

	file.open(filename, ios::binary | ios::in);

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
