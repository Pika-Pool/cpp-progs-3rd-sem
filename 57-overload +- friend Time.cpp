#include <iostream>
using namespace std;

class Time
{
private:
	int h, m;
	long long s;

public:
	Time(int hours = 0, int minutes = 0, long seconds = 0)
	{
		if (hours < 0 || minutes < 0 || seconds < 0)
			throw "Invalid time. Values can't be negative";

		h = hours;
		m = minutes;
		s = seconds;
		normlize();
	}

	// returns total time converted to seconds
	long long getTotalSeconds() const
	{
		return s + m * 60 + h * 60 * 60;
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

	friend ostream &operator<<(ostream &out, Time &t);
	friend istream &operator>>(istream &in, Time &t);

	// overload + and - operators
	friend Time operator+(const Time &t1, const Time &t2);
	friend Time operator-(const Time &t1, const Time &t2);
};

Time operator+(const Time &t1, const Time &t2)
{
	// add time in seconds and normalize to correct format
	long long totalSeconds = t1.getTotalSeconds() + t2.getTotalSeconds();
	return Time(0, 0, totalSeconds);
}

Time operator-(const Time &t1, const Time &t2)
{
	// subtract time in seconds and return absolute value
	// as -ve time doesn't make sense
	long long totalSeconds = t1.getTotalSeconds() - t2.getTotalSeconds();
	return Time(0, 0, totalSeconds < 0 ? -totalSeconds : totalSeconds);
}

// get time from input stream
istream &operator>>(istream &in, Time &t)
{
	cout << "Enter hours:\t";
	in >> t.h;

	cout << "Enter minutes:\t";
	in >> t.m;

	cout << "Enter seconds:\t";
	in >> t.s;

	t.normlize();

	return in;
}

// display in format hh:mm:ss
ostream &operator<<(ostream &out, Time &t)
{
	printf("%02d:%02d:%02lld", t.h, t.m, t.s);
	return out;
}

int main()
{
	Time t1, t2; // objects of type Time

	cout << "Enter time 1:\n";
	cin >> t1;

	cout << "\nEnter time 2:\n";
	cin >> t2;

	cout << "\n\nt1  =  " << t1;
	cout << "\nt2  =  " << t2 << "\n";

	// add time obejcts
	Time t3 = t1 + t2;
	cout << "t1 + t2  =  " << t3;

	// subtract time objects
	Time t4 = t1 - t2;
	cout << "\n| t1 - t2 | =  " << t4;

	return 0;
}
