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
};

class Employees
{
private:
	Employee *empArr;
	int size;

public:
	Employees()
	{
		cout << "Enter size of employee empArray:\t";
		cin >> size;

		empArr = new Employee[size];
	}

	void input()
	{
		for (int i = 0; i < size; ++i)
		{
			cout << "\n\nEnter details of employee: " << i + 1 << "\n";
			empArr[i].input();
		}
	}

	void display()
	{
		printf("%-5s%-20s%-13s%-13s%-13s%-13s\n",
			   "ID", "Name", "Basic", "HRA", "DA", "Gross");
		for (int i = 0; i < size; ++i)		
			empArr[i].outputRow();
	}

	~Employees()
	{
		delete[] empArr;
	}
};

int main()
{
	Employees e1;
	e1.input();
	cout << "\n\n";
	e1.display();

	return 0;
}
