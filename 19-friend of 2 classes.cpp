#include <iostream>

using namespace std;

class PT; // declaration of part time class
class FT
{ // declaration of full time class and it's definition
	char name[15];
	float percentage;
	char course[10];

public:
	void input()
	{ // Getting input from user
		cout << "Enter name:\t";
		cin >> name;
		cout << "Enter percentage:\t";
		cin >> percentage;
		cout << "Enter course:\t";
		cin >> course;
	}
	void output()
	{ // showing output to the user
		cout << "\nName = \t" << name;
		cout << "\nPercentage =\t" << percentage << "%";
		cout << "\nCourse =\t" << course;
	}
	friend void Compare(FT, PT); // friend function signature
};

class PT
{
	char name[15];
	float percentage;
	char course[10];

public:
	void input()
	{ // Getting input into data members
		cout << "Enter name:\t";
		cin >> name;
		cout << "Enter percentage:\t";
		cin >> percentage;
		cout << "Enter course:\t";
		cin >> course;
	}
	void output()
	{ // Showing output to the user
		cout << "\nName = \t" << name;
		cout << "\nPercentage = \t" << percentage << "%";
		cout << "\nCourse =\t" << course;
	}
	friend void Compare(FT, PT); // friend function signature
};

void Compare(FT f, PT p)
{ // friend function definition
	if (f.percentage > p.percentage)
	{ // Condition to check highest marks
		cout << "Full time student, " << f.name << ", has higher percentage" << endl;
		f.output();
	}
	else if (f.percentage < p.percentage)
	{
		cout << "Part time student, " << p.name << ", has higher percentage" << endl;
		p.output();
	}
	else
	{
		cout << "Both have same percentage" << endl;
		f.output();
		cout << "\n";
		p.output();
	}
}

int main()
{
	FT ff; // object initialization
	PT pp;

	ff.input();
	cout << "\n\n";
	pp.input();
	Compare(ff, pp); // friend function calling

	return 0;
}
