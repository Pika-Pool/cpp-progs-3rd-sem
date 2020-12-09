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

	void appendToFile(const char *filename)
	{
		cout << "Writing student object to file...\n";

		ofstream file(filename, ios::app | ios::binary);

		file.write((char *)this, sizeof(Student));

		file.close();
	}

	void readFromFile(const char *filename, streampos pos)
	{
		cout << "Reading student object from file...\n";

		ifstream file(filename, ios::binary);

		// file.seekg(pos, ios::beg);
		file.read((char *)this, sizeof(Student));

		file.close();
	}
};

int main()
{
	char filename[] = "studentDetails.dat";
	fstream file(filename, ios::trunc | ios::out);
	file.close();

	// ======================================================================
	Student s1;
	s1.input();

	cout << "Writing student object to file...\n";

	file.open(filename, ios::app | ios::binary | ios::out);
	file.write((char *)(&s1), sizeof(Student));
	file.close();

	cout << "\n\n";

	// ======================================================================
	Student s2;
	s1.input();

	cout << "Writing student object to file...\n";

	file.open(filename, ios::app | ios::binary | ios::out);
	file.write((char *)(&s2), sizeof(Student));
	file.close();

	// ======================================================================
	cout << "\n\nNow reading the details into an array:\n";

	Student sarr[2];
	file.open(filename, ios::binary | ios::in);

	// file.seekg(pos, ios::beg);
	for (int i = 0; i < 2; ++i)
	{
		file.read((char *)(&sarr[i]), sizeof(Student));
		sarr[i].display();
	}
	file.close();
	// sarr[0].readFromFile(filename, 0);
	// sarr[1].readFromFile(filename, sizeof(Student));

	// sarr[0].display();
	// cout << "\n";
	// sarr[1].display();

	return 0;
}
