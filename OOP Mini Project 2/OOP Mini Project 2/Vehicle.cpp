#include "Vehicle.h"

int GetSize(char* arr)
{
	int size = 0;
	while (arr[size] != '\0')
	{
		size++;
	}
	size++;
	return size;
}

Vehicle::Vehicle(char* Cn, char* Col, char* Vtype, int NoWheels, int power)
{
	int Size = GetSize(Cn);
	CompanyName = new char[Size];
	for (int i = 0; i < Size; i++)
	{
		CompanyName[i] = Cn[i];
	}
	CompanyName[Size - 1] = '\0';

	Size = GetSize(Col);
	Color = new char[Size];
	for (int i = 0; i < Size; i++)
	{
		Color[i] = Col[i];
	}
	Color[Size - 1] = '\0';

	Size = GetSize(Vtype);
	TypeOfVehicle = new char[Size];
	for (int i = 0; i < Size; i++)
	{
		TypeOfVehicle[i] = Vtype[i];
	}
	TypeOfVehicle[Size - 1] = '\0';

	NumberOfWheels = NoWheels;

	PowerCC = power;
}

Vehicle::Vehicle(const Vehicle& obj)
{
	int Size = GetSize(obj.CompanyName);
	CompanyName = new char[Size];
	for (int i = 0; i < Size; i++)
	{
		CompanyName[i] = obj.CompanyName[i];
	}
	CompanyName[Size - 1] = '\0';

	Size = GetSize(obj.Color);
	Color = new char[Size];
	for (int i = 0; i < Size; i++)
	{
		Color[i] = obj.Color[i];
	}
	Color[Size - 1] = '\0';

	Size = GetSize(obj.TypeOfVehicle);
	TypeOfVehicle = new char[Size];
	for (int i = 0; i < Size; i++)
	{
		TypeOfVehicle[i] = obj.TypeOfVehicle[i];
	}
	TypeOfVehicle[Size - 1] = '\0';

	NumberOfWheels = obj.NumberOfWheels;

	PowerCC = obj.PowerCC;
}

void Vehicle::SetCompanyName(char* Cn)
{
	int Size = GetSize(Cn);
	CompanyName = new char[Size];
	for (int i = 0; i < Size; i++)
	{
		CompanyName[i] = Cn[i];
	}
	CompanyName[Size - 1] = '\0';
}

void Vehicle::SetColor(char* Col)
{
	int Size = GetSize(Col);
	Color = new char[Size];
	for (int i = 0; i < Size; i++)
	{
		Color[i] = Col[i];
	}
	Color[Size - 1] = '\0';
}

void Vehicle::SetTypeOfVehicle(char* Vtype)
{
	int Size = GetSize(Vtype);
	TypeOfVehicle = new char[Size];
	for (int i = 0; i < Size; i++)
	{
		TypeOfVehicle[i] = Vtype[i];
	}
	TypeOfVehicle[Size - 1] = '\0';
}

void Vehicle::SetPowerCC(int power)
{
	PowerCC = power;
}

void Vehicle::SetNumberOfWheels(int NoWheels)
{
	NumberOfWheels = NoWheels;
}

char* Vehicle::GetCompanyName()const
{
	int Size = GetSize(CompanyName);
	char* Cn = new char[Size];
	for (int i = 0; i < Size; i++)
	{
		Cn[i]=CompanyName[i];
	}
	Cn[Size - 1] = '\0';
	return Cn;
}

char* Vehicle::GetColor()const
{
	int Size = GetSize(Color);
	char* Col = new char[Size];
	for (int i = 0; i < Size; i++)
	{
		Col[i] = Color[i];
	}
	Col[Size - 1] = '\0';
	return Col;
}

char* Vehicle::GetTypeOfVehicle()const
{
	int Size = GetSize(TypeOfVehicle);
	char* VType = new char[Size];
	for (int i = 0; i < Size; i++)
	{
		VType[i] = TypeOfVehicle[i];
	}
	VType[Size - 1] = '\0';
	return VType;
}

int Vehicle::GetPowerCC()const
{
	return PowerCC;
}

int Vehicle::GetNumberOfWheels()const
{
	return NumberOfWheels;
}

void Vehicle::display()const
{
	cout << "Company      Color      Wheels      Power    Type" << endl;
	cout << CompanyName << "       " << Color << "      " << NumberOfWheels << "      " << PowerCC << "     " << TypeOfVehicle << " ";
	/*cout << endl;*/
}

Vehicle:: ~Vehicle()
{
	delete[]CompanyName;
	CompanyName = nullptr;
	delete[]TypeOfVehicle;
	TypeOfVehicle = nullptr;
	delete[]Color;
	Color = nullptr;
	NumberOfWheels = 0;
	PowerCC = 0;
}