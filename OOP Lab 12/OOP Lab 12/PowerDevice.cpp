#include "PowerDevice.h"

PowerDevice::PowerDevice()
{
	PDID = 33;
}

PowerDevice::PowerDevice(int I)
{
	PDID = I;
}

void PowerDevice::display()
{
	cout << "Id of Power Device: " << PDID << endl;
}

PowerDevice::~PowerDevice()
{
	PDID = 0;
}