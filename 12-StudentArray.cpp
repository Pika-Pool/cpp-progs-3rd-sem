/**
 * V. Sriram
 * 10314902019
*/

// Please refer to question 1 for detailed explanation of class

#include <iostream>
using namespace std;

class Student
{
private:
	char name[20], enrolno[15], course[20], grade;
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

	float getPercentage()
	{
		// return unaccessible private member
		return percentage;
	}

	void printRow()
	{
		// print a row in a tabular form
		printf("%-20s%-20s%-12.2lf%c\n", name, course, percentage, grade);
	}
};

float avgPercentage(Student arr[], int n)
{
	// calculate average percentage of every student
	float totalPercentage = 0;
	for (int i = 0; i < n; ++i)
	{
		totalPercentage += arr[i].getPercentage();
	}
	return totalPercentage / (float)n;
}

int main()
{
	// array of objects of type Student
	Student stuArr[5];

	for (int i = 0; i < 5; ++i)
	{
		cout << "Enter details of student - " << i + 1 << "\n";
		stuArr[i].input();
		cout << "\n\n";
	}

	cout << "Percentage of each student:\n";
	printf("%-20s%-20s%-12s%s\n", "Name", "Course", "Percentage", "Grade");

	for (int i = 0; i < 5; ++i)
		stuArr[i].printRow();

	cout << "Average percentage of all students:\t" << avgPercentage(stuArr, 5);

	return 0;
}
