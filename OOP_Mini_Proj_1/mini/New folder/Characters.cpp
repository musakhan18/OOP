#include "Characters.h"

Characters::Characters()
{
	Fname = new char[9]{ 't','e','x','t','.','t','x','t','\0' };
	Characters_Count = nullptr;
}

Characters::Characters(Paragraph& Para, Sentence& Sen, Words& Wor)
{
	int paraC = Para.GetParagraph_count();
	int* SentC = Sen.GetSentence_count();
	int size = 0;
	for (int i = 0; i < paraC; i++)
	{
		size = size + SentC[i];
	}
	int wordcount = 0;
	int* temp2 = Wor.GetWordsCount();
	for (int j = 0; j < size; j++)
	{
		wordcount = wordcount + temp2[j];
	}
	Characters_Count = new int[wordcount];
	int k = 0;
	char* temp1 = Para.GetFileName();
	while (temp1[k] != '\0')
	{
		k++;
	}
	Fname = new char[k + 1];
	for (int i = 0; i < k; i++)
	{
		Fname[i] = temp1[i];
	}
	Fname[k] = '\0';
	ifstream file;
	file.open(Fname);
	int tt1 = 0;
	string t;
	while (!file.eof())
	{
		file >> t;
		int counter = 0;

		counter = t.size();
		Characters_Count[tt1] = counter;
		tt1++;
	}
}

void Characters::SetCharacters_Count(Paragraph& Para, Sentence& Sen, Words& Wor)
{
	int paraC = Para.GetParagraph_count();
	int* SentC = Sen.GetSentence_count();
	int size = 0;
	for (int i = 0; i < paraC; i++)
	{
		size = size + SentC[i];
	}
	int wordcount = 0;
	int* temp2 = Wor.GetWordsCount();
	for (int j = 0; j < size; j++)
	{
		wordcount = wordcount + temp2[j];
	}
	Characters_Count = new int[wordcount];
	int k = 0;
	char* temp1 = Para.GetFileName();
	while (temp1[k] != '\0')
	{
		k++;
	}
	Fname = new char[k + 1];
	for (int i = 0; i < k; i++)
	{
		Fname[i] = temp1[i];
	}
	Fname[k] = '\0';
	ifstream file;
	file.open(Fname);
	int tt1 = 0;
	string t;
	while (!file.eof())
	{
		file >> t;
		int counter = 0;

		counter = t.size();
		Characters_Count[tt1] = counter;
		tt1++;
	}
}

void Characters::display()const
{
	ofstream file;
	file.open("Frequancy.txt");
	Paragraph obj;
	obj.SetParagraph_count(Fname);
	Sentence obj1;
	obj1.SetSentence_count(obj);
	Words obj2;
	obj2.SetWordsCount(obj,obj1);
	int paraC = obj.GetParagraph_count();
	int* sentC = obj1.GetSentence_count();
	int* WorC = obj2.GetWordsCount();
	int size_sentence = 0;
	for (int i = 0; i < paraC; i++)
	{
		size_sentence += sentC[i];
	}
	int size_word = 0;
	for (int i = 0; i < size_sentence; i++)
	{
		size_word += WorC[i];
	}
	int charcterword = 0;
	for (int i = 0; i < size_word; i++)
	{
		charcterword += Characters_Count[i];
	}
	int c = 0;
	int l = 0;
	cout << "Number of Paragraph: " << paraC << endl;
	cout << endl;
	file << "Number of Paragraph: " << paraC << endl;
	file << endl;
	for (int i = 0; i < paraC; i++)
	{
		cout << "Number of Sentence in Paragraph " << i + 1 << ": " << sentC[i] << endl;
		
		file << "Number of Sentence in Paragraph " << i + 1 << ": " << sentC[i] << endl;
		
	}
	cout << endl;
	file << endl;
	for (int i = 0; i < size_sentence; i++)
	{
		c++;
		cout << "Numbers of words in Sentence " << c <<" of paragraph "<<l+1<<": "<< WorC[i] << endl;
		file << "Numbers of words in Sentence " << c << " of paragraph " << l + 1 << ": " << WorC[i] << endl;
		if (c == sentC[l])
		{
			l++;
			c = 0;
		}
	}
	file << endl;
	cout << endl;
	c = 0;
	l = 0;
	for (int i = 0; i < size_word; i++)
	{
		cout << "Numbers of Characters in word " << i+1 <<  ": " << Characters_Count[i] << endl;
		file << "Numbers of Characters in word " << i + 1 << ": " << Characters_Count[i] << endl;
		file << endl;
	}
}