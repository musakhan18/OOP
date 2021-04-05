#pragma once
#include"Person.h"
class Student : private Person
{
	int ID;
	int Semester;
public:
	Student();
	Student(int, int, char*, int);
	void SetID(int);
	void SetSemester(int);
	int GetID()const;
	int GetSemester()const;
	void Display()const;
};