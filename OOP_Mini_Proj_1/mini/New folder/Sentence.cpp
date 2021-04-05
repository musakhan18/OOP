#include "Sentence.h"

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


Sentence::Sentence()
{
	Fname = new char[9]{ 't','e','x','t','.','t','x','t','\0' };
	Sentence_Count = nullptr;
}

Sentence::Sentence(Paragraph& obj)
{
	Fname = obj.GetFileName();
	
	Sentence_Count = new int[obj.GetParagraph_count()];
	int i = 0;
	char read;
	int Count = 0;
	ifstream file;
	file.open(Fname);
	while (!file.eof())
	{
		file >> read;
		if (read=='@')
		{
			Sentence_Count[i] = Count;
			Count = 0;
			i++;
		}
		else if (read=='.')
		{
			Count++;
		}
	}
	/*for (int i = 0; i < GetParagraph_count()-1; i++)
	{
		cout << "Sentences in Paragraph " << i + 1 << ": " << Sentence_Count[i] << endl;
	}*/
}

void Sentence::SetSentence_count(Paragraph& obj)
{
	Fname = obj.GetFileName();

	Sentence_Count = new int[obj.GetParagraph_count()];
	
	int i = 0;
	char read;
	int Count = 0;
	ifstream file;
	file.open(Fname);
	while (!file.eof())
	{
		file >> read;
		if (read == '@')
		{
			Sentence_Count[i] = Count;
			Count = 0;
			i++;
		}
		else if (read == '.')
		{
			Count++;
		}
	}
	/*for (int i = 0; i < GetParagraph_count() - 1; i++)
	{
		cout << "Sentences in Paragraph " << i + 1 << ": " << Sentence_Count[i] << endl;
	}*/
}

int* Sentence::GetSentence_count()const
{
	Paragraph obj(Fname);
	int size = obj.GetParagraph_count();
	/*cout <<endl<< size << endl << endl;*/
	int* count;
	count = new int[size];
	for (int i = 0; i < size; i++)
	{
		count[i] = Sentence_Count[i];
	}
	return count;
}


//void Sentence::display()const
//{
//	Paragraph obj(Fname);
//	obj.display();
//	for (int i = 0; i < obj.GetParagraph_count(); i++)
//	{
//		cout << "Sentences in Paragraph " << i + 1 << ": " << Sentence_Count[i] << endl;
//	}
//}

void Sentence::operator+()
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
	file.close();
	for (int i = 0; i < size; i++)
	{
		if (Arr[i] >= 97 && Arr[i] <= 122)
		{
			Arr[i] = Arr[i] - 32;
		}
		if (Arr[i] == '@')
		{
			cout << endl;
			i++;
		}
		cout << Arr[i];
	}
}



void Sentence::operator-()
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

bool Sentence::operator!=(const Sentence& obj) const
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


bool Sentence::operator==(const Sentence& obj) const
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

void Sentence::Total_Sentence()
{
	Paragraph obj;
	obj.SetParagraph_count(Fname);
	int count = obj.GetParagraph_count();
	Sentence_Count = new int[count];
	int s_co = 0;
	int s_co1 = 0;
	char a;
	ifstream file;
	file.open(Fname);
	while (!file.eof())
	{
		file >> a;
		if (a == '@')
		{
			Sentence_Count[s_co] = s_co1;
			s_co1 = 0;
			s_co++;
		}
		else if (a == '.')
		{
			s_co1++;
		}
	}
	file.close();
}

Sentence& Sentence:: operator=(const Sentence& rhs)
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
	Arr = new char[s];
	int c = 0;
	file.open(Fname);
	while (!file.eof())
	{
		file >> Arr[c];
		c++;
	}
	file.close();
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