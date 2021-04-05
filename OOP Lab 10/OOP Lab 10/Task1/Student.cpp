#include<iostream>
using namespace std ;
#include "Student.h"
Student::Student() : Person()		// base initializer list
{
	ID = 0;
	Semester = 0; 
}
Student::Student(int I, int S, char* N, int A) : Person(N, A)
{
	ID = I;
	Semester = S;
}

void Student::SetID(int I)
{
	ID = I;
}


void Student::SetSemester(int S)
{
	Semester = S;
}

int Student::GetSemester()const
{
	return Semester;
}

int Student::GetID()const
{
	return ID;
}

void Student::Display()const
{
	Person::display();
	cout << "Student's ID: " << ID << endl ;
	cout << "Student's Semester: " << Semester << endl ;
}
