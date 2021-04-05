#pragma once
#include"Chair.h"
class Room
{
	float area;
	int NumberOfChairs;
	Chair** C;
public:
	Room();
	Room(float, int);
	Room(const Room&);
	void SetArea(float);
	void SetNumberOfChairs(int);
	float GetArea()const;
	int GetNumberOfChairs()const;
	void AddChair(Chair* obj, int no_chairs);
	Chair** GetChair()const;
	void display()const;
	~Room();
};