#include<iostream>
using namespace std;
#include "DynamicArray.h"
int main()
{
	DynamicArray obj1;
	obj1.InsertValueAtEnd(1);
	obj1.InsertValueAtEnd(13);
	obj1.InsertValueAtEnd(134);
	obj1.InsertValueAtEnd(11);
	obj1.Print(); // 1,13,134,11
	cout << endl;
	DynamicArray obj2(obj1), obj3 = obj1;
	obj2.Print(); // 1,13,134,11
	cout << endl;
	obj3.Print(); // 1,13,134,11
	cout << endl;
	obj2.InsertValueAtEnd(200);
	obj1.InsertValueAtEnd(2);
	obj3.DeleteValue(13);
	obj1.Print(); // 1,13,134,11,2
	cout << endl;
	obj2.Print(); // 1,13,134,11,200
	cout << endl;
	obj3.Print(); // 1,134,11
	cout << endl;
	obj1.Add(1);
	obj2.Subtract(3);
	obj3.Multiply(2);
	obj1.Print(); // 2,14,135,12,3
	cout << endl;
	obj2.Print(); // -2,10,131,8,197
	cout << endl;
	obj3.Print(); // 2,268,22
	cout << endl;
	obj1.Subtract(1);
	obj2.Add(3);
	obj1.Print(); // 1,13,134,11,2
	cout << endl;
	obj2.Print(); // 1,13,134,11,200
	cout << endl;
	DynamicArray obj4 = obj1.MergeArray(obj2);
	obj4.Print(); // 1,13,134,11,2,1,13,134,11,200
	cout << endl;
	//// Dynamically declare two DynamicArray objects and call functions via Arrow Pointer.
	////
	////
	////
	return 0;
}