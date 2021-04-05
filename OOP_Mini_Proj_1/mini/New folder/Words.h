#pragma once
#include<iostream>
#include"Paragraph.h"
#include"Sentence.h"
using namespace std;

class Words
{
private:
	char* Fname;
	int* WordsCount;
	char* Arr;
public:
	Words();
	Words(Paragraph&,Sentence&);
	void Total_Word_Count();
	void SetFileName(char*);
	char* GetfileName()const;
	void SetArr(char*);
	char* GetArr()const;
	void SetWordsCount(Paragraph&, Sentence&);
	int* GetWordsCount()const;
	void operator+();
	void operator-();
	bool operator!=(const Words&) const;
	bool operator==(const Words&) const;
	Words& operator=(const Words& rhs);
};

