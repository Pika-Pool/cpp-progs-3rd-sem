#include <iostream>
using namespace std;

// class template with >1 generic type
// KeyValue stores a pair of data together
template <typename T1, typename T2>
class KeyValue
{
	T1 key;
	T2 value;

public:
	KeyValue(T1 k, T2 v) : key(k), value(v) {}

	// overload << opertor to print object of this class
	friend ostream &operator<<(ostream &out, const KeyValue &kv)
	{
		out << kv.key << " : ( " << kv.value << " )";
		return out;
	}
};

int main()
{
	// INT AND CHAR
	KeyValue<int, char> a(21, 'l');
	// CHAR AND FLOAT
	KeyValue<char, float> b('j', 43.22);
	// INT AND KeyValue which further stores CHAR AND CHAR
	KeyValue<int, KeyValue<char, char>> c(21, KeyValue<char, char>('a', 'z'));

	cout << "Key : ( Value ) pairs:\n\n";
	cout << a << "\n\n"
		 << b << "\n\n"
		 << c;

	return 0;
}
