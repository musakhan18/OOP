#pragma once
#include<iostream>
#include"Point.h"
using namespace std;

class Creature
{
	char* name;
	Point location;
public:
	Creature();
	Creature(char*, Point& obj);
	Creature(const Creature& obj);
	void setname(char*);
	char* getname()const;
	void move();
	void display()const;
	~Creature();
};

