#include<iostream>
#include<string>
#include"Employee.h"
using namespace std;
int main()
{
	Employee* E1 = new Employee();
	Employee* E2 = new Employee();
	Employee* E3 = new Employee();
	Employee obj;

	E1->SetName("Musa");
	E1->SetEmpCode(1234);
	E1->SetDOB(2001);
	E1->SetDOJ("14-3-2020");

	E2->SetName("Faraz");
	E2->SetEmpCode(5678);
	E2->SetDOB(1980);
	E2->SetDOJ("14-5-2020");

	E3->SetName("Taha");
	E3->SetEmpCode(91011);
	E3->SetDOB(1990);
	E3->SetDOJ("11-2-2020");

	obj.Display(E1);
	obj.Display(E2);
	obj.Display(E3);
	obj.Count(E1, E2, E3);
}