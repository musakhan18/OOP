#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int** File1Read(int& r, int& c);
int** File2Read(int& r2, int& c2);
void merge(int** arr1, int** arr2, int r1, int c1, int r2, int c2);


int main()
{
	int r1=0, c1=0;
	int** arr1 = File1Read(r1, c1);
	int  r2 = 0, c2 = 0;	
	int** arr2 = File2Read(r2, c2);
	merge(arr1, arr2, r1, c1, r2, c2);

		
}

int** File1Read( int& r, int& c)
{
	string s;
	ifstream file;
	file.open("matrix1.txt");
	while (!file.eof())
	{
		getline(file, s);
		r++;
	}
	r--;
	file.close();
	ifstream file1;
	file1.open("matrix1.txt");
	getline(file1, s);
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] != ' ')
		{
			c++;
		}
	}
	int** arr = new int* [r];
	for (int i = 0; i < r; i++)
	{
		arr[i] = new int[c];
	}
	int temp;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			file1 >> temp;
			arr[i][j] = temp;
		}
	}
	cout << "Matrix 1" << endl;
	cout << "------------" << endl;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{

			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	file1.close();
	return arr;
}

int** File2Read(int& r2, int& c2)
{
	string s;
	ifstream file;
	file.open("matrix2.txt");
	while (!file.eof())
	{
		getline(file, s);
		r2++;
	}
	r2--;
	file.close();
	ifstream file1;
	file1.open("matrix2.txt");
	getline(file1, s);
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] != ' ')
		{
			c2++;
		}
	}
	int** arr = new int* [r2];
	for (int i = 0; i < r2; i++)
	{
		arr[i] = new int[c2];
	}
	int temp;
	for (int i = 0; i < r2; i++)
	{
		for (int j = 0; j < c2; j++)
		{
			file1 >> temp;
			arr[i][j] = temp;
		}
	}
	cout << endl;
	cout << "Matrix 2" << endl;
	cout << "------------" << endl;
	for (int i = 0; i < r2; i++)
	{
		for (int j = 0; j < c2; j++)
		{

			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	file1.close();
	return arr;
}

void merge(int** arr1, int** arr2, int r1, int c1, int r2, int c2)
{
	for (int i = 0; i < r2; i++)
	{
		for (int j = c2 - 1, k = c1 - 1; j >= 0; j--, k--)
		{
			arr1[i][k] = arr2[i][j];
		}
	}
	cout << endl;
	cout << "New Matrix" << endl;
	cout << "------------" << endl;
	for (int i = 0; i < r1; i++)
	{
		for (int j = 0; j < c1; j++)
		{
			cout << arr1[i][j] << " ";
		}
		cout << endl;
	}
}