#include "dayType.h"

void dayType::SetDay(string D)
{
	/*if (D=="monday")
	{
		Ind = 0;
	}*/
	for (int i = 0; i < 7; i++)
	{
		if (Days[i]==D)
		{
			Ind = i;
		}
	}
}

string dayType::GetDay()
{
	return Days[Ind];
}

string dayType::GetNext()
{
	int I = Ind;
	if (Ind<6)
	{
		I+=1;
		return Days[I];
	}
	else if (Ind == 6)
	{
		return Days[0];
	}
}

string dayType::GetPrevious()
{
	int I = Ind;
	if (Ind >0)
	{
		I -= 1;
		return Days[I];
	}
	else if (Ind == 0)
	{
		return Days[6];
	}
}

string dayType::CalDay(int num)
{
	if (num>6)
	{
		 num+=Ind+1;
		num -= 7;
		while (num>7)
		{
			num -= 7;
		}
		return Days[num-1];
	}
	else
	{
		return Days[num];
	}
}

void dayType::DisplayDay()
{
	string DD =GetDay();
	cout << "\nCurrent Day: " << DD << endl;
	cout << "----------------------" << endl;
	DD = GetNext();
	cout << "Next Day: " << DD << endl;
	cout << "----------------------" << endl;
	DD = GetPrevious();
	cout << "Previous Day: " << DD << endl;
	cout << "----------------------" << endl;
}

void dayType::DisplayCalDay(int num)
{
	string D =CalDay(num);
	cout <<"Day After Adding "<<num<<": "<< D << endl;
	cout << "-------------------------------" << endl;
}