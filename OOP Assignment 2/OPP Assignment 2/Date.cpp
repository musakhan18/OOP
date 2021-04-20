#include "Date.h"

Date::Date()
{
	Day = 01;
	Month = 01;
	Year = 2000;
}

Date::Date(int D, int M, int Y)
{
	Day = D;
	Month = M;
	Year = Y;

}

Date::Date(const Date& other)
{
	Day=other.Day;
	Month=other.Month;
	Year=other.Year;
}

bool Date::validatedate()const
{
	bool Valid;
	if (Day <= 0 || Day > 31 || Month <= 0 || Month > 12 || Year < 1900 && Year > 2100)
	{
		Valid = 0;
	}
	else
	{
		Valid = 1;
	}
	return Valid;
}

bool Date::InputDate()
{
	cout << "Enter Day: "; cin >> Day;
	cout << "Enter Month: "; cin >> Month;
	cout << "Enter Year: "; cin >> Year;
	bool f = validatedate();
	if (!f)
	{
		Day = 01;
		Month = 01;
		Year = 2000;
	}
	return f;
}
void Date::SetDay(int d)
{
	Day = d;
}

void Date::SetMonth(int m)
{
	Month = m;
}

void Date::SetYear(int y)
{
	Year = y;
}

int Date::GetDay()const
{
	return Day;
}

int Date::GetMonth()const
{
	return Month;
}

int Date::GetYear()const
{
	return Year;
}

bool Date::InputCompleteDate(int d, int m, int y)
{
	Day = d;
	Month = m;
	Year = y;
	bool Valid = validatedate();
	if (!Valid)
	{
		Day = 01;
		Month = 01;
		Year = 2000;
	}
	return Valid;
}

Date& Date::GetDate()const
{
	Date temp;
	temp.Day = Day;
	temp.Month = Month;
	temp.Year = Year;
	return temp;
}

void Date::ShowDate()const
{
	cout << "Date is: " << Day << "-" << Month << "-" << Year << endl;
	cout << endl;
}

bool Date::IsEqual(Date& other)
{
	bool Equal;
	if (other.Day != Day || other.Month != Month || other.Year != Year)
	{
		Equal = 0;
	}
	else
	{
		Equal = 1;
	}
	return Equal;
}

bool Date::IsLeap()
{
	bool Leap;
	if (Year % 4 == 0)
	{
		if (Year % 100 == 0)
		{
			if (Year % 400 == 0)
			{
				Leap=1;
			}
			else
			{
				Leap = 0;
			}
		}
		else
		{
			Leap = 1;
		}
	}
	else
	{
		Leap = 0;
	}
	return Leap;
}

bool Date::	CopyDate(Date& other)
{
	bool F;
	bool Valid= validatedate();
	if (!Valid)
	{
		F = 0;
	}
	else
	{
		Day = other.Day;
		Month = other.Month;
		Year = other.Year;
		F = 1;
	}
	return F;
}

void Date::RetriveDate(int& d, int& m, int& y)
{
	Day = d;
	Month = m;
	Year = y;
}

Date::~Date()
{
	Day = 0;
	Month = 0;
	Year = 0;
}