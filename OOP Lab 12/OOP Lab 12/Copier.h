#pragma once
#include "Scanner.h"
#include "Printer.h"

class Copier :public Scanner, public Printer
{
public:
	Copier();
	Copier(int, int, int);
	void display();
	~Copier();
};