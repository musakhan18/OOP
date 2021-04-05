#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int** FileRead(int& r, int& c);
int** Min(int** arr,int r,int c);
void Sorting(int** MinArr, int** arr, int r, int c);
int main()
{
	int r = 0, c = 0;
	int** arr=FileRead(r, c);
	int** MinArr = Min(arr, r, c);
	Sorting(MinArr, arr, r, c);
}

int** FileRead(int& r, int& c)
{
	string s;
	ifstream file;
	file.open("mat.txt");
	if (file)
	{
		while (!file.eof())
		{
			getline(file, s);
			r++;
		}
		r--;
		file.close();
		ifstream file1;
		file1.open("mat.txt");
		getline(file1, s);
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] != ' ')
			{
				c++;
			}
		}
		c--;
		file1.close();
		int** arr = new int* [r];
		for (int i = 0; i < r; i++)
		{
			arr[i] = new int[c];
		}
		ifstream file3;
		file3.open("mat.txt");
		int temp;
		for (int i = 0; i < r; i++)
		{
			for (int j = 0; j < c; j++)
			{
				file3 >> temp;
				arr[i][j] = temp;
			}
		}
		cout << "Matrix " << endl;
		cout << "-----------" << endl;
		for (int i = 0; i < r; i++)
		{
			for (int j = 0; j < c; j++)
			{

				cout << arr[i][j] << " ";
			}
			cout << endl;
		}
		file3.close();
		return arr;
	}
	else
	{
		cout << "Error!!" << endl;
		cout << "File Dose not Exist!!" << endl;
		return 0;
	}
}

int** Min(int** arr, int r, int c)
{
	int** MinArr = new int* [r];
	for (int i = 0; i < r; i++)
	{
		MinArr[i] = new int[1];
	}
	int min;
	for (int i = 0; i < r; i++)
	{
		min = arr[i][0];
		for (int j = 0; j < c; j++)
		{
			if (min>arr[i][j])
			{
				min = arr[i][j];
			}
		}
		MinArr[i][0] = min;
	}
	cout << endl;
	cout << "Before Soring" << endl;
	cout << "-------------" << endl;
	for (int i = 0; i < r; i++)
	{
		cout << MinArr[i][0] << endl;
	}
	return MinArr;
}

void Sorting(int** MinArr, int** arr, int r, int c)
{
	int* Index = new int[r];
	for (int i = 0; i < r; i++)
	{
		Index[i] = i;
	}
	for (int i = 0; i < r; i++)
	{
		for (int j = i+1; j < r; j++)
		{
			if (MinArr[i][0]>MinArr[j][0])
			{
				int temp = MinArr[i][0];
				MinArr[i][0] = MinArr[j][0];
				MinArr[j][0] = temp;
				int tempI = Index[i];
				Index[i] = Index[j];
				Index[j] = tempI;
			}
		}
	}
	cout << endl;
	cout << "After Sorting" << endl;
	cout << "--------------" << endl;
	for (int i = 0; i < r; i++)
	{
		cout << MinArr[i][0] << endl;
	}
	int** NewArray = new int* [r];
	for (int i = 0; i < r; i++)
	{
		NewArray[i] = new int[c];
	}
	for (int i = 0; i < r; i++)
	{
		NewArray[i] = arr[Index[i]];
	}
	cout << endl;
	cout << "Matrix after sorting" << endl;
	cout << "----------------" << endl;
	for (int i = 0; i < r; i++)
	{
		for (int j= 0; j < c; j++)
		{
			cout << NewArray[i][j] << " ";
		}
		cout << endl;
	}
}