#include <iostream>
using namespace std;

class USBDevice
{
private:
	long m_id;

public:
	USBDevice(long id)
		: m_id(id)
	{
	}

	long getID() { return m_id; }
};

class NetworkDevice
{
private:
	long m_id;

public:
	NetworkDevice(long id)
		: m_id(id)
	{
	}

	long getID() { return m_id; }
};

// WirelessAdapter is derived from USBDevice and NetworkDevice
class WirelessAdapter : public USBDevice, public NetworkDevice
{
	const char *label;

public:
	WirelessAdapter(const char *label, long usbId, long networkId)
		: USBDevice(usbId), NetworkDevice(networkId), label(label)
	{
	}

	void print()
	{
		cout << "Wireless Adapter: \"" << label << "\"";
		cout << "\nUSB Device ID : " << USBDevice::getID();			// resolving ambiguity using scope resolution
		cout << "\nNetwork Device ID : " << NetworkDevice::getID(); // resolving ambiguity using scope resolution
	}
};

int main()
{
	WirelessAdapter wa1("WA1", 5442, 181742);
	// cout << wa1.getID(); // Which getID() do we call?

	cout << "Wireless Adapter:\n";
	cout << "USB Device ID : " << wa1.USBDevice::getID();			// resolving ambiguity using scope resolution
	cout << "\nNetwork Device ID : " << wa1.NetworkDevice::getID(); // resolving ambiguity using scope resolution

	WirelessAdapter wa2("WA2", 5442, 774822);
	cout << "\n\n";
	wa2.print();

	return 0;
}
