#include"HugeInteger.h"
#include <iostream>
using namespace std;

ostream& operator<<(ostream&, const HugeInteger& );
ostream& operator<<(ostream& os, const HugeInteger& obj)
{
    for (int i = 0; i < obj.getSize(); i++)
    {
        if (obj.arr[i] != -99)
        {
            os << obj.arr[i] << " ";
        }
    }
    return os;
}
istream& operator>>(istream&, HugeInteger&);
istream& operator>>(istream& A, HugeInteger& obj)
{
    int num = 0, rem = 0;
    cout << "Kindly Enter number: ";cin >> num;

    int i = 0, temp = 0, n;

    while (num != 0)
    {
        rem = num % 10;
        temp = rem + temp * 10;
        num = num / 10;
    }

    rem = 0;
    while (temp != 0)
    {
        rem = temp % 10;
        obj.arr[i] = rem;
        temp /= 10;
        i++;
    }

    for (int j = i; j < obj.getSize(); j++)
    {
        obj.arr[j] = -99;
    }
    return A;
}
int main()
{
    HugeInteger obj1, obj2;
   cin >> obj1;
   cout <<"Obj1: "<<obj1 << endl<<endl;

   cin >> obj2;
   cout <<"Obj2: "<< obj2 << endl << endl;

   HugeInteger obj3 = obj1 + obj2;
    cout << obj3;
    cout << endl << endl;

    HugeInteger obj4 = obj1 - obj2;
    cout << obj4;
    cout << endl<<endl;

    HugeInteger obj6 = obj3 = obj4;


    if (obj1 < obj2)
    {
        cout << "Obj1 is Less than Obj2" << endl;
    }

    else if (obj1 > obj2)
    {
        cout << "Obj1 is Greater than Obj2" << endl;
    }

    else if (obj1 == obj2)
    {
        cout << "Both Obj are equal" << endl;
    }

    else if (obj1 >= obj2)
    {
        cout << "Obj3 is Greater or Equal than Obj4" << endl;
    }

    else if (obj1 <= obj2)
    {
        cout << "Obj is Less or Equal than obj4" << endl;
    }

    else
    {
        cout << "Obj are not equal" << endl ;
    }

    obj1++;
    cout << "Post Increment obj1: " << obj1 << endl;

    obj3++;
    cout << "Pre Increment obj3: " << obj3 << endl;

    obj4--;
    cout << "Post decrement obj4: " << obj4 << endl;

    HugeInteger obj7 = obj6;

    obj4 += obj7;

    cout << "obj4 = " << obj4 << endl;
    cout << "obj7 = " << obj7 << endl;

    return 0;
}

