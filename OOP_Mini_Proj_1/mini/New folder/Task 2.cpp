#include <iostream>
#include<fstream>
#include"Paragraph.h"
#include"Sentence.h"
#include"Words.h"
#include"Characters.h"
using namespace std;

fstream& operator >> (fstream& fin, Paragraph& c)
{
	char t_char;
	int T_char = 0;
	fin.open("text1.txt", ios::in);
	while (!fin.eof())
	{
		fin >> t_char;
		T_char++;
	}
	fin.close();

	char* data_arr = new char[T_char - 1];
	c.Arr = new char[T_char];
	int data_count = 0;
	fin.open("text1.txt", ios::in);
	while (!fin.eof())
	{
		fin >> t_char;
		data_arr[data_count] = t_char;
		data_count++;
	}
	fin.close();


	for (int i = 0; i < T_char - 1; i++)
	{
		c.Arr[i] = data_arr[i];
	}
	c.Arr[T_char] = '\0';
	return fin;
}

ostream& operator << (ostream& out, const Paragraph& c)
{
	int size = 0;
	while (c.Arr[size] != '\0')
	{
		size++;
	}
	cout << "\nPARAGRAPH:\n";
	for (int i = 0; i < size; i++)
	{
		out << c.Arr[i];
	}
	return out;
}


int main()
{
	char* name = new char[20];
	char* arr;
	int size = 0;
	cout << "Enter File name with extension: "; cin >> name;
	fstream fin;
	Paragraph obj(name);
	obj % 2;
	cout << endl;
	obj * 2;
	cout << "Calling + opretor for Uppercase" << endl;
	cout << "----------------------------------" << endl;
	+obj;
	cout << endl;
	cout << "Calling - opretor for Lowercase" << endl;
	cout << "----------------------------------" << endl;
	-obj;
	cout << "------------------------------------------------------------------------------------------------------------------" << endl;
	cout << endl;
	Sentence s_obj(obj);
	Words w_obj(obj, s_obj);
	Characters c_obj(obj, s_obj, w_obj);
	c_obj.display();
}