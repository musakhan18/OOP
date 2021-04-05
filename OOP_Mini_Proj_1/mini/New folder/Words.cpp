#include "Words.h"

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

Words::Words()
{
	WordsCount = nullptr;
	Arr = nullptr;
	Fname = new char[9]{ 't','e','x','t','.','t','x','t','\0' };
}

Words::Words(Paragraph& Para, Sentence& Sent)
{
	int ParaCount = Para.GetParagraph_count();
	int* SenCount = Sent.GetSentence_count();
	int size = 0;
	for (int i = 0; i < ParaCount; i++)
	{
		size += SenCount[i];
	}
	WordsCount = new int[size];
	char* name = Para.GetFileName();
	int s = getsize(name);
	Fname = new char[s];
	for (int i = 0; i < s; i++)
	{
		Fname[i] = name[i];
	}
	Fname[s] = '\0';
	string read;
	ifstream file;
	file.open(Fname);
	int WordsC;
	bool check ;

		for (int i = 0; i < size; i++)
		{
			 check = true;
			WordsC = 0;
			while (check)
			{
				file >> read;
				int size1 = read.size();
				WordsC++;
				for (int i = 0; i < size1; i++)
				{
					if (read[i] != '.')
					{
						check = true;
					}
					else
					{
						check = false;
						break;
					}
				}
			}
			WordsCount[i] = WordsC;
		}
	
	file.close();
	 file;
	file.open(Fname);
	 s = 0;
	char r;
	while (file>>r)
	{
		s++;
	}
	file.close();
	file.open(Fname);
	Arr = new char[s];
	s = 0;
	while (!file.eof())
	{
		file >> Arr[s];
		s++;
	}
	file.close();
}

void Words::SetWordsCount(Paragraph& Para, Sentence& Sent)
{
	int ParaCount = Para.GetParagraph_count();
	int* SenCount = Sent.GetSentence_count();
	int size = 0;
	for (int i = 0; i < ParaCount; i++)
	{
		size += SenCount[i];
	}
	WordsCount = new int[size];
	char* name = Para.GetFileName();
	int s = getsize(name);
	Fname = new char[s];
	for (int i = 0; i < s; i++)
	{
		Fname[i] = name[i];
	}
	Fname[s] = '\0';
	string read;
	ifstream file;
	file.open(Fname);
	int WordsC;
	bool check;
	
		for (int i = 0; i < size; i++)
		{
			check = true;
			WordsC = 0;
			while (check)
			{
				file >> read;
				int size1 = read.size();
				WordsC++;
				for (int i = 0; i < size1; i++)
				{
					if (read[i] != '.')
					{
						check = true;
					}
					else
					{
						check = false;
						break;
					}
				}
			}
			WordsCount[i] = WordsC;
		}
	
	file.close();
}

int* Words::GetWordsCount()const
{
	Paragraph obj;
	obj.SetParagraph_count(Fname);
	Sentence obj1;
	obj1.Total_Sentence();
	int* temp_arr;
	int count = obj.GetParagraph_count();
	int* temp = obj1.GetSentence_count();
	int size = 0;
	for (int i = 0; i < count; i++)
	{
		size = size + temp[i];
	}

	temp_arr = new int[size];

	for (int i = 0; i < size; i++)
	{
		temp_arr[i] = WordsCount[i];
	}

	return temp_arr;
}

void Words::SetArr(char* a)
{
	int size = getsize(a);
	Arr = new char[size];
	for (int i = 0; i < size; i++)
	{
		Arr[i] = a[i];
	}
}
char* Words::GetArr()const
{
	char* a;
	int Size = getsize(Arr);
	a = new char[Size];
	for (int i = 0; i < Size; i++)
	{
		a[i] = Arr[i];
	}
	return a;
}


void Words::Total_Word_Count()
{
	Paragraph obj;
	obj.SetParagraph_count(Fname);
	Sentence obj1;
	obj1.Total_Sentence();
	int ParaCount = obj.GetParagraph_count();
	int* SenCount = obj1.GetSentence_count();
	int size = 0;
	for (int i = 0; i < ParaCount; i++)
	{
		size += SenCount[i];
	}
	WordsCount = new int[size];
	char* name = obj.GetFileName();
	int s = getsize(name);
	Fname = new char[s];
	string read;
	ifstream file;
	file.open(Fname);
	int WordsC;
	bool check;
	
		for (int i = 0; i < size; i++)
		{
			check = true;
			WordsC = 0;
			while (check)
			{
				file >> read;
				int size1 = read.size();
				WordsC++;
				for (int i = 0; i < size1; i++)
				{
					if (read[i] != '.')
					{
						check = true;
					}
					else
					{
						check = false;
						break;
					}
				}
			}
			WordsCount[i] = WordsC;
		}
	
	file.close();
}

void Words::operator+()
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



void Words::operator-()
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

bool Words::operator!=(const Words& obj) const
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


bool Words::operator==(const Words& obj) const
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

Words& Words:: operator=(const Words& rhs)
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