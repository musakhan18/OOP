#include<iostream>
#include "Student.h"
#include "Person.h"
#include "Employee.h"
#include "Administration.h"
#include "Academic.h"
#include "DeanHOD.h"

using namespace std;

int main()
{

	char* name = new char[20]{ 'S','h','a','k','a','\0' };
	char* JT = new char[20]{ 'C','h','a','p','r','a','s','i','\0' };
	char* CT = new char[10]{ 'C','S','\0' };
	
	Person p_obj(name,2001);
	cout << "Person Class Object" << endl;
	cout << "-----------------------" << endl;
	p_obj.display();
	cout << endl;

	Student s_obj(123, 3, name, 2001);
	cout << "Student Class Object" << endl;
	cout << "-----------------------" << endl;
	s_obj.Display();

	cout << endl;
	DeanHOD D_obj(230, 321, JT, CT, 1990, name, 1980);
	cout << "Dean Class Object" << endl;
	cout << "-----------------------" << endl;
	D_obj.display();

	delete[]name;
	name = nullptr;
	delete[]JT;
	JT = nullptr;
	delete[]CT;
	CT = nullptr;
	cout << endl;
	return 0;
}