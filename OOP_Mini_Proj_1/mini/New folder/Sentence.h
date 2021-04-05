#pragma once
//#include<iostream>
//#include<fstream>
#include"Paragraph.h"
using namespace std;

class Sentence
{
private:
	char* Fname;
	int* Sentence_Count;
	char* Arr;
public:
	Sentence();
	Sentence(Paragraph&);
	void SetSentence_count(Paragraph&);
	void Total_Sentence();
	int* GetSentence_count()const;
	void operator+();
	void operator-();
	bool operator!=(const Sentence&) const;
	bool operator==(const Sentence&) const;
	Sentence& operator=(const Sentence& rhs);
};

