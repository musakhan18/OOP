#include<iostream>
#include"PowerDevice.h"
#include"Scanner.h"
#include"Printer.h"
#include"Copier.h"
using namespace std;
int main()
{
	Copier c_obj(12, 34, 33);
	cout << "\nCALLING Copier DISPLAY \n";
	c_obj.display();
}