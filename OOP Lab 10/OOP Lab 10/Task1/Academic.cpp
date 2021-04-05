#include "Academic.h"

int GetSize(char* arr)
{
	int size = 0;
	while (arr[size] != '\0')
	{
		size++;
	}
	size++;
	return size;
}

Academic::Academic() : Employee()
{
	
}

Academic::Academic(int CI, char* CT, char* N, int A, int EI, char* JT, int JY) : Employee(EI, CI, JT, CT, JY, N, A)
{
	/*employeeld = 0;
	joiningYear = 0;
	jobTitle = nullptr;*/
}

void Academic::SetcourseID(int id)
{
	courseID = id;
}

void Academic::SetcourseTitle(char* ptr)
{
	int length = GetSize(ptr);
	courseTitle = new char[length];
	for (int i = 0; i < length; i++)
	{
		courseTitle[i] = ptr[i];
	}
	courseTitle[length] = '\0';
}

int Academic::GetcourseID()const
{
	return courseID;
}

char* Academic::GetcourseTitle()const
{
	int length = GetSize(courseTitle);
	char* localtemp = new char[length];
	for (int i = 0; i < length; i++)
	{
		localtemp[i] = courseTitle[i];
	}
	localtemp[length] = '\0';
	return localtemp;
}

void  Academic::display()const
{
	Employee::display();
}

