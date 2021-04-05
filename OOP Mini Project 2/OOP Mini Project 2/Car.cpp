#include "Car.h"

Car::Car(char* Cn, char* Col, char* Vtype, int NoWheels, int power,int NumD,char*Trasm,int NumS) :Vehicle(Cn, Col, Vtype, NoWheels, power)
{
	NumberOfDoors = NumD;

	int Size = 0;
	while (Trasm[Size] != '\0')
	{
		Size++;
	}
	Size++;
	Trasmission = new char[Size];
	for (int i = 0; i < Size; i++)
	{
		Trasmission[i] = Trasm[i];
	}
	Trasmission[Size - 1] = '\0';

	NumberOfSeats = NumS;
}

Car::Car(const Car& obj) :Vehicle(obj)
{
	NumberOfDoors = obj.NumberOfDoors;

	int Size = 0;
	while (obj.Trasmission[Size] != '\0')
	{
		Size++;
	}
	Size++;
	char* Trasm = new char[Size];
	for (int i = 0; i < Size; i++)
	{
		  Trasm[i]= Trasmission[i];
	}
	Trasm[Size - 1] = '\0';

	NumberOfSeats = obj.NumberOfSeats;
}

void Car::SetNumberOfDoors(int NumD)
{
	NumberOfDoors = NumD;
}

void Car::SetTrasmission(char* Trasm)
{
	int Size = 0;
	while (Trasm[Size] != '\0')
	{
		Size++;
	}
	Size++;
	Trasmission = new char[Size];
	for (int i = 0; i < Size; i++)
	{
		Trasmission[i] = Trasm[i];
	}
	Trasmission[Size - 1] = '\0';
}

void Car::SetNumberOfSeats(int NumS)
{
	NumberOfSeats = NumS;
}

void Car::SetNumberOfCars(int inp)
{
	NumberOfCars += inp;
}

int Car::GetNumberOfCars()const
{
	return NumberOfCars;
}

int Car::GetNumberOfDoors()const
{
	return NumberOfDoors;
}

char* Car::GetTrasmission()const
{
	int Size = 0;
	while (Trasmission[Size] != '\0')
	{
		Size++;
	}
	Size++;
	char* Trasm = new char[Size];
	for (int i = 0; i < Size; i++)
	{
		Trasm[i] = Trasmission[i];
	}
	Trasm[Size - 1] = '\0';
	return Trasm;
}

int Car::GetNumberOfSeats()const
{
	return NumberOfSeats;
}

void Car::CheckType()
{
	int no = GetNumberOfWheels();
	if (no == 4)
	{
		char* type = new char[4]{ 'C','a','r','\0' };
		SetTypeOfVehicle(type);
	}
}

void Car::display()const
{
	cout << endl;
	cout << "__________________________________________________________________________________________________________"<<endl;
	cout << "Company      Color      Wheels        Power     Type          Trasmission      NoOFDoors       NoOfSeats " << endl;
	cout << "----------------------------------------------------------------------------------------------------------" << endl;
	cout <<" "<<GetCompanyName() << "        " << GetColor() << "         " << GetNumberOfWheels() << "          " << GetPowerCC() << "      " << GetTypeOfVehicle() << "            "<< Trasmission << "              " << NumberOfDoors << "               " << NumberOfSeats << endl;
	cout << "==========================================================================================================" << endl;
}

Car& Car::operator=(const Car& rhs)
{
	SetCompanyName(rhs.GetCompanyName());
	SetColor(rhs.GetColor());
	SetTypeOfVehicle(rhs.GetTypeOfVehicle());
	SetPowerCC(rhs.GetPowerCC());
	SetNumberOfWheels(rhs.GetNumberOfWheels());
	SetTrasmission(rhs.GetTrasmission());
	NumberOfDoors = rhs.NumberOfDoors;
	NumberOfSeats = rhs.NumberOfSeats;
	return *this;
}

istream& Car::input(istream& inp)
{
	char* name = new char[15];
	char* colr = new char[10];
	char* trans = new char[20];
	int num;
	cout << "Enter Company Name: ";inp >> name;
	cout << "Enter Color Of Car: ";inp >> colr;
	cout << "Enter Transmission (Auto/Manual): "; inp >> trans;
	cout << "Enter PowerCC: "; cin >> num;
	SetPowerCC(num);
	int wheel;
	cout << "Enter Number of wheels : ";inp >> wheel;
	if (wheel == 4)
	{
		SetNumberOfWheels(wheel);
	}
	else
	{
		cout << "Car has only 4 Wheels";
		SetNumberOfWheels(4);
	}
	num = 0;
	cout << "Enter No OF Doors: "; inp >> num;
	SetNumberOfDoors(num);
	cout << "Enter No of seats : "; inp >> num;
	char* type = new char[4]{ 'C','a','r','\0' };
	SetTypeOfVehicle(type);
	SetNumberOfSeats(num);
	SetTrasmission(trans);
	SetCompanyName(name);
	SetColor(colr);
	return inp;
}

ostream& Car::output(ostream& out)const
{
	out << endl;
	out << "__________________________________________________________________________________________________________" << endl;
	out << "Company      Color      Wheels        Power     Type          Trasmission      NoOFDoors       NoOfSeats " << endl;
	out << "----------------------------------------------------------------------------------------------------------" << endl;
	out << " " << GetCompanyName() << "        " << GetColor() << "          " << GetNumberOfWheels() << "           " << GetPowerCC() << "       " << GetTypeOfVehicle() << "            " << Trasmission << "              " << NumberOfDoors << "               " << NumberOfSeats << endl;
	out << "==========================================================================================================" << endl;
	return out;
}

Car::~Car()
{
	delete[]Trasmission;
	Trasmission = nullptr;
}