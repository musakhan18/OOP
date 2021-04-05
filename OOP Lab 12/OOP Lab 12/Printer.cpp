#include "Printer.h"

Printer::Printer() :PowerDevice()
{
	PID = 0;
}
Printer::Printer(int a, int b) : PowerDevice(b)
{
	PID = a;
}

void Printer::display()const
{
	cout << "Id of Printer: " << PID << endl;
}

Printer::~Printer()
{
	PID = 0;
}