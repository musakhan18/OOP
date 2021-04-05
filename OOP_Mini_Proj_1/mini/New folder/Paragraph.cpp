#include "Paragraph.h"

int GetSize(char* arr)
{
	int size = 0;
	while (arr[size]!='\0')
	{
		size++;
	}
	size++;
	return size;
}

Paragraph::Paragraph()
{
	Fname = new char[9]{ 't','e','x','t','.','t','x','t','\0' };
	Paragraph_Count = 0;
	Arr = nullptr;
}

Paragraph::Paragraph(char* name)
{
	int Size = GetSize(name);
	Fname = new char[Size];
	for (int i = 0; i < Size; i++)
	{
		Fname[i] = name[i];
	}
	Fname[Size] = '\0';
	/*int size = GetSize(a);
	Arr = new char[size];
	for (int i = 0; i < size; i++)
	{
		Arr[i] = a[i];
	}*/
	char arr;
	int s = 0;
	int Count = 0;
	ifstream file;
	file.open(Fname);
	/*while (file >> arr)
	{
		s++;
	}
	Arr = new char[s];
	file.close();
	s = 0;*/
	while (!file.eof())
	{
		file >> arr;
		if (arr == '@')
		{
			++Count;
		}
	}
	Paragraph_Count = Count - 1;
	file.close();
}

void Paragraph::SetParagraph_count(char* name)
{
	int size = GetSize(name);
	Fname = new char[size];
	for (int i = 0; i < size; i++)
	{
		Fname[i] = name[i];
	}
	Fname[size] = '\0';
	char arr;
	int Count = 0;
	ifstream file;
	file.open(Fname);
	while (!file.eof())
	{
		file >> arr;
		if (arr == '@')
		{
			++Count;
		}
	}
	Paragraph_Count = Count - 1;
	
	file.close();
}

int Paragraph::GetParagraph_count()const
{
	return Paragraph_Count;
}
void Paragraph::SetFileName(char* name)
{
	int size = GetSize(name);
	Fname = new char[size];
	for (int i = 0; i < size; i++)
	{
		Fname[i] = name[i];
	}
	Fname[size] = '\0';
}


char* Paragraph::GetFileName()const
{
	char* name;
	int size = GetSize(Fname);
	name = new char[size];
	for (int i = 0; i < size; i++)
	{
		name[i] = Fname[i];
	}
	name[size] = '\0';
	return name;
}

void Paragraph::display()const
{
	cout << "Numbers of Paragraph: " << Paragraph_Count << endl;
}

void Paragraph::operator+()
{
	ifstream file;
	file.open(Fname);
	int size = 0;
	char a;
	while(!file.eof())
	{
		file >> a;
		size++;
	}
	char* Arr = new char[size];
	file.close();
	file.open(Fname);
	size = 0;
	while (!file.eof())
	{
		file >> Arr[size];
		size++;
	}
	file.close();
	for (int i = 0; i < size; i++)
	{
		if (Arr[i] >= 97 && Arr[i] <= 122)
		{
			Arr[i] = Arr[i] - 32;
		}
		if (Arr[i]=='@')
		{
			cout << endl;
			i++;
		}
		cout << Arr[i];
	}
}



void Paragraph::operator-()
{
	ifstream file;
	file.open(Fname);
	int size = 0;
	char a;
	while (!file.eof())
	{
		file >> a;
		size++;
	}
	char* Arr = new char[size];
	file.close();
	file.open(Fname);
	size = 0;
	while (!file.eof())
	{
		file >> Arr[size];
		size++;
	}

	for (int i = 0; i < size; i++)
	{
		if (Arr[i] >= 65 && Arr[i] <= 90)
		{
			Arr[i] -= 32;
		}
		if (Arr[i] == '@')
		{
			cout << endl;
			i++;
		}
		cout << Arr[i];
	}
}

bool Paragraph::operator!=(const Paragraph& obj) const
{
	bool flag = false;

	ifstream file;
	file.open(Fname);
	char Characters1;
	int Characters_Count_1 = 0;
	int sentence_Count_1 = 0;
	while (!file.eof())
	{
		file >> Characters1;
		Characters_Count_1++;
		if (Characters1 == '.')
		{
			sentence_Count_1++;
		}
	}
	file.close();
	string Words1;
	int Words_Count_1 = 0;
	file.open(Fname);
	while (!file.eof())
	{
		file >> Words1;;
		Words_Count_1++;
	}
	file.close();

	char Characters2;
	int Characters_Count_2 = 0;
	int sentence_Count_2 = 0;
	file.open(obj.Fname);
	while (!file.eof())
	{
		file >> Characters2;
		Characters_Count_2++;
		if (Characters2 == '.')
		{
			sentence_Count_2++;
		}
	}
	file.close();
	string Words2;
	int Words_Count_2 = 0;
	file.open(obj.Fname);
	while (!file.eof())
	{
		file >> Words2;
		Words_Count_2++;
	}

	bool Characters_check = 0;
	if (Characters_Count_1 != Characters_Count_2)
	{
		Characters_check = 1;
	}

	bool sentence_check = 0;
	if (sentence_Count_1 != sentence_Count_2)
	{
		sentence_check = 1;
	}

	bool Words_check = 0;
	if (Words_Count_1 != Words_Count_2)
	{
		Words_check = 1;
	}

	bool Check;
	if (Words_check && sentence_check && Characters_check)
	{
		Check = 1;
	}
	else
	{
		Check = 0;
	}
	return Check;
}


bool Paragraph::operator==(const Paragraph& obj) const
{
	bool flag = false;

	ifstream file;
	file.open(Fname);
	char Characters1;
	int Characters_Count_1 = 0;
	int sentence_Count_1 = 0;
	while (!file.eof())
	{
		file >> Characters1;
		Characters_Count_1++;
		if (Characters1 == '.')
		{
			sentence_Count_1++;
		}
	}
	file.close();
	string Words1;
	int Words_Count_1 = 0;
	file.open(Fname);
	while (!file.eof())
	{
		file >> Words1;;
		Words_Count_1++;
	}
	file.close();

	char Characters2;
	int Characters_Count_2 = 0;
	int sentence_Count_2 = 0;
	file.open(obj.Fname);
	while (!file.eof())
	{
		file >> Characters2;
		Characters_Count_2++;
		if (Characters2 == '.')
		{
			sentence_Count_2++;
		}
	}
	file.close();
	string Words2;
	int Words_Count_2 = 0;
	file.open(obj.Fname);
	while (!file.eof())
	{
		file >> Words2;
		Words_Count_2++;
	}

	bool Characters_check = 0;
	if (Characters_Count_1 == Characters_Count_2)
	{
		Characters_check = 1;
	}

	bool sentence_check = 0;
	if (sentence_Count_1 == sentence_Count_2)
	{
		sentence_check = 1;
	}

	bool Words_check = 0;
	if (Words_Count_1 == Words_Count_2)
	{
		Words_check = 1;
	}

	bool Check;
	if (Words_check && sentence_check && Characters_check)
	{
		Check = 1;
	}
	else
	{
		Check = 0;
	}
	return Check;
}

Paragraph& Paragraph:: operator=(const Paragraph& rhs)
{
	if (this != &rhs)
	{
		if (Arr)
		{
			delete[]Arr;
			Arr = nullptr;
		}
		int count = 0;
		while (rhs.Arr[count] != '\0')
		{
			count++;
		}
		Arr = new char[count + 1];
		for (int i = 0; i < count; i++)
		{
			Arr[i] = rhs.Arr[i];
		}
		Arr[count] = '\0';
	}
	return *this;
}

void Paragraph::SetArr(char* a)
{
	int size = GetSize(a);
	Arr = new char[size];
	for (int i = 0; i < size; i++)
	{
		Arr[i] = a[i];
	}
}
char* Paragraph::GetArr()const
{
	char* a;
	int Size = GetSize(Arr);
	a = new char[Size];
	for (int i = 0; i < Size; i++)
	{
		a[i] = Arr[i];
	}
	return a;
}


void Paragraph::operator%(int x)
{
	int s = 0;
	char a;
	ifstream file;
	cout << Fname << endl;
	file.open(Fname);
	while (!file.eof())
	{
		file >> a;
		s++;
	}
	file.close();
	Arr = new char[s];
	int c = 0;
	file.open(Fname);
	while (!file.eof())
	{
		file >> Arr[c];
		c++;
	}
	file.close();
	int count = GetSize(Arr);
	
	for (int i = 0; i < count; i++)
	{
		if (Arr[i] <= 97 && Arr[i] <= 122 && Arr[i] >= 65 && Arr[i] <= 90 || Arr[i] == 46)
		{
			Arr[i] = Arr[i] + x;

			if (Arr[i] == 91)
			{
				char t = 97 - Arr[i];
				Arr[i] = t + Arr[i];
			}
			else if (Arr[i] == 92)
			{
				char t = 97 - Arr[i];
				Arr[i] = t + Arr[i] + 1;
			}
		}
		else
		{
			if (Arr[i] >= 97 && Arr[i] <= 122 && Arr[i] >= 65 && Arr[i] >= 90 || Arr[i] == 46)
			{
				Arr[i] = Arr[i] + x;
				if (Arr[i] == 124)
				{
					Arr[i] = Arr[i] - 65;
					Arr[i] = Arr[i] + 7;
				}
				else if (Arr[i] == 123)
				{
					Arr[i] = Arr[i] - 65;
					Arr[i] = Arr[i] + 7;
				}
			}
		}
	}
	for (int i = 0; i < s-1; i++)
	{
		if (Arr[i] == '@')
		{
			cout << endl;
			i++;
		}
		cout << Arr[i];
	}
}

void Paragraph::operator*(int x)
{
	int s = 0;
	char a;
	ifstream file;
	file.open(Fname);
	while (!file.eof())
	{
		file >> a;
		s++;
	}
	file.close();
	/*Arr = new char[s];
	int c = 0;
	file.open(Fname);*/
	/*while (!file.eof())
	{
		file >> Arr[c];
		c++;
	}*/
	/*file.close();*/
	int count = GetSize(Arr);

	for (int i = 0; i < count; i++)
	{
		if (Arr[i] <= 97 && Arr[i] <= 122 && Arr[i] >= 65 && Arr[i] <= 90 || Arr[i] == 46)
		{
			Arr[i] = Arr[i] - x;

			if (Arr[i] == 63)
			{
				Arr[i] = Arr[i] + 65;
				Arr[i] = Arr[i] - 7;
			}
			else if (Arr[i] == 64)
			{
				Arr[i] = Arr[i] + 65;
				Arr[i] = Arr[i] - 7;
			}
		}
		else
		{
			if (Arr[i] >= 97 && Arr[i] <= 122 && Arr[i] >= 65 && Arr[i] >= 90 || Arr[i] == 46)
			{
				Arr[i] = Arr[i] - x;
				if (Arr[i] == 95)
				{

					Arr[i] = Arr[i] - 6;
				}
				else if (Arr[i] == 96)
				{
					Arr[i] = Arr[i] - 6;
				}
			}
		}
	}

	for (int i = 0; i < s - 1; i++)
	{
		if (Arr[i] == '@')
		{
			cout << endl;
			i++;
		}
		cout << Arr[i];
	}
}