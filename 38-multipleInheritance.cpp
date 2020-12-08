#include <iostream>
using namespace std;

class Alpha
{
protected:
	int i;

public:
	Alpha(int i)
	{
		this->i = i;
		cout << "Alpha constructor\n";
	}

	void show_alpha()
	{
		cout << "i = " << i << "\n";
	}
};

class Beta
{
protected:
	float f;

public:
	Beta(float f)
	{
		this->f = f;
		cout << "Beta constructor\n";
	}

	void show_beta()
	{
		cout << "f = " << f << "\n";
	}
};

// Gamma inherits both Beta and Alpha
class Gamma : public Beta, public Alpha
{
	int m, n;

public:
	// Beta will be initialized before Alpha
	// i.e., according to the sequence of inheritance
	Gamma(int i, float f, int m, int n) : Alpha(i), Beta(f)
	{
		this->m = m;
		this->n = n;
		cout << "Gamma contructor\n";
	}

	void show_gamma()
	{
		cout << "m = " << m << "\tn = " << n << "\n";
	}
};

int main()
{
	Alpha alpha(8);
	alpha.show_alpha();

	cout << "\n\n";

	Beta beta(9.22);
	beta.show_beta();

	cout << "\n\n";

	Gamma gamma(2, 12.55, 3, 9);

	// since Gamma inherits Alpha and Beta as public
	// all public members are inherited as public members too
	gamma.show_gamma();
	gamma.show_alpha();
	gamma.show_beta();

	return 0;
}
