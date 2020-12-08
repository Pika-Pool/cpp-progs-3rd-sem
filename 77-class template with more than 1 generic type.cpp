#include <iostream>
using namespace std;

template <typename T1, typename T2>
class KeyValue
{
	T1 key;
	T2 value;

public:
	KeyValue(T1 k, T2 v) : key(k), value(v) {}

	friend ostream &operator<<(ostream &out, const KeyValue &kv)
	{
		out << kv.key << " : ( " << kv.value << " )";
		return out;
	}
};

int main()
{
	KeyValue<int, char> a(21, 'l');
	KeyValue<char, float> b('j', 43.22);
	KeyValue<int, KeyValue<char, char>> c(21, KeyValue<char, char>('a', 'z'));

	cout << "Key : ( Value ) pairs:\n\n";
	cout << a << "\n\n"
		 << b << "\n\n"
		 << c;

	return 0;
}
