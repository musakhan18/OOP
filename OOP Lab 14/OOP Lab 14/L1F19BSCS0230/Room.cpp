#include "Room.h"

Room::Room()
{
	area = 0;
	NumberOfChairs = 0;
	C = new Chair * [10];	
}

Room::Room(float a, int no)
{
	area = a;
	NumberOfChairs = no;
	C = new Chair * [NumberOfChairs];
}

Room::Room(const Room& obj)
{
	area = obj.area;
	NumberOfChairs = obj.NumberOfChairs;
}

void Room::SetArea(float a)
{
	area = a;
}

void Room::SetNumberOfChairs(int no)
{
	NumberOfChairs = no;
}

float Room::GetArea()const
{
	return area;
}

int Room::GetNumberOfChairs()const
{
	return NumberOfChairs;
}

void Room::AddChair(Chair* obj, int no)
{
	NumberOfChairs = no;
	C = new Chair * [no];
	for (int i = 0; i < no; i++)
	{
		C[i] = obj;
	}
}

Chair** Room::GetChair()const
{
	return C;
}

void Room::display()const
{
	cout << "______________________________________________" << endl;
	cout << "Area Of Room: " << area << endl;
	cout << "No of chairs in room: " << NumberOfChairs << endl;
	cout << "---------------" << endl;
	cout << "Type of chairs" << endl;
	cout << "---------------" << endl;
	for (int i = 0; i < NumberOfChairs; i++)
	{
		/*cout <<*/ C[i]->display(); /*<< endl;*/
	}
	cout << "______________________________________________" << endl;
	cout << endl;
}

Room::~Room()
{
	delete[]C;
	C = nullptr;
}