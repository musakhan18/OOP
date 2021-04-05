#include<iostream>
#include<fstream>
using namespace std;
int** FileRead(ifstream& file, int& r, int& c);
void Min(int** arr, int r, int c);
void Max(int** arr, int r, int c);
int main()
{
	ifstream file;
	file.open("matrix.txt");
	if (file)
	{
		int r, c;
		int** arr = FileRead(file, r, c);
		file.close();
		Min(arr, r, c);
		Max(arr, r, c);
	}
	return 0;
}

int** FileRead(ifstream& file, int& r, int& c)
{
	file >> r >> c;
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
			file >> temp;
			arr[i][j] = temp;
		}
	}
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	file.close();
	return arr;
}

void Min(int** arr, int r, int c)
{
	
	int** MinArr = new int* [r];
	for (int i = 0; i < r; i++)
	{
		MinArr[i] = new int[1];
	}
	int MiniTemp;
	for (int i = 0; i < r; i++)
	{
		MiniTemp = arr[i][0];
		for (int j = 0; j < c; j++)
		{
			if (arr[i][j] < MiniTemp)
			{
				MiniTemp = arr[i][j];
			}
		}
		MinArr[i][0] = MiniTemp;
	}
	for (int i = 0; i < r; i++)
	{
		cout << MinArr[i][0] << endl;
	}
	ofstream Fwrite;
	Fwrite.open("minMax.txt");
	for (int i = 0; i < r; i++)
	{
		Fwrite << MinArr[i][0] << endl;
	}
	Fwrite << endl;
	Fwrite.close();
}

void Max(int** arr, int r, int c)
{
	int** MaxArr = new int* [1];
	MaxArr[0] = new int[c];
	int MaxTemp;
	for (int k = 0; k < r; k++)
	{
		MaxTemp = arr[0][k];
		for (int l = 0; l < c; l++)
		{
			if (arr[l][k] > MaxTemp)
			{
				MaxTemp = arr[l][k];
			}
		}
		MaxArr[0][k] = MaxTemp;
	}
	for (int i = 0; i < c; i++)
	{
		cout << MaxArr[0][i] << " ";
	}
	ofstream Fwrite;
	Fwrite.open("minMax.txt");
	Fwrite << endl ;
	for (int i = 0; i < c; i++)
	{
		Fwrite << MaxArr[0][i] << " ";
	}
	cout << "\nData saved successfuly in file (minMax)" << endl;
	Fwrite.close();
}