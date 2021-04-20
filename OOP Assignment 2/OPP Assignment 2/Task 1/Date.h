#pragma once
#include<iostream>
using namespace std;

	class Date
	{
		int Day, Month, Year;
		bool validatedate()const;
	public:
		Date();
		Date(int, int, int);
		Date(const Date&);
		void SetDay(int d);
		void SetMonth(int m);
		void SetYear(int y);
		int GetDay()const;
		int GetMonth()const;
		int GetYear()const;
		bool InputDate();
		bool CopyDate(Date&);
		bool InputCompleteDate(int, int, int);
		Date& GetDate()const;
		void RetriveDate(int&, int&, int&);
		void ShowDate()const;
		bool IsEqual(Date&);
		bool IsLeap();
		~Date();
};

