#include<iostream>
#include"Paragraph.h"
#include<string>
#include<fstream>
using namespace std;



fstream& operator >> (fstream& fin, Paragraph& c)
{
	char t_char;
	int T_char = 0;
	//c.co;
	fin.open("text.txt", ios::in);
	while (!fin.eof())
	{
		fin >> t_char;
		T_char++;
	}
	fin.close();

	char* data_arr = new char[T_char - 1];

	int data_count = 0;
	fin.open("text.txt", ios::in);
	while (!fin.eof())
	{
		fin >> t_char;
		data_arr[data_count] = t_char;
		data_count++;
	}
	fin.close();

	int loop_count = 0;


	fin.open("text.txt", ios::in);
	string f_word;
	int max = 0;
	while (!fin.eof())
	{
		fin >> f_word;
		max++;
	}

	fin.close();
	fin.open("text.txt", ios::in);
	int w_length;
	char a;
	int sentence = 0;
	while (!fin.eof())
	{
		fin >> a;
		if (a == '.')
		{
			sentence++;
		}
	}


	int* o_D = new int[max];
	int counti = 0;
	fin.close();
	fin.open("text.txt", ios::in);

	string s, s1;
	int arr_count = 0;
	c.Arr = new char*** [1];
	string word;
	int t_word;
	for (int i = 0; i < 1; i++)
	{
		c.Arr[i] = new char** [sentence - 1];
		for (int j = 0; j < sentence - 1; j++)
		{
			bool check = true;
			t_word = 0;
			while (check)
			{
				fin >> word;
				int word_s = 0;
				word_s = word.size();
				o_D[arr_count] = word_s;
				arr_count++;
				t_word++;
				int size = word.size();
				for (int i = 0; i < size; i++)
				{
					if (word[i] != '.')
					{

						check = true;
					}
					else
					{
						check = false;
					}
				}
			}
			c.Arr[i][j] = new char* [t_word];


			for (int k = 0; k < t_word; k++)
			{

				c.Arr[i][j][k] = new char[o_D[counti]];
				counti++;
			}

		}
	}
	fin.close();


	fin.open("text.txt", ios::in);

	int ar_co = 0;

	for (int i = 0; i < 1; i++)
	{

		for (int j = 0; j < sentence - 1; j++)
		{
			bool check1 = true;
			t_word = 0;
			while (check1)
			{
				fin >> word;
				t_word++;
				int size = word.size();
				for (int i = 0; i < size; i++)
				{
					if (word[i] != '.')
					{

						check1 = true;
					}
					else
					{
						check1 = false;
					}
				}
			}


			for (int k = 0; k < t_word; k++)
			{

				for (int l = 0; l < o_D[ar_co]; l++)
				{
					c.Arr[i][j][k][l] = data_arr[loop_count];
					loop_count++;

				}
				ar_co++;

			}
		}









	}
	fin.close();

	return fin;
}

int main()
{
	char* filename = new char[20];
	cout << "ENTER FILE NAME without extension (.txt) :";
	cin >> filename;
	/*int s_file = sizeof(filename) / sizeof(char);
	cout << endl << s_file;
	filename[s_file] = '.';
	filename[s_file + 1] = 't';
	filename[s_file + 2] = 'x';
	filename[s_file + 3] = 't';
	filename[s_file + 4] = '\0';*/
	/*	cout <<endl<< filename;*/
	fstream fin;


	char t_char;
	int T_char = 0;

	fin.open(filename, ios::in);
	/*if (fin.is_open())
	{
		cout << "hello";
	}*/
	while (!fin.eof())
	{
		fin >> t_char;
		T_char++;
	}
	fin.close();

	char* data_arr = new char[T_char - 1];

	int data_count = 0;
	fin.open(filename, ios::in);
	while (!fin.eof())
	{
		fin >> t_char;
		data_arr[data_count] = t_char;
		data_count++;
	}
	fin.close();

	int loop_count = 0;


	fin.open(filename, ios::in);
	string f_word;
	int max = 0;
	while (!fin.eof())
	{
		fin >> f_word;
		max++;
	}

	fin.close();
	fin.open(filename, ios::in);
	int w_length;
	char a;
	int sentence = 0;
	while (!fin.eof())
	{
		fin >> a;
		if (a == '.')
		{
			sentence++;
		}
	}


	int* o_D = new int[max - 1];
	int counti = 0;
	fin.close();
	fin.open(filename, ios::in);

	string s, s1;
	int arr_count = 0;
	char**** ptr = new char*** [1];
	string word;
	int t_word;
	for (int i = 0; i < 1; i++)
	{
		ptr[i] = new char** [sentence - 1];
		for (int j = 0; j < sentence - 1; j++)
		{
			bool check = true;
			t_word = 0;
			while (check)
			{
				fin >> word;
				int word_s = 0;
				word_s = word.size();
				o_D[arr_count] = word_s;
				arr_count++;
				t_word++;
				int size = word.size();
				for (int i = 0; i < size; i++)
				{
					if (word[i] != '.')
					{

						check = true;
					}
					else
					{
						check = false;
					}
				}
			}
			ptr[i][j] = new char* [t_word];


			for (int k = 0; k < t_word; k++)
			{

				ptr[i][j][k] = new char[o_D[counti]];
				counti++;
			}

		}
	}
	fin.close();


	fin.open(filename, ios::in);

	int ar_co = 0;

	for (int i = 0; i < 1; i++)
	{

		for (int j = 0; j < sentence - 1; j++)
		{
			bool check1 = true;
			t_word = 0;
			while (check1)
			{
				fin >> word;
				t_word++;
				int size = word.size();
				for (int i = 0; i < size; i++)
				{
					if (word[i] != '.')
					{

						check1 = true;
					}
					else
					{
						check1 = false;
					}
				}
			}


			for (int k = 0; k < t_word; k++)
			{

				for (int l = 0; l < o_D[ar_co]; l++)
				{
					ptr[i][j][k][l] = data_arr[loop_count];
					loop_count++;

				}
				ar_co++;

			}
		}









	}
	fin.close();
	/*Paragraph obj1;*/
	Paragraph obj1( filename,ptr);
	Paragraph obj2=obj1;
	/*if (obj1==obj2)
	{
		cout << "1" << endl;
	}
	if (obj1 != obj2)
	{
		cout << "1" << endl;
	}*/
	/*+ obj1;
	obj1.display();*/
	/*-obj2;*/
	obj2.display();
	/*Paragraph ob2(obj);*/


	/*Paragraph obj2;
	cout << "\nCALLING INSERTION OPERATOR:\n";
	fin >> obj2;
	cout << "print obj2 :";
	obj2.display();
	cout << endl << endl;
	obj2.display();
	Paragraph obj3;
	obj3 = obj2;
	obj3.display();*/


	/*obj2.Display();*/
	//ob2.display();

	/*cout << "getter:" << endl;*/
	/*char**** ptr1 = obj.getarr();
	cout << ptr1;*/


	/*char arr[1][1][1][1]{ 'f' };
	cout << arr[0][0][0][0] << endl;
	ptr[0][0][0][0] = arr[0][0][0][0];
	cout << ptr[0][0][0][0];*/


	//ar_co = 0;

 //    


	//
	//fin.open("text.txt", ios::in);
	//

	//cout << "arr :";
	//for (int i = 0; i < 1; i++)
	//{


	//	for (int j = 0; j < sentence-1; j++)
	//	{
	//		bool check2 = true;
	//		t_word = 0;
	//		while (check2)
	//		{
	//			fin >> word;
	//			t_word++;
	//			int size = word.size();
	//			for (int i = 0; i < size; i++)
	//			{
	//				if (word[i] != '.')
	//				{

	//					check2 = true;
	//				}
	//				else
	//				{
	//					check2= false;
	//				}
	//			}
	//		}


	//		for (int k = 0; k < t_word; k++)
	//		{
	//			

	//			for (int l = 0; l < o_D[ar_co]; l++)
	//			{
	//				cout << ptr[i][j][k][l];
	//			}
	//			ar_co++;


	//		}
	//	}


	//	
	//	
	//}





	/*cout << endl<<ptr[1][0][0][0];*/


	/*fin >> obj;
	cout << "arr :"<<obj;
	obj.arr[1] = 'z';
	fout << obj;*/
	/*for (int i = 0; i < 25; i++)
	{
		cout << obj.arr[i];
	}*/
	/*string s = "faraz";
	char* arr = new char[20];
	int i = 0;
	for (; i < 5; i++)
	{
		arr[i] = s[i];
	}
	arr[i] =' ';
	int k = 0;
	int j = i;
	for (; j < 5; j++)
	{
		arr[j] = s[k];
		k++;
	}
	arr[j] = '\0';
	for (int i = 0; i < 7; i++)
	{
		if (arr[i] != '32')
		{
			cout << arr[i];
		}
		else
		{
			cout << "space";
		}
	}*/

	/*if (obj2 == obj3)
	{
		cout << "\nchecking == operator:\n";
		cout << "\nEqual";
	}
	else
	{
		cout << "\nchecking == operator:\n";
		cout << "not equal";
	}
	if (obj2 != obj3)
	{
		cout << "\nchecking != operator:\n";
		cout << "\nNot Eequal";
	}
	else
	{
		cout << "\nchecking != operator:\n";
		cout << "\nEqual";
	}
	bool p_chekc = obj3.check();
	if (p_chekc == false)
	{
		cout << "\nto lower:";
		-obj3;
		obj3.display();
	}
	else
	{
		cout << "\nto upper :";
		+obj3;
		obj3.display();
	}

	bool e_check = obj3.checkEncrypt();
	{
		if (e_check == true)
		{
			cout << "\nDATA IS IN PLAIN TEXT FORM\n";
			obj3 % 2;
			obj3.display();
		}
		else
		{
			cout << "\nDATA IS IN ENCCYPTED FORM ";
		}
	}*/
	return 0;
}