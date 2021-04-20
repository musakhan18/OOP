#pragma once
#include"Name.h"
#include"Date.h"

class LibraryBook
{
private:
	char* Isbn;
	char* Title;
	char* Author;
	char* Publisher;
	int Quantity;
	int Day, Month, Year;
	
public:
	LibraryBook();
	LibraryBook(Name&,Name&,Date&, int = 0,char* = nullptr, char* = nullptr);
	LibraryBook(const LibraryBook&);
	void SetISBN(char*);
	void SetTitle(char* );
	void SetPublisher(Name&);
	void SetQuantity(int);
	void SetLastIssue(Date&);
	char* GetISBN();
	char* GetTitle(); 
	char* GetAuthor(); 
	char* GetPublisher(); 
	int GetQuantity();
	void Display()const;
};

