#include "Administration.h"

int getSize(char* arr)
{
	int size = 0;
	while (arr[size] != '\0')
	{
		size++;
	}
	size++;
	return size;
}

Administration::Administration():Employee()
{

}

Administration::Administration(int EI, int CI, char* JT, char* CT, int JY, char* N, int A) : Employee( EI,  CI,  JT,  CT, JY,  N,  A)
{
	courseID = 0;
	courseTitle = nullptr;
}

void Administration::SetJobTitle(char* ptr)
{
	int length = getSize(ptr);

	jobTitle = new char[length];
	for (int i = 0; i < length; i++)
	{
		jobTitle[i] = ptr[i];
	}
	jobTitle[length] = '\0';
}

char* Administration::GetJobTitle()const
{
	int length = getSize(jobTitle);
	char* localtemp = new char[length];
	for (int i = 0; i < length; ++i)
	{
		localtemp[i] = jobTitle[i];
	}
	localtemp[length] = '\0';
	return localtemp;
}

Administration::~Administration()
{
	delete[]jobTitle;
	jobTitle = nullptr;
	delete[]courseTitle;
	courseTitle = nullptr;
}