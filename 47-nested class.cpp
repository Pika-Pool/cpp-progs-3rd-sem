#include <iostream>
using namespace std;

class Outer
{
public:
	class Inner
	{
		int valI;

	public:
		Inner(int x = 0)
		{
			valI = x;
		}
		void show()
		{
			cout << "Value of valI = " << valI << endl;
		}
	};
};

int main()
{
	Outer::Inner objI(2);
	objI.show();

	return 0;
}
