#pragma once
#include"Client.h"
class Manager:public Person
{
public:
	static  Manager* manager;
	static Client* client;
	static int totalclient;
	Manager();
	Manager(char*, char*, char*, Manager*, Client*, int);
	void AddClient(Client*);
	void RemoveClient(Client*);
	void DisplayAllClient()const;
	void display()const;
	~Manager();
};

