#include "Scanner.h"

Scanner::Scanner() :PowerDevice()
{
	SID = 0;
}

Scanner::Scanner(int a, int b) : PowerDevice(b)
{
	SID = a;
}

void Scanner::display()const
{
	cout << "id of scanner: " << SID << endl;
}

Scanner::~Scanner()
{
	SID = 0;
}