#include<iostream>
using namespace std;

class Rectangle
{
public:
	float Lenght, Width;
	void get(float L, float W)
	{
		cout << "Enter Lenght of the Rectangle: "; cin >> Lenght;
		cout << "Enter Width of the Rectangle: "; cin >> Width;
	}
	void set(float L, float W)
	{
		if (L < 0.0 || L>20.0 || W < 0.0 && W > 20.0)
		{
				cout << "Error!" << endl;
				get(L, W);
		}
	}
	void perimeter(float L, float W)
	{
		float Peri;
		Peri = 2 * L + W;
		cout << "\nPerimeter: " << Peri << endl;
	}
	void Area(float L, float W)
	{
		float area;
		area = L * W;
		cout << "Area: " << area << endl;
	}

};

int main()
{
	Rectangle Rect;
	Rect.Lenght=0, Rect.Width=0;
	Rect.get(Rect.Lenght, Rect.Width);
	Rect.set(Rect.Lenght, Rect.Width);
	Rect.perimeter(Rect.Lenght, Rect.Width);
	Rect.Area(Rect.Lenght, Rect.Width);
	return 0;
}