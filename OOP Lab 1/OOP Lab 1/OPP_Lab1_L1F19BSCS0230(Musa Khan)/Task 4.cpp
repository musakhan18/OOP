#include<iostream>
#include<fstream>
#include<string>
#include<math.h>
using namespace std;

int** Make_2D(int& r, int& c);
int** Fill_2D(int** arr, int r, int c);
int** Sort_Asen(int** arr, int r, int c);
int** Sort_Desen(int** arr, int r, int c);
void Save_In_File(int** arr, int r, int c);

int main()
{
	int r, c;

	int** arr = Make_2D(r, c);
	arr = Fill_2D(arr, r, c);
	arr = Sort_Asen(arr, r, c);
	arr = Sort_Desen(arr, r, c);
	Save_In_File(arr, r, c);

	return 0;
}

int** Make_2D(int& r, int& c)
{
	int x;
	int count = 0;
	ifstream file;
	file.open("MatTask4.txt");
	while (!file.eof())
	{
		file >> x;
		count++;
	}
	file.close();
	float size = sqrt(count);
	r = size;
	if (size==r)
	{
		r = size;
		c = r;
	}
	else
	{
		r += 1;
		c = r;
	}
	
	int** arr = new int*[r];
	for (int i = 0; i < r; i++)
	{
		arr[i] = new int[c];
	}
	return arr;
}

int** Fill_2D(int** arr, int r, int c)
{
	int temp;
	ifstream file;
	file.open("MatTask4.txt");
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			file >> temp;
			arr[i][j] = temp;
		}
	}
	cout << "Matrix" << endl;
	cout << "--------" << endl;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	return arr;
}

int** Sort_Asen(int** arr, int r, int c)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (i % 2 != 0)
			{
				for (int k = 0; k < c - j - 1; k++)
				{
					if (arr[i][k] > arr[i][k + 1])
					{
						swap(arr[i][k], arr[i][k + 1]);
					}
				}
			}
			else
			{
				break;
			}
		}
	}
	cout << endl << endl;
	cout << "The odd numbered rows in ascending order" << endl;
	cout << "-----------------------------------------" << endl;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	return arr;
}

int** Sort_Desen(int** arr, int r, int c)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (i % 2 != 0)
			{
				break;
			}
			else
			{
				for (int k = 0; k < c - j - 1; k++)
				{
					if (arr[i][k] < arr[i][k + 1])
					{
						swap(arr[i][k], arr[i][k + 1]);
					}
				}
			}
		}
	}
	cout << endl << endl;
	cout << "The Even numbered rows in decending order" << endl;
	cout << "------------------------------------------" << endl;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	return arr;
}

void Save_In_File(int** arr, int r, int c)
{
	ofstream file;
	file.open("output.txt");
	file << "Matrix" << endl;
	file << "--------" << endl;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			file << arr[i][j] << " ";
		}
		file << endl;
	}
	file << endl << endl;
	file << "The odd numbered rows in ascending order" << endl;
	file << "-----------------------------------------------" << endl;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			file << arr[i][j] << " ";
		}
		file << endl;
	}
	file << endl << endl;
	file << "The Even numbered rows in decending order" << endl;
	file << "------------------------------------------------" << endl;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			file << arr[i][j] << " ";
		}
		file << endl;
	}
	cout << "\n Data saved In file (output.txt) successfuly" << endl;
	file.close();
}