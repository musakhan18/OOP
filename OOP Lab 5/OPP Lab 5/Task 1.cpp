#include<iostream>
#include"MyString.h"
using namespace std;
int main()
{
	char*Array = new char [10] {'M', 'U', 'S', 'A', '\0'};
	MyString Obj1;
	MyString Obj2(Array);
	MyString Obj3(Array,5);
	cout << "Output Of Defult Constructor" << endl;
	Obj1.print();
	cout << "Output Of Constructor 2" << endl;
	Obj2.print();
	cout << "Output Of Constructor 3" << endl;
	Obj3.print();
}