/**
 * V. Sriram
 * 10314902019
*/

#include <iostream>
using namespace std;

// see program - 2 for detailed explanation of Employee class
class Employee
{
private:
	int empId;
	double Basic, HRA, DA, Gross;
	char empName[20], mobileNo[11];

	void calculate()
	{
		HRA = Basic * 0.3;
		DA = Basic * 1.15;
		Gross = Basic + DA + HRA;
	}

public:
	void input()
	{
		printf("%-30s", "Enter Employee Id:");
		cin >> empId;

		printf("%-30s", "Enter Name:");
		cin >> empName;

		printf("%-30s", "Enter Mobile No:");
		cin >> mobileNo;

		printf("%-30s", "Enter Basic Salary:");
		cin >> Basic;

		calculate();
	}

	void output()
	{
		printf("%-30s%d", "Employee Id:", empId);
		printf("\n%-30s%s", "Employee Name:", empName);
		printf("\n%-30s%s", "Mobile Id:", mobileNo);
		printf("\n%-30s%.2lf", "Basic Salary:", Basic);
		printf("\n%-30s%.2lf", "Dearness Allowance:", DA);
		printf("\n%-30s%.2lf", "House Rent Allowance:", HRA);
		printf("\n%-30s%.2lf", "Gross Salary:", Gross);
	}

	void outputRow()
	{
		// print a row of data in object
		// in a tabular form
		printf("%-5d%-20s%-13.2lf%-13.2lf%-13.2lf%-13.2lf\n",
			   empId, empName, Basic, HRA, DA, Gross);
	}

	double getGross()
	{
		// return inaccessible member of class
		return Gross;
	}
};

void tablulate(Employee eArr[], int n)
{
	// prints data of all employees
	// in a tabular form
	printf("%-5s%-20s%-13s%-13s%-13s%-13s\n",
		   "ID", "Name", "Basic", "HRA", "DA", "Gross");
	for (int i = 0; i < n; ++i)
		eArr[i].outputRow();
}

double meanSalary(Employee eArr[], int n)
{
	// calculate mean gross salary of all employees
	double total = 0;
	for (int i = 0; i < n; ++i)
		total += eArr[i].getGross();

	return total / (double)n;
}

int main()
{
	// array of object of type Employee
	Employee eArr[5];

	for (int i = 0; i < 5; ++i)
	{
		cout << "Enter details of Employee - " << i + 1 << '\n';
		eArr[i].input();
		cout << "\n\n";
	}

	cout << "\n\n";
	tablulate(eArr, 5);

	cout << "\n\nMean Salary of all employees  = " << meanSalary(eArr, 5);

	return 0;
}
