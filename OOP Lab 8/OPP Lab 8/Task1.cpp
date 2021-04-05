#include<iostream>
#include"SalonEmployees.h"
using namespace std;

void print(const SalonEmployees);

int main()
{
	char* name = new char[15];
	char* ConNum = new char[15];
	char* gen = new char[15];
	char* Sh = new char[15];
	int id;
	double sal;

	cout << "Enter id: ";cin >> id;
	cout << "Enter NAme:";cin >> name;
	cout << "ENter contact:";cin >> ConNum;
	cout << "Enter gender:";cin >> gen;
	cout << "Salaray:";cin >> sal;
	cout << "Enter Shift:";cin >> Sh;
	SalonEmployees obj1(id, name, gen, ConNum, sal, Sh);
	cout << "Output of parameterized Const" << endl;
	print(obj1);
	SalonEmployees obj2(obj1);
	print(obj2);
}

void print(const SalonEmployees obj)
{
	cout << endl;
	cout << "Id: " << obj.getid() << endl;
	cout << "Name: " << obj.getname() << endl;
	cout << "Gender: " << obj.getgender() << endl;
	cout << "Contact Number: " << obj.getcontact() << endl;
	cout << "Salary: " <<obj.getsalary() << endl;
	cout << endl;
}