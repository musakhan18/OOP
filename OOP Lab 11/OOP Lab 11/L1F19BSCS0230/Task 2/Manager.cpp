#include "Manager.h"

Manager::Manager()
{
	 totalclient=0;
	 client = nullptr;
	 manager = nullptr;
}

Manager::Manager(char* N, char* C, char* A, Manager* M, Client* Cl, int Tc):Person(N,C,A)
{
	manager = M;
	client = Cl;
	totalclient = Tc;
}

void Manager::AddClient(Client* cl)
{
	Client* temp = new Client[totalclient];
	for (int i = 0; i < totalclient; ++i)
	{
		temp[i] = client[i];
	}
	totalclient++;
	client = new Client[totalclient];
	int i = 0;
	for (; i < totalclient; ++i)
	{
		client[i] = temp[i];
	}

	client[i + 1] = cl[0];
}

void Manager::RemoveClient(Client* cl)
{
	int pos;
	bool flag =0;
	for (int i = 0; i < totalclient; i++)
	{
		if (&client[i] == &cl[0])
		{
			flag = 1;
			pos = i;
			break;
		}
	}

	Client* temp = new Client[totalclient];
	for (int i = 0; i < totalclient; ++i)
	{
		temp[i] = client[i];

	}
	client = new Client[totalclient - 1];
	if (flag )
	{
		for (int j = 0; j < totalclient; j++)
		{
			if (j != pos)
			{
				client[j] = temp[j];
			}
		}
		totalclient--;
	}
	else
	{
		cout << "Nothing found" << endl;
	}
}

void Manager::display()const
{
	Person::display();
}

void Manager::DisplayAllClient()const
{
	cout << "Total Clients :" << totalclient << endl;
}

Manager::~Manager()
{
	delete[]manager;
	manager = nullptr;
	delete[]client;
	client = nullptr;
}