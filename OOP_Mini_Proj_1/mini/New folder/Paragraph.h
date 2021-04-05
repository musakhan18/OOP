#pragma once
#include<iostream>
#include<fstream>
using namespace std;

class Paragraph
{
private:
	char* Fname;
	int Paragraph_Count;
	char* Arr;
	
public:
	Paragraph();
	Paragraph(char*);
	void SetFileName(char*);
	void SetArr(char*);
	char* GetArr()const;
	char* GetFileName()const;
	void SetParagraph_count(char*);
	int GetParagraph_count()const;
	void operator+();
	void operator-();
	bool operator!=(const Paragraph&) const;
	bool operator==(const Paragraph&) const;
	Paragraph& operator=(const Paragraph&);
	void operator%(int);
	void operator*(int x);
	friend fstream& operator >> (fstream& fin, Paragraph& c);
	friend ostream& operator << (ostream& out, const Paragraph& c);
	void display()const;
};

