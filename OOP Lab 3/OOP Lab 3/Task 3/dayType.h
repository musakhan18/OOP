#pragma once
#include<iostream>
#include <string>
using namespace std;

class dayType
{
private:
	string Days[7] = { "monday","tuesday","wednesday","thursday","friday","saturday","sunday" };
public:
	int Ind;
	void SetDay(string Day);
	string GetDay();
	string GetNext();
	string GetPrevious();
	string CalDay(int);
	void DisplayDay();
	void DisplayCalDay(int);
};

