#include <iostream>
using namespace std;

class Student
{
private:
	char name[50], course[50], grade;
	float marks[3], percentage, total;

	void calculate()
	{
		// calculate percentage as
		// sum of marks / no. of subjects
		// stores values in data members
		percentage = total / 3;
		grade = calcGrade(percentage);
	}

	char calcGrade(float percentage)
	{
		/* grade limits:
		* >= 90 : O
		* >= 75 : A
		* >= 60 : B
		* >= 50 : C
		* < 50> : F
		*/
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
		// get input into all data members of the object
		cout << "Enter Name:\t\t\t";
		cin >> name;

		cout << "Enter Course:\t\t\t";
		cin >> course;

		cout << "Enter marks in 3 subjects:\n";
		for (int i = 1; i <= 3; ++i)
		{
			cout << "\t" << i << ".\t";
			cin >> marks[i - 1];

			total += marks[i - 1];
		}

		calculate();
	}

	void output()
	{
		// print output to console after calculation
		cout << "\nName:\t\t\t" << name;
		cout << "\nCourse:\t\t\t" << course;
		cout << "\nPercentage:\t\t" << percentage;
		cout << "\nGrade:\t\t\t" << grade;
	}

	Student &max(Student &s)
	{
		// compare and return the student object
		// with highest total marks
		if (this->total < s.total)
			return s;

		return *this;
	}

	char *getName()
	{
		// return student name
		return name;
	}
};

int main()
{
	Student s1, s2;
	s1.input();
	cout << "\n";
	s2.input();

	cout << "\n\nList of students:\n";

	s1.output();
	cout << "\n";
	s2.output();

	cout << "\n\n";

	cout << s1.max(s2).getName() << " has higher total marks";

	return 0;
}
