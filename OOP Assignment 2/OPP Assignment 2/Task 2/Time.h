#pragma once
#include<iostream>
using namespace std;

class Time
{
private:
    int Hour, Minute, Second;
    char* AmPm;
    bool ValidTime24();
    bool ValidTime12();

public:
    Time();
    Time(int, int, int);
    Time(int, int, int, char* );
    Time(Time&);
    void SetHour(int H);
    void SetMin(int M);
    void SetSec(int S);
    void SetAmPm(char* Am);
    int GetHour()const;
    int GetMin()const;
    int GetSec()const;
    char* GetAmPm()const;
    bool InputTime12();
    bool InputTime24();
    bool InputCompleteTime24(int, int , int );
    bool InputCompleteTime12(int , int , int , char*);
    Time& GetTime()const;
    void RetriveTime(int& , int&, int& );
    void RetriveTime(int& , int& , int& , char* );
    void ShowTime()const;
    bool IsEqual(Time&);
    void ConvertTime();
    ~Time();
};

