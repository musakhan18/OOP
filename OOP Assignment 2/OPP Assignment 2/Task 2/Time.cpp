#include "Time.h"

Time::Time()
{
	Hour = 0;
	Minute = 0;
	Second = 0;
	AmPm = new char[3];
}

Time::Time(int hrs, int mins, int sec)
{
	Hour = hrs;
	Minute = mins;
	Second = sec;
	AmPm = new char[3];
}

Time::Time(int hrs, int mins, int sec, char* Am)
{
	Hour = hrs;
	Minute = mins;
	Second = sec;
	AmPm = new char[3];
	for (int i = 0; i < 2; i++)
	{
		AmPm[i] = Am[i];
	}
	AmPm[2] = '\0';
}

Time::Time(Time& Obj)
{
	if (Obj.Hour <= 12)
	{
		Hour = Obj.Hour;
		Minute = Obj.Minute;
		Second = Obj.Second;
		AmPm = new char[3];
		for (int i = 0; i < 2; i++)
		{
			AmPm[i] = Obj.AmPm[i];
		}
		AmPm[2] = '\0';
	}
	else
	{
		Hour = Obj.Hour;
		Minute = Obj.Minute;
		Second = Obj.Second;
	}
}

void Time::SetHour(int H)
{
	Hour = H;
}
void Time::SetMin(int M)
{
	Minute = M;
}
void Time::SetSec(int S)
{
	Second = S;
}
int Time::GetHour()const
{
	return Hour;
}
int Time::GetMin()const
{
	return Minute;
}
int Time::GetSec()const
{
	return Second;
}
void Time::SetAmPm(char* Am)
{
	for (int i = 0; i < 2; i++)
	{
		AmPm[i] = Am[i];
	}
	AmPm[2] = '\0';
}
char* Time::GetAmPm()const
{
	char* Temp = new char[2];
	for (int i = 0; i < 2; i++)
	{
		Temp[i] = AmPm[i];
	}
	return Temp;
}

bool Time::ValidTime12()
{
	bool Valid=1;
	if (Hour > 12 || Hour <= 0 || Minute > 60 || Minute <= 0 || Second > 60 || Second <= 0)
	{
		Valid = 0;
	}
	return Valid;
}

bool Time::ValidTime24()
{
	bool Valid = 1;
	if (Hour > 24 || Hour <= 0 || Minute > 60 || Minute <= 0 || Second > 60 || Second <= 0)
	{
		Valid = 0;
	}
	return Valid;
}

bool Time::InputTime12()
{
	AmPm = new char[3];
	cout << "Enter Hours: "; cin >> Hour;
	cout << "Enter Minutes: "; cin >> Minute;
	cout << "Enter Seconds: "; cin >> Second;
	cout << "Enter Am/Pm: "; cin >> AmPm;
	bool Valid=ValidTime12();
	if (!Valid)
	{
		return Valid;
	}
	else
	{
		cout << "Invalid Input" << endl;
		Hour = 0;
		Minute = 0;
		Second = 0;
		AmPm = nullptr;
		return Valid;
	}
}

bool Time::InputTime24()
{
	
		cout << "Enter Hours: "; cin >> Hour;
		cout << "Enter Minutes: "; cin >> Minute;
		cout << "Enter Seconds: "; cin >> Second;
	
	bool Valid = ValidTime24();
	if (!Valid)
	{
		return Valid;
	}
	else
	{
		cout << "Invalid Input" << endl;
		Hour = 0;
		Minute = 0;
		Second = 0;
		return Valid;
	}
}

bool Time::InputCompleteTime24(int hrs, int mins, int sec)
{
	Hour = hrs;
	Minute = mins;
	Second = sec;
	bool Valid = ValidTime24();
	if (!Valid)
	{
		return Valid;
	}
	else
	{
		cout << "Invalid Input" << endl;
		Hour = 0;
		Minute = 0;
		Second = 0;
		return Valid;
	}
}

bool Time::InputCompleteTime12(int hrs, int mins, int sec, char* Am)
{
	bool Valid;
	if(hrs<=12&&hrs>0&&mins<=60&&mins>0&&sec<=60)
	{
		Hour = hrs;
		Minute = mins;
		Second = sec;
		for (int i = 0; i < 2; i++)
		{
			AmPm[i] = Am[i];
		}
		AmPm[2] = '\0';
		Valid = 1;
		return Valid;
		cout << AmPm << endl;
	}
	else
	{
		Valid = 0;
		return Valid;
	}
}

Time& Time::GetTime()const
{
	Time Obj;
	if (AmPm[0] == 'A' && AmPm[1] == 'M'|| AmPm[0] == 'a' && AmPm[1] == 'm' || AmPm[0] == 'P' && AmPm[1] == 'M'  || AmPm[0] == 'p' && AmPm[1] == 'm')
	{
		Obj.Hour = Hour;
		Obj.Minute = Minute;
		Obj.Second = Second;
		Obj.AmPm = new char[2];
		for (int i = 0; i < 2; i++)
		{
			Obj.AmPm[i] = AmPm[i];
		}
	}
	else if (AmPm[0] != 'A' || AmPm[0] != 'a' ||AmPm[0] != 'P' || AmPm[0] != 'P' || AmPm[1] != 'm' || AmPm[1] != 'M')
	{
		Obj.Hour = Hour;
		Obj.Minute = Minute;
		Obj.Second = Second;
	}
	return Obj;
}

void Time::RetriveTime(int& hrs, int& mins, int& sec)
{
	hrs = Hour;
	 mins=Minute;
	 sec = Second;
}

void Time::RetriveTime(int& hrs, int& mins, int& sec, char* Am)
{
	hrs = Hour;
	mins = Minute;
	sec = Second;
	Am = AmPm;
}

void Time::ShowTime()const
{
	cout << endl;
	if (AmPm[0] == 'A' && AmPm[1] == 'M' || AmPm[0] == 'a' && AmPm[1] == 'm' || AmPm[0] == 'P' && AmPm[1] == 'M' || AmPm[0] == 'p' && AmPm[1] == 'm')
	{
		cout << Hour << ":" << Minute << ":" << Second << " ";
		for (int i = 0; i < 2; i++)
		{
			cout << AmPm[i];
		}
			 cout<< endl;
	}
	else if (AmPm[0] != 'A' || AmPm[0] != 'a' || AmPm[0] != 'P' || AmPm[0] != 'p' || AmPm[1] != 'm' || AmPm[1] != 'M')
	{
		cout << Hour << ":" << Minute << ":" << Second << endl;
	}
}

bool Time::IsEqual(Time&obj)
{
	bool Equal;
	if (AmPm[0] == 'A' && AmPm[1] == 'M' || AmPm[0] == 'a' && AmPm[1] == 'm' || AmPm[0] == 'P' && AmPm[1] == 'M' || AmPm[0] == 'p' && AmPm[1] == 'm')
	{
		if (Hour == obj.Hour && Minute == obj.Minute && Second == obj.Second && AmPm[0] == obj.AmPm[0]&&AmPm[1]==obj.AmPm[1])
		{
			Equal = 1;
			return Equal;
		}
		else 
		{
			Equal = 0;
			return Equal;
		}
	}
	else if (AmPm[0] != 'A' || AmPm[0] != 'a' || AmPm[0] != 'P' || AmPm[0] != 'p' || AmPm[1] != 'm' || AmPm[1] != 'M')
	{
		if (Hour == obj.Hour && Minute == obj.Minute && Second == obj.Second)
		{
			Equal = 1;
			return Equal;
		}
		else
		{
			Equal = 0;
			return Equal;
		}
	}
}

void Time::ConvertTime()
{
	if (AmPm[0] == 'A' && AmPm[1] == 'M' || AmPm[0] == 'a' && AmPm[1] == 'm' || AmPm[0] == 'P' && AmPm[1] == 'M' || AmPm[0] == 'p' && AmPm[1] == 'm')
	{
		if (AmPm[0] == 'P' || AmPm[0] == 'p' && AmPm[1] == 'M' || AmPm[1] == 'm')
		{
			Hour += 12;
		}
		AmPm = new char[3];
	}
	else if (AmPm[0] != 'A' || AmPm[0] != 'a' || AmPm[0] != 'P' || AmPm[0] != 'p' || AmPm[1] != 'm' || AmPm[1] != 'M')
	{
		if (Hour>=12)
		{
			AmPm = new char[3]{ 'p','m' };
			Hour -= 12;
		}
		else
		{
			AmPm = new char[3]{ 'a','m' };
		}
	}
}

Time::~Time()
{
	Hour = 0;
	Minute = 0;
	Second = 0;
	delete[]AmPm; 
	AmPm = nullptr;
}