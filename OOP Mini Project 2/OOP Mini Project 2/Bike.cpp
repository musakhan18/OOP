#include "Bike.h"

Bike::Bike(char* Cn, char* Col, char* Vtype, int NoWheels, int power, float H, bool DB, bool SS) :Vehicle(Cn, Col, Vtype, NoWheels, power)
{
	Height = H;
	DiscBrake = DB;
	SelfStart = SS;
}

Bike::Bike(const Bike& obj) :Vehicle(obj)
{
	Height = obj.Height;
	SelfStart = obj.SelfStart;
	DiscBrake = obj.DiscBrake;
}

void Bike::SetHeight(float H)
{
	Height = H;
}

void Bike::SetDiscBrake(bool DB)
{
	DiscBrake = DB;
}

void Bike::SetSelfStart(bool SS)
{
	SelfStart = SS;
}

void Bike::SetNumberOfBikes(int Num)
{
	NumberOfBikes += Num;
}

int Bike::GetNumberOfBikes()const
{
	return NumberOfBikes;
}

float Bike::GetHeight()const
{
	return Height;
}

bool Bike::GetDiscBrake()const
{
	return DiscBrake;
}

bool Bike::GetSelfStart()const
{
	return SelfStart;
}

void Bike::CheckType()
{
	int no = GetNumberOfWheels();
	if (no == 2)
	{
		char* type = new char[5]{ 'B','i','k','e','\0' };
		SetTypeOfVehicle(type);
	}
}

Bike& Bike::operator=(const Bike& rhs)
{
	SetCompanyName(rhs.GetCompanyName());
	SetColor(rhs.GetColor());
	SetTypeOfVehicle(rhs.GetTypeOfVehicle());
	SetPowerCC(rhs.GetPowerCC());
	SetNumberOfWheels(rhs.GetNumberOfWheels());
	Height = rhs.Height;
	SelfStart = rhs.SelfStart;
	DiscBrake = rhs.DiscBrake;
	return *this;
}

void Bike::display()const
{
	cout << endl;
	cout << "__________________________________________________________________________________________________________" << endl;
		cout << "Company      Color      Wheels       Power      Type          Height        SelfStart       DiscBrake " << endl;
		cout << "----------------------------------------------------------------------------------------------------------" << endl;
		cout << " " << GetCompanyName() << "        " << GetColor() << "          " << GetNumberOfWheels() << "           " << GetPowerCC() << "       " << GetTypeOfVehicle() <<"          " <<Height << "              " << GetSelfStart() << "            " << GetDiscBrake() << endl;;
		cout << "==========================================================================================================" << endl;
}

istream& Bike::input(istream& inp)
{
	char* name = new char[15];
	cout << "Enter Company Name: "; inp >> name;
	char* colr = new char[10];
	cout << "Enter Color Of Bike: "; inp >> colr;
	int wheel;
	cout << "Enter Number of wheels: ";inp >> wheel;
	if (wheel == 2)
	{
		SetNumberOfWheels(wheel);
	}
	else
	{
		cout << "Bike has only 2 Wheels" << endl;
        SetNumberOfWheels(2);
	}
	int p;
	cout << "Enter Power OF Bike: ";inp >> p;
	SetPowerCC(p);
	float h;
	cout << "Enter Height OF Bike: ";inp >> h;
	cout << "Self Start" << endl;
	cout << "-----------" << endl;
	cout << "Press (1) if Self Start" << endl;
	cout << "Press (2) if Not Self Start" << endl;
	int choice;
	inp >> choice;
	bool SS ;
	bool DB ;
	if (choice == 1)
	{
		SS = true;
    }
	else if (choice == 2)
	{
		SS = false;
	}
	SetSelfStart(SS);
	choice = 0;
	cout << "Disk Brake" << endl;
	cout << "-----------" << endl;
	cout << "Press (1) if Disk Brake" << endl;
	cout << "Press (2) if Not Disk Brake" << endl;
	inp >> choice;
	if (choice == 1)
	{
		DB = true;
	}
	else if (choice == 2)
	{
		DB = false;
	}
	SetDiscBrake(DB);
	char* type = new char[5]{ 'B','i','k','e','\0' };
	SetTypeOfVehicle(type);
	SetCompanyName(name);
	SetColor(colr);
	SetHeight(h);
	return inp;
}

ostream& Bike::output(ostream& out)const
{
	cout << endl;
	cout << "__________________________________________________________________________________________________________" << endl;
	cout << "Company      Color      Wheels       Power      Type          Height        SelfStart       DiscBrake " << endl;
	cout << "----------------------------------------------------------------------------------------------------------" << endl;
	cout << " " << GetCompanyName() << "        " << GetColor() << "          " << GetNumberOfWheels() << "           " << GetPowerCC() << "       " << GetTypeOfVehicle() << "          " << Height << "              " << GetSelfStart() << "            " << GetDiscBrake() << endl;;
	cout << "==========================================================================================================" << endl;
	return out;
}

Bike::~Bike()
{
	Height = 0;
}