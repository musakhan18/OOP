#include<iostream>
#include"Chair.h"
#include"Room.h"
using namespace std;

int main()
{
	char* ch = new char[15]{ 'P','l','a','s','t','i','c',' ','C','h','a','i','r','\0' };
	Chair c1(ch);
	Room r1;
	r1.SetArea(95.6);
	r1.AddChair(&c1, 1);
	Chair c2(ch);
	r1.display();
}