#include "Copier.h"

Copier::Copier() :Scanner(), Printer()
{

}
Copier::Copier(int a, int b, int c) : Scanner(a, c), Printer(b, c)
{

}

void Copier::display()
{
	cout << "Id of Power Device: " << PDID << endl;
	cout << "Id of Scanner: " << SID << endl;
	cout << "Id of Printer: " << PID << endl;
}

Copier::~Copier()
{

}