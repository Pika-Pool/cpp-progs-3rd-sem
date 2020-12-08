#include <iostream>
using namespace std;

class Time
{
private:
	int h, m, s;

public:
	Time(int hours = 0, int minutes = 0, int seconds = 0)
	{
		if (hours < 0 || minutes < 0 || seconds < 0)
			throw "Invalid time. Values can't be negative";

		h = hours;
		m = minutes;
		s = seconds;
		normlize();
	}

	// convert overflowed values to standard
	// seconds <= 60
	// minutes <= 60
	// hours <= 24
	void normlize()
	{
		if (s >= 60)
		{
			m += s / 60;
			s %= 60;
		}
		if (m >= 60)
		{
			h += m / 60;
			m %= 60;
		}
		if (h >= 24)
		{
			h %= 24;
		}
	}

	// display in format hh:mm:ss
	void display()
	{
		printf("%02d:%02d:%02d\n", h, m, s);
	}

	// sum of 2 time objects
	Time sum(const Time &t)
	{
		return Time(this->h + t.h, this->m + t.m, this->s + t.s);
	};
};

int main()
{
	// get input
	int h, m, s;
	cout << "Enter a time(hh mm ss), t1 = ";
	cin >> h >> m >> s;
	Time t1(h, m, s);

	cout << "Enter a time(hh mm ss), t2 = ";
	cin >> h >> m >> s;
	Time t2(h, m, s);

	// display
	cout << "\n\nt1 => ";
	t1.display();

	cout << "t2 => ";
	t2.display();

	Time t3 = t1.sum(t2);
	cout << "\nt1 + t2 => ";
	t3.display();

	return 0;
}
