#include <iostream>
using namespace std;

// Stack class that can store data of any type
template <typename T>
class Stack
{
private:
	/*
	* arr is the stack storage
	* top points to last pushed element
	* stackSize is the max-size of stack
	*/
	T *arr;
	int top, stackSize;

public:
	Stack(int size)
	{
		// use constructor to initialize max-size of stack
		// using dynamic allocation, deallocating memory
		// in destructor
		stackSize = size;
		arr = new T[size];
		top = -1;
	}

	// insert element in stack
	void push(int el)
	{
		if (top >= stackSize - 1)
		{
			cout << "Stack full!!\n";
			return;
		}
		arr[++top] = el;
	}

	// remove last pushed element from stack
	void pop()
	{
		if (top < 0)
		{
			cout << "Stack empty!!\n";
			return;
		}
		cout << arr[top--] << " was popped\n";
	}

	// print all elements in stack
	// int the direction they'll be popped
	void display()
	{
		if (top < 0)
		{
			cout << "Stack empty!!\n";
			return;
		}

		int counter = top;
		while (counter >= 0)
		{
			cout << arr[counter--] << "->";
		}
		cout << '\n';
	}

	~Stack()
	{
		// deallocate arr memory which was allocated
		// in constructor
		cout << "Destructor";
		delete[] arr;
	}
};

int main()
{
	int size;
	cout << "What is the size of the stack??\t";
	cin >> size;

	// initialize stack size as entered by user
	// storing data of type int
	Stack<int> s(size);

	do
	{
		cout << "What do you wanna do?\n";
		cout << "1. Push Element\n";
		cout << "2. Pop Element\n";
		cout << "3. Display stack\n";
		cout << "4. Exit\n";

		// choice is the index of above printed options
		int choice;
		cin >> choice;

		switch (choice)
		{
		case 1:
			cout << "Enter value(int) to push:\t";
			int el;
			cin >> el;
			s.push(el);
			break;

		case 2:
			s.pop();
			break;

		case 3:
			s.display();
			break;

		case 4:
			return 0;

		default:
			cout << "Invalid input!!";
			break;
		}

		cout << "\n\n";

	} while (true);

	return 0;
}
