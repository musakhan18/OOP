#include "Employee.h"

int getsize(char* arr)
{
	int size = 0;
	while (arr[size] != '\0')
	{
		size++;
	}
	size++;
	return size;
}

Employee::Employee():Person()
{
	jobTitle=nullptr;
	courseTitle=nullptr;
	courseID = 0;
	employeeld = 0;
	joiningYear=0;
}

Employee::Employee(int EI, int CI, char* JT, char* CT, int JY, char* N, int A):Person( N, A)
{
	courseID = CI;
	employeeld = EI;
	joiningYear = JY;

	int Size = getsize(JT);
	jobTitle = new char[Size];
	for (int  i = 0; i < Size; i++)
	{
		jobTitle[i] = JT[i];
	}
	jobTitle[Size] = '\0';

	Size = getsize(CT);
	courseTitle = new char[Size];
	for (int i = 0; i < Size; i++)
	{
		courseTitle[i] = CT[i];
	}
	courseTitle[Size] = '\0';
}

void Employee::SetcourseID(int I)
{
	courseID = I;
}

void Employee::SetEmployeeld(int I)
{
	employeeld = I;
}

void Employee::SetjoiningYear(int I)
{
	joiningYear = I;
}

void Employee::SetjobTitle(char* JT)
{
	int Size = getsize(JT);
	jobTitle = new char[Size];
	for (int i = 0; i < Size; i++)
	{
		jobTitle[i] = JT[i];
	}
	jobTitle[Size] = '\0';
}

void Employee::SetcourseTitle(char* CT)
{
	int Size = getsize(CT);
	courseTitle = new char[Size];
	for (int i = 0; i < Size; i++)
	{
		courseTitle[i] = CT[i];
	}
	courseTitle[Size] = '\0';

}

int Employee::GetcourseID()const
{
	return courseID;
}

int Employee::GetjoiningYear()const
{
	return joiningYear;
}

int Employee::GetEmployeeld()const
{
	return employeeld;
}

char* Employee::GetjobTitle()const
{

	int Size = getsize(jobTitle);
	char* JT = new char[Size];
	for (int i = 0; i < Size; i++)
	{
		JT[i]= jobTitle[i];
	}
	JT[Size] = '\0';
	return JT;
	delete[]JT;
}

char* Employee::GetcourseTitle()const
{

	int Size = getsize(courseTitle);
	char* CT = new char[Size];
	for (int i = 0; i < Size; i++)
	{
		CT[i] = courseTitle[i];
	}
	CT[Size] = '\0';
	return CT;
	delete[]CT;
}

void Employee::display()const
{
	Person::display();
	cout << "Course Title: " << courseTitle << endl;
	cout << "Job Title: " << jobTitle << endl;
	cout << "Employee Id: " << employeeld << endl;
	cout << "Course ID: " << courseID << endl;
	cout << "Joining Year: " << joiningYear << endl;
}

