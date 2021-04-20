#include "LibraryBook.h"
#include"Name.h"

int GetSize(char* arr)
{
	int Size = 0;
	while (arr[Size] != '\0')
	{
		Size++;
	}
	return Size;
}

LibraryBook::LibraryBook()
{
	Isbn = nullptr;
	Title = nullptr;
	Author=nullptr;
	Publisher = nullptr;
	Quantity = 0;
}

LibraryBook::LibraryBook(Name& N,Name&P, Date& D, int Q, char* T, char* I)
{
	int SizeI = GetSize(I);
	Isbn = new char[SizeI+1];
	for (int i = 0; i < SizeI; i++)
	{
		Isbn[i] = I[i];
	}
	Isbn[SizeI] = '\0';

	int SizeT = GetSize(T);
	Title = new char[SizeT + 1];
	for (int i = 0; i < SizeT; i++)
	{
		Title[i] = T[i];
	}
	Title[SizeT] = '\0';

	char* AName = N.FullName();
	int SizeA = GetSize(AName);
	Author = new char[SizeA + 1];
	for (int i = 0; i < SizeA; i++)
	{
		Author[i] = AName[i];
	}
	Author[SizeA] = '\0';

	char* PName = P.FullName();
	int SizeP = GetSize(PName);
	Publisher = new char[SizeP + 1];
	for (int i = 0; i < SizeP; i++)
	{
		Publisher[i] = PName[i];
	}
	Publisher[SizeP] = '\0';

	Day = D.GetDay();
	Month = D.GetMonth();
	Year = D.GetYear();

	Quantity = Q;
}

LibraryBook::LibraryBook(const LibraryBook& obj)
{
	int SizeI = GetSize(obj.Isbn);
	Isbn = new char[SizeI + 1];
	for (int i = 0; i < SizeI; i++)
	{
		Isbn[i] = obj.Isbn[i];
	}
	Isbn[SizeI] = '\0';

	int SizeT = GetSize(obj.Title);
	Title = new char[SizeT + 1];
	for (int i = 0; i < SizeT; i++)
	{
		Title[i] = obj.Title[i];
	}
	Title[SizeT] = '\0';

	char* AName = obj.Author;
	int SizeA = GetSize(AName);
	Author = new char[SizeA + 1];
	for (int i = 0; i < SizeA; i++)
	{
		Author[i] = AName[i];
	}
	Author[SizeA] = '\0';

	char* PName = obj.Publisher;
	int SizeP = GetSize(PName);
	Publisher = new char[SizeP + 1];
	for (int i = 0; i < SizeP; i++)
	{
		Publisher[i] = PName[i];
	}
	Publisher[SizeP] = '\0';

	Day = obj.Day;
	Month = obj.Month;
	Year = obj.Year;

	Quantity = obj.Quantity;
}

void LibraryBook::SetISBN(char* Num)
{
	int SizeI = GetSize(Num);
	Isbn = new char[SizeI + 1];
	for (int i = 0; i < SizeI; i++)
	{
		Isbn[i] = Num[i];
	}
	Isbn[SizeI] = '\0';
}

void LibraryBook::SetTitle(char* temp)
{
	int Size = GetSize(temp);
	Title = new char[Size + 1];
	for (int i = 0; i < Size; i++)
	{
		Title[i] = temp[i];
	}
	Title[Size] = '\0';
}

void LibraryBook::SetPublisher(Name& P)
{
	char* Temp = P.FullName();
	int Size = GetSize(Temp);
	Publisher = new char[Size+1];
	for (int i = 0; i < Size; i++)
	{
		Publisher[i] = Temp[i];
	}
	Publisher[Size] = '\0';
}

void LibraryBook::SetQuantity(int Num)
{
	Quantity = Num;
}

void LibraryBook::SetLastIssue(Date&D)
{
	Day = D.GetDay();
	Month = D.GetMonth();
	Year = D.GetYear();
}

char* LibraryBook::GetISBN()
{
	char* Num;
	int SizeI = GetSize(Isbn);
	Num = new char[SizeI + 1];
	for (int i = 0; i < SizeI; i++)
	{
		Num[i] = Isbn[i];
	}
	Num[SizeI] = '\0';
	return Num;
}
char* LibraryBook::GetTitle()
{
	char* temp;
	int Size = GetSize(Title);
	temp = new char[Size + 1];
	for (int i = 0; i < Size; i++)
	{
		temp[i] = Title[i];
	}
	temp[Size] = '\0';
	return temp;
}
char* LibraryBook::GetAuthor()
{
	char* AName = Author;
	int SizeA = GetSize(AName);
	Author = new char[SizeA + 1];
	for (int i = 0; i < SizeA; i++)
	{
		AName[i] = Author[i];
	}
	AName[SizeA] = '\0';
	return AName;
}

char* LibraryBook::GetPublisher()
{
	char* Temp = Publisher;
	int Size = GetSize(Temp);
	Temp = new char[Size+1];
	for (int i = 0; i < Size; i++)
	{
		Temp[i] = Publisher[i];
	}
	Publisher[Size] = '\0';
	return Publisher;
}
int LibraryBook::GetQuantity()
{
	return Quantity;
}

void LibraryBook::Display()const
{
	cout << endl;
	cout << "ISBN Number: " << Isbn<<endl;
	cout << "Book Title: " << Title << endl;
	cout << "Quantity Of Book: " << Quantity << endl;
	cout << "Publisher Name: " << Publisher << endl;
	cout << "Author Name: " << Author << endl;
	cout << "Last Issue Date: " << Day << "-" << Month << "-" << Year << endl;
	cout << endl;
}
