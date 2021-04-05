#include<iostream>
#include"CarbonFootprint.h"
#include "Electricity.h"
#include"NaturalGas.h"
#include"Vehicles.h"
using namespace std;
void Display(CarbonFootprint* par)
{
    par->getCarbonFootprint();
}

int main() {
    CarbonFootprint* obj;
    Electricity elec(2000, 12);
    NaturalGas ng(1500, 12);
    Vehicles v(28.32, 23, 67, 47, 55.14);

    obj = &elec;
    obj = &ng;
    obj = &v;
   
    Display(obj);

    return 0;
}