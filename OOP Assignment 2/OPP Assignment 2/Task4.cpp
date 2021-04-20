#include <iostream>
#include "LibraryBook.h"
#include "Date.h"
#include "Name.h"
using namespace std;
int main()
{
	char* FirstName = new char[20];
	char* LastName = new char[20];
	char* Title = new char[20];
	char* Isbn = new char[25];
	int Q=0;
	cout << "Enter First Name Of Author: "; cin >> FirstName;
	cout << "Enter First Last Of Author: "; cin >> LastName;
	Name Author;
	Author.SetFirstName(FirstName);
	Author.SetLastName(LastName);

	Name Publisher;
	cout << "Enter First Name Of Publisher: "; cin >> FirstName;
	cout << "Enter First Last Of Publisher: "; cin >> LastName;
	Publisher.SetFirstName(FirstName);
	Publisher.SetLastName(LastName);

	Date D;
	bool check = D.InputDate();

	cout << "Enter Book Title: "; cin >> Title;
	cout << "Enter Book ISBN: "; cin >> Isbn;

	cout << "Enter Quantity: "; cin >> Q;
	LibraryBook object(Author, Publisher, D,50,Title,Isbn);
	object.Display();
	LibraryBook Book(object);
	cout << "Output Of Copy Const" << endl;
	Book.Display();

}