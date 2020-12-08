#include <iostream>
using namespace std;

class Employee
{
private:
	int empno;
	double Basic, HRA, DA, Total;
	char empname[30], mobileNo[11];

	void calculate()
	{
		HRA = Basic * 0.3;
		DA = Basic * 1.15;
		Total = Basic + DA + HRA;
	}

public:
	void input()
	{
		printf("%-30s", "Enter Employee Number:");
		cin >> empno;

		printf("%-30s", "Enter Name:");
		cin >> empname;

		printf("%-30s", "Enter Mobile No:");
		cin >> mobileNo;

		printf("%-30s", "Enter Basic Salary:");
		cin >> Basic;

		calculate();
	}

	void output()
	{
		printf("%-30s%d", "Employee Number:", empno);
		printf("\n%-30s%s", "Employee Name:", empname);
		printf("\n%-30s%s", "Mobile Number:", mobileNo);
		printf("\n%-30s%.2lf", "Basic Salary:", Basic);
		printf("\n%-30s%.2lf", "Dearness Allowance:", DA);
		printf("\n%-30s%.2lf", "House Rent Allowance:", HRA);
		printf("\n%-30s%.2lf", "Total Salary:", Total);
	}
};

int main()
{
	Employee e1;
	e1.input();
	cout << "\n\n";
	e1.output();

	return 0;
}
