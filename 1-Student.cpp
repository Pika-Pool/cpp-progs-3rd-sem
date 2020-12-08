#include <iostream>
#include <windows.h>
using namespace std;

class Student
{
private:
	char name[50], enrolno[15], course[50], grade;
	float marks[5], percentage, total;

	void calculate()
	{
		percentage = total / 5;
		grade = calcGrade(percentage);
	}

	char calcGrade(float percentage)
	{
		if (percentage >= 90)
			return 'O';
		else if (percentage >= 75)
			return 'A';
		else if (percentage >= 60)
			return 'B';
		else if (percentage >= 50)
			return 'C';
		else
			return 'F';
	}

public:
	void input()
	{
		cout << "Enter Enrollment Number:\t";
		cin >> enrolno;

		cout << "Enter Name:\t\t\t";
		cin >> name;

		cout << "Enter Course:\t\t\t";
		cin >> course;

		cout << "Enter marks in 5 subjects:\n";
		for (int i = 1; i <= 5; ++i)
		{
			cout << "\t" << i << ".\t";
			cin >> marks[i - 1];

			total += marks[i - 1];
		}

		calculate();
	}

	void output()
	{
		cout << "Enrollment Number:\t" << enrolno;
		cout << "\nName:\t\t\t" << name;
		cout << "\nCourse:\t\t\t" << course;
		cout << "\nPercentage:\t\t" << percentage;
		cout << "\nGrade:\t\t\t" << grade;
	}
};

int main()
{
	Student s1, s2;
	s1.input();
	cout << "\n\n";
	s1.output();

	cout << "\n\n";
	system("pause");
	system("cls");

	s2.input();
	cout << "\n\n";
	s2.output();

	return 0;
}
