#include<iostream>
#include"BankAccount.h"
#include"Client.h"
#include"Manager.h"
using namespace std;

Manager* Manager::manager=new Manager[1];
Client* Manager::client;
int Manager::totalclient;
int main()
{
	char* Num = new char[20]{ '1','2','3','4','5','6','7','8','9','0','\0' };
	char* Typ = new char[20]{ 'S','a','v','i','n','g','s','\0' };
	char* Nam = new char[20]{ 'S','h','a','k','a','\0' };
	char* cnic = new char[20]{ '1','2','3','4','5','6','7','8','9','0','\0' };
	char* add = new char[20]{ 'H','#','3',',','S','t','.','#','9','\0' };
	char* emp = new char[20]{ 'C','h','a','p','r','a','s','i','\0' };
	BankAccount obj(Num, 2500, Typ);
	/*obj.Display();
	obj + 500;
	obj.Display();
	obj - 500;
	obj.Display();*/
	Manager* manager=new Manager[1];
	manager->SetName(Nam);
	manager->SetCnic(cnic);
	manager->SetAddress(add);
	Client* client = new Client[1];
	for (int i = 0; i < 1; i++)
	{
		client[i].SetName(Nam);
		client[i].SetCnic(cnic);
		client[i].SetAddress(add);
		client[i].SetEmployeement(emp);
		client[i].SetAccount(obj);
	}
	client[0].display();
	Manager man(Nam, cnic, add, manager, client, 1);
	man.display();
	//Cli.UpdateAccountInfo();
	/*Cli.display();*/
}