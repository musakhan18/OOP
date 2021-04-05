#include<iostream>
#include"Shape.h"
#include"Square.h"
#include"Rectangle.h";
#include"Trapezium.h"
using namespace std;
int main()
{
	Shape* shape;
	Rectangle rec(10, 7);
	rec.Area();
	Square sq(10);
	sq.Area();
	sq.Parameter();
	Trapezium trap(10, 3, 4, 5, 6);
	trap.Perimeter();
	// store the address of Rectangle
	cout << endl;

	cout << "\nBY POLYMORPHISM \n";
	shape = &rec;
	shape->Area();
	cout << endl;
	shape = &trap;
	shape->Area();

	return 0;
}