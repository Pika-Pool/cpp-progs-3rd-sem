#include <string>
#include <iostream>
using namespace std;

class Animal // This Animal is an abstract base class
{
protected:
	const char *name;

public:
	Animal(const char *n) : name(n) {}

	const char *getName() const
	{
		return name;
	}
	virtual const char *speak() const = 0; // speak is now a pure virtual function
};

const char *Animal::speak() const // even though it has a body
{
	return "buzz";
}

class Cow : public Animal
{
public:
	Cow(const char *name) : Animal(name) {}

	// implementing absract base class's
	// pure virtual function
	const char *speak() const
	{
		return "Moo";
	}
};

class Dragonfly : public Animal
{

public:
	Dragonfly(const char *name) : Animal(name) {}

	const char *speak() const // this class is no longer abstract because we defined this function
	{
		return Animal::speak(); // use Animal's default implementation
	}
};

int main()
{
	Cow cow("Betsy");
	cout << "Implementing Animal:speak() in Cow\n";
	cout << cow.getName() << " says " << cow.speak() << '\n';

	Dragonfly dragonfly("Buzz LightYear");
	cout << "\n\nUsing default Animal:speak() implementation in Dragonfly\n";
	cout << dragonfly.getName() << " says " << dragonfly.speak() << "\n";

	return 0;
}
