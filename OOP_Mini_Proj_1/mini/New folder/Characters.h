#pragma once
#include<iostream>
#include<fstream>
#include"Paragraph.h"
#include"Sentence.h"
#include"Words.h"
using namespace std;

class Characters
{
private:
	char* Fname;
	int* Characters_Count;
public:
	Characters();
	Characters(Paragraph&,Sentence&,Words&);
	void SetCharacters_Count(Paragraph&, Sentence&, Words&);
	void display()const;
};

