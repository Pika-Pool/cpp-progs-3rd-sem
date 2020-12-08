#include <iostream>
using namespace std;

class BankAccount
{
private:
	string name_of_depositor, account_number, account_type;
	float balance;

public:
	BankAccount()
	{
		input();
	}

	BankAccount(string name_of_depositor, string account_number, string account_type = "Savings", float balance = 0.0)
	{
		this->balance = balance;
		this->name_of_depositor = name_of_depositor;
		this->account_number = account_number;
		this->account_type = account_type;
	}

	void input()
	{
		cout << "Enter account details:\n";
		cout << "Accout number: ";
		cin >> account_number;

		cout << "\nName of depositor: ";
		cin >> name_of_depositor;

		cout << "\nAccount type: ";
		cin >> account_type;

		cout << "\nBalance: Rs. ";
		cin >> balance;
	}

	void display_details()
	{
		cout << "\nAccout number: " << account_number;
		cout << "\nName of depositor: " << name_of_depositor;
		cout << "\nAccount type: " << account_type;
		cout << "\nBalance: Rs. " << balance << "\n";
	}

	void deposit(float deposite_amount)
	{
		balance += deposite_amount;
		cout << "\nNew balance: " << balance << "\n";
	}

	void withdraw(float withdraw_amount)
	{
		if (balance < withdraw_amount)
		{
			cout << "\nYour balance is insufficient\n";
			cout << "Your current balance = Rs. " << balance << "\n";
		}
		else
		{
			balance -= withdraw_amount;
			cout << "\nRs. " << withdraw_amount << " withdrawn";
			cout << "\nCurrent balance = Rs. " << balance << "\n";
		}
	}
};

int main()
{
	BankAccount b1("Sri", "101");

	do
	{
		cout << "How can I help you?";
		cout << "\n1. Display details";
		cout << "\n2. Deposit money";
		cout << "\n3. Withdraw money";
		cout << "\n4. Exit\n";

		int choice;
		cin >> choice;

		switch (choice)
		{
		case 1:
			b1.display_details();
			break;
		case 2:
			float deposit_amount;
			cout << "How much money do you want to deposit?\t";
			cin >> deposit_amount;
			b1.deposit(deposit_amount);
			break;
		case 3:
			float withdraw_amount;
			cout << "How much money do you want to withdraw?\t";
			cin >> withdraw_amount;
			b1.withdraw(withdraw_amount);
			break;
		case 4:
			return 0;
		default:
			cout << "Invalid input";
		}

		cout << "\n\n";
	} while (true);

	return 0;
}
