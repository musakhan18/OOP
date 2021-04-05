#include <iostream>
#include"Point.h"
#include"Creature.h"
using namespace std;

int main()
{
	Point P(3, 5);
	char* name = new char[5]{ 'M','u','s','a','\0' };
	Creature C(name, P);
	C.move();
	C.display();
}