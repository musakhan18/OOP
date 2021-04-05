#include<iostream>
using namespace std;

int Menu();
int strLength(const char* s1);
char* strcpy(char* s1, char* s2);
char* strncpy(char* s1, char* s2, int n);
char* strncat(char* s1, const char* s2, int n);
int strcmp(char* s1, char* s2);
int strncmp(const char* s1, const char* s2, int n);
void* strchr( char* s, char c);

int main()
{
	int choice = Menu();
	if (choice == 1)
	{
		char* arr1 = new char[100];
		cout << "Enter String: " << arr1 << endl; cin >> arr1;
		int len = strLength(arr1);
		cout << "\nLenght of your array: " << len << endl;
	}
	if (choice == 2)
	{
		char* arr1=new char [100];
		char* arr2=new char [100];
		cout << "Enter String 1: "; cin >> arr1;
		cout << "Enter String 2: "; cin >> arr2;
		/*int size = strLength(arr2);*/
		char* s1 = strcpy(arr1, arr2);
		/*for (int i = 0; i < size; i++)
		{*/
		cout << "After coping: " << s1 << endl;
		/*}*/
	}
	if (choice == 3)
	{
		int n = 0;
		char* arr1 = new char[100];
		char* arr2 = new char[100];
		cout << "Enter String 1: "; cin >> arr1;
		cout << "Enter String 2: "; cin >> arr2;
		cout << "Enter a number: "; cin >> n;
		/*int size = strLength(arr2);*/
		char* s1 = strncpy(arr1, arr2,n);
		/*for (int i = 0; i < size; i++)
		{*/
		cout << "After coping till "<<n<<": " << s1 << endl;
		/*}*/
	}
	if (choice == 4)
	{
		int n;
		char* arr1 = new char[100];
		char* arr2 = new char[100];
		cout << "Enter String 1: "; cin >> arr1;
		cout << "Enter String 2: "; cin >> arr2;
		cout << "Enter a number: "; cin >> n;
		/*int size = strLength(arr2);*/
		char* s1 = strncat(arr1, arr2, n);
		/*for (int i = 0; i < size; i++)
		{*/
		cout << "After catcatination "<< s1;
		/*}*/
	}

	if (choice == 5)
	{
		int n;
		char* arr1 = new char[100];
		char* arr2 = new char[100];
		cout << "Enter String 1: "; cin >> arr1;
		cout << "Enter String 2: "; cin >> arr2;
		/*cout << "Enter a number: "; cin >> n;*/
		/*int size = strLength(arr2);*/
		int s1 = strcmp(arr1, arr2);
		/*for (int i = 0; i < size; i++)
		{*/
		cout << s1 << endl;
		/*}*/
	}
	if (choice == 6)
	{
		int n;
		char* arr1 = new char[100];
		char* arr2 = new char[100];
		cout << "Enter String 1: "; cin >> arr1;
		cout << "Enter String 2: "; cin >> arr2;
		cout << "Enter a number: "; cin >> n;
		/*int size = strLength(arr2);*/
		int s1 = strncmp(arr1, arr2,n);
		/*for (int i = 0; i < size; i++)
		{*/
		cout << s1 << endl;
		/*}*/
	}

	if (choice == 7)
	{
		char n;
		char* arr1 = new char[5];
		char* arr2 = new char[5];
		cout << "String 1: "; cin >> arr1;
		/*cout << "String 2: "; cin >> arr2;*/
		cout << "Enter Character: "; cin >> n;
		/*int size = strLength(arr2);*/
		void* s1 = strchr(arr1, n);
		/*for (int i = 0; i < size; i++)
		{*/
		cout << "Address of " << n << " is: " << s1 << endl;
		/*}*/
	}
}

int Menu()
{
	int choice;
	cout << "Select your task" << endl;
	cout << "Press 1 for strLenght" << endl;
	cout << "Press 2 for strcpy" << endl;
	cout << "Press 3 for strncpy" << endl;
	cout << "press 4 for strncat " << endl;
	cout << "Press 5 for strcmp" << endl;
	cout << "Press 6 for strncmp" << endl;
	cout << "Press 7 for strchr" << endl;
	cin >> choice;
	return choice;

}

int strLength(const char* s1)
{
	int i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	return i;
	delete[]s1;
}

char* strcpy(char* s1, char* s2)
{
	int size = strLength(s2);
	delete[] s1;
	s1 = new char[size];
	for (int i = 0; i < size; i++)
	{
		s1[i] = s2[i];
	}
	s1[size] = '\0';
	return s1;
}

char* strncpy(char* s1, char* s2, int n)
{
	/*delete[]s1;*/
	s1 = new char[n];
	for (int i = 0; i < n; i++)
	{
		s1[i] = s2[i];
	}
	s1[n] = '\0';
	return s1;
}

char* strncat(char* s1, const char* s2, int n)
{
	int size = 0;
	/*int size = strLength(s1);*/
	while (s1[size]!='\0')
	{
		size++;
	}
	char* s3 = NULL;
	s3 = new char[size];
	for (int i = 0; i < size; i++)
	{
		s3[i] = s1[i];
	}
	s3[size] = '\0';
	
	s1 = new char[size + n];
	int j = 0;
	for (int i = 0; i < size+n; i++)
	{
		if (i < size)
		{
			s1[i] = s3[i];
		}
		else
		{
			s1[i] = s2[j];
			j++;
		}

	}
	s1[size+n] = '\0';
	return s1;
}

int strcmp(char* s1, char* s2)
{
	bool flag = true;
	int size1 = strLength(s1);
	int size2 = strLength(s2);
	if (size1 == size2)
	{
		for (int i = 0; i < size1; i++)
		{
			if (s1[i] != s2[i])
			{
				return 1;
				break;
			}
			else
			{
				return 0;
			}
		}
	}
	else
	{
		return 1;
	}
}

int strncmp(const char* s1, const char* s2, int n)
{
	int size1 = strLength(s1);

		for (int i = 0; i < n; i++)
		{
			if (s1[i] != s2[i])
			{
				return 1;
				break;
			}
			else
			{
				return 0;
			}
		}
	
}

void* strchr(char* s, char c)
{	
	int size = 0;
	int num;
	void* ptr=NULL;
	while (s[size] != '\0')
	{
		size++;
	}
	for (int i = 0; i < size; i++)
	{
		if (s[i] == c)
		{
			ptr = &s[i];
		}
		/*else
		{
			ptr = NULL;
		}*/
	}
	
	return ptr;
}