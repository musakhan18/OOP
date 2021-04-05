#include "Truck.h"

Truck::Truck(char* name, char* colr, int no, int p, char* type, double cs, char* cat, bool fwd) :Vehicle(name, colr, type, no, p)
{
	int lenght1 = 0;
	while (cat[lenght1] != '\0')
	{
		lenght1++;
	}
	Category = new char[lenght1 + 1];
	for (int i = 0; i < lenght1; i++)
	{
		Category[i] = cat[i];
	}
	Category[lenght1] = '\0';
	ContainerSize = cs;
	FourWheelDrive = fwd;
}

Truck::Truck(const Truck& obj) :Vehicle(obj)
{
	int lenght1 = 0;
	while (obj.Category[lenght1] != '\0')
	{
		lenght1++;
	}
	Category = new char[lenght1 + 1];
	for (int i = 0; i < lenght1; i++)
	{
		Category[i] = obj.Category[i];
	}
	Category[lenght1] = '\0';
	ContainerSize = obj.ContainerSize;
	FourWheelDrive = obj.FourWheelDrive;
}

void Truck::CheckType()
{
	int no = GetNumberOfWheels();
	if (no >= 6)
	{
		char* type = new char[6]{ 'T','r','u','c','k','\0' };
		SetTypeOfVehicle(type);
	}
}
void Truck::SetContainerSize(double cs)
{
	ContainerSize = cs;
}
double Truck::GetContainerSize()const
{
	return ContainerSize;
}
void Truck::SetCategory(char* cat)
{
	int lenght1 = 0;
	while (cat[lenght1] != '\0')
	{
		lenght1++;
	}
	Category = new char[lenght1 + 1];
	for (int i = 0; i < lenght1; i++)
	{
		Category[i] = cat[i];
	}
	Category[lenght1] = '\0';
}
char* Truck::GetCategory()const
{
	char* localtemp;
	int lenght1 = 0;
	while (Category[lenght1] != '\0')
	{
		lenght1++;
	}
	localtemp = new char[lenght1 + 1];
	for (int i = 0; i < lenght1; i++)
	{
		localtemp[i] = Category[i];
	}
	localtemp[lenght1] = '\0';
	return localtemp;
}
void Truck::SetFourWheelDrive(bool flag)
{
	FourWheelDrive = true;
}
bool Truck::GetFourWheelDrive()const
{
	return FourWheelDrive;
}
void Truck::SetNumberOfTrucks(int inp)
{
	NumberOfTrucks += inp;
}
int Truck::GetNumberOfTrucks()const
{
	return NumberOfTrucks;
}

void Truck::display()const
{
	cout << endl;
    	cout << "__________________________________________________________________________________________________________" << endl;
		cout << "Company      Color      Wheels      Power      Type         ConatinerSize      Category       FourWheelDrive " << endl;
		cout << "----------------------------------------------------------------------------------------------------------" << endl;
		cout << " " << GetCompanyName() << "        " << GetColor() << "         " << GetNumberOfWheels() << "           " << GetPowerCC() << "       " << GetTypeOfVehicle()  <<"            "<< ContainerSize << "            " << Category << "           " << "Yes" << endl;;
		cout << "==========================================================================================================" << endl;
}

Truck& Truck::operator=(const Truck& rhs)
{
	SetCompanyName(rhs.GetCompanyName());
	SetColor(rhs.GetColor());
	SetTypeOfVehicle(rhs.GetTypeOfVehicle());
	SetPowerCC(rhs.GetPowerCC());
	SetNumberOfWheels(rhs.GetNumberOfWheels());
	SetCategory(rhs.GetCategory());
	ContainerSize = rhs.ContainerSize;
	FourWheelDrive = rhs.FourWheelDrive;
	return *this;
}
istream& Truck::input(istream& inp)
{
	char* name = new char[15];
	char* colr = new char[10];
	int wheel;
	int num;
	cout << "Enter Company Name: "; inp >> name;
	SetCompanyName(name);
	cout << "Enter Color Of Truck: "; inp >> colr;
	SetColor(colr);
	cout << "Enter PowerCC: "; cin >> num;
	SetPowerCC(num);
	cout << "Enter Number of wheels: ";inp >> wheel;
	if (wheel > 4)
	{
		SetNumberOfWheels(wheel);
	}
	else
	{
		cout << "Truck has equal or more than 4 Wheels" << endl;
		SetNumberOfWheels(6);
	}
	char* cat = new char[20];
	cout << "Enter Category: ";inp >> cat;
	SetCategory(cat);
	double d;
	cout << "Enter Container Size: ";inp >> d;
	SetContainerSize(d);
	cout << "Four Wheel Drive" << endl;
	cout << "-----------------" << endl;
	cout << "Press (1) if Four Wheel Drive" << endl;
	cout << "Press (2) if not Four Wheel Drive" << endl;
	int choice;
	bool flag = false;
	cin >> choice;
	if (choice==1)
	{
		flag == 1;
	}
	else if (choice == 2)
	{
		flag == 0;
	}
	SetFourWheelDrive(flag);
	char* type = new char[5]{ 'T','r','u','k','\0' };
	SetTypeOfVehicle(type);
	return inp;
}

ostream& Truck::output(ostream& out)const
{
	cout << "__________________________________________________________________________________________________________" << endl;
	cout << "Company      Color      Wheels      Power      Type         ConatinerSize      Category       FourWheelDrive " << endl;
	cout << "----------------------------------------------------------------------------------------------------------" << endl;
	cout << " " << GetCompanyName() << "        " << GetColor() << "         " << GetNumberOfWheels() << "           " << GetPowerCC() << "       " << GetTypeOfVehicle() << "            " << ContainerSize << "            " << Category << "           " << "Yes" << endl;;
	cout << "==========================================================================================================" << endl;
	return out;
}

Truck::~Truck()
{
	delete[]Category;
	Category = nullptr;
}
