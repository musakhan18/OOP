#include "BilalMotors.h"

#include "BilalMotors.h"
BilalMotors::BilalMotors()
{
	this->size = 0;
	this->arr = new Vehicle * [50];
}

int BilalMotors::GetCount()const
{
	return size;
}

void BilalMotors::AddVehicle(char a)
{
	char* n = new char[8]{ '*','*','*','*','*','*','*','\0' };
	bool flag = false;
	if (a == 'b' || a == 'B')
	{
		Bike* b_obj = new Bike(n, n, n, 0, 0, 0, flag, flag);
		b_obj->input(cin);
		arr[size] = b_obj;
		b_obj->SetNumberOfBikes(1);
		size++;
		cout << "+++ Bike Added In Vehicle List Successfully +++" << endl;
	}
	else if (a == 'c' || a == 'C')
	{
		Car* c_obj = new Car(n, n, n, 0, 0, 0, n, 0);
		c_obj->SetNumberOfCars(1);
		c_obj->input(cin);
		arr[size] = c_obj;
		size++;
		cout << "+++ Car Added In Vehicle List Successfully +++";
	}
	else if (a == 't' || a == 'T')
	{
		Truck* t_obj = new Truck(n, n, 0, 0, n, 0.1, n, flag);
		t_obj->SetNumberOfTrucks(1);
		t_obj->input(cin);
		arr[size] = t_obj;
		size++;
		cout << "+++ Truck Added In Vehicle List Successfully +++";
	}
}

void BilalMotors::SearchVehicle(char* V)
{
	bool found = false;
	for (int i = 0; i < size; i++)
	{
		char* t = arr[i]->GetTypeOfVehicle();

		for (int j = 0; j < strlen(V); j++)
		{
			if (t[j] == V[j])
			{
				found = true;
			}
			else
			{
				found = false;
				break;
			}
		}
		if (found == true)
		{
			cout << "------------------------------------------" << endl;
			cout << "Vehicle #  " << i + 1 << endl;
			cout << "__________________________________________" << endl;
			cout << "Type Of Vehicle: " << arr[i]->GetTypeOfVehicle()<<endl;
			cout << "Company: " << arr[i]->GetCompanyName() << endl;
			cout << "Power: " << arr[i]->GetPowerCC() << endl;
			cout << "Color: " << arr[i]->GetColor()<<endl;
			cout << "Number Of Wheels: " << arr[i]->GetNumberOfWheels()<<endl;
			cout << "-------------------------------------------" << endl;
			cout << endl;
		}
	}
	if (found == false)
	{
		cout << "______________________________" << endl<<endl;
		cout << "No Vehical of this Type Found" << endl;
		cout << "______________________________" << endl;
	}
}

bool BilalMotors::SaveData(const char* f_name)const
{
	bool flag = false;
	fstream file;
	file.open(f_name, ios::in);
	if (file.is_open())
	{
		fstream file1;
		file1.open(f_name, ios::out);
		char* n = new char[8]{ '*','*','*','*','*','*','*','\0' };
		Bike* b_obj1 = new Bike(n, n,n, 0, 0, 0, flag, flag);
		Car* c_obj1 = new Car(n, n, n, 0, 0, 0, n, 0);
		Truck* t_obj1 = new Truck(n, n, 0, 0, n, 0.1, n, flag);

		file1 << "Vehicle Information"<<endl;
		file1 << "------------------------"<<endl;
		file1 << "Number Of Bikes: " << b_obj1->GetNumberOfBikes()<<endl;
		file1 << "Number Of Cars: " << c_obj1->GetNumberOfCars()<<endl;
		file1 << "Number Of Trucks: " << t_obj1->GetNumberOfTrucks()<<endl;
		file1 << "Company Name:		Type:		Color:		Power:" << endl;
		file1 << "-----------------------------------------------------------------" << endl;
		for (int i = 0; i < size; i++)
		{
			file1 << arr[i]->GetCompanyName() << "			" << arr[i]->GetTypeOfVehicle() << "		" << arr[i]->GetColor() << "		" << arr[i]->GetPowerCC() << endl;
		}
		file1.close();
		flag = true;
	}
	else
	{
		flag = false;
	}
	file.close();
	return flag;
}

const Vehicle* BilalMotors::operator[](int ind)const
{
	if (ind >= 0 && ind < 50) 
	{
		return arr[ind];
	}
	else 
	{
		return this->arr[0];
	}
}

Vehicle* BilalMotors::operator[](int inp)
{
	if (inp >= 0 && inp < 50) 
	{
		return arr[inp];
	}
	else
	{
		return this->arr[0];
	}
}

BilalMotors& BilalMotors::operator=(const BilalMotors& temp)
{
	this->arr = temp.arr;
	this->size = temp.size;

	return *this;
}

BilalMotors::~BilalMotors()
{
	delete[]arr;
	arr = nullptr;
}