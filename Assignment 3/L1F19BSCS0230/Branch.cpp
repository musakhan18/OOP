#include "Branch.h"

Branch::Branch()
{
	AccountsArray = new BankAccount * [20];
	ArrSize = 0;
	TotalBalance = 0;
}
Branch::Branch(int s, double b)
{
	ArrSize = s;
	TotalBalance = b;
	AccountsArray = new BankAccount * [20];
}
Branch::Branch(Branch& ref)
{
	ArrSize = ref.ArrSize;
	TotalBalance = ref.TotalBalance;
	AccountsArray = ref.AccountsArray;
}
int Branch::GetSize()
{
	return ArrSize;
}
double Branch::GetAccBalance()
{
	return TotalBalance;
}
BankAccount** Branch::GetArray()
{
	return this->AccountsArray;
}
const BankAccount* Branch::operator[](int index)const
{
	if (index >= 0 && index < 10)
		return AccountsArray[index];
	else
		return AccountsArray[0];
}
BankAccount* Branch::operator[](int index)
{
	if (index >= 0 && index < 10)
		return AccountsArray[index];
	else
		return AccountsArray[0];
}
Branch& Branch::operator=(const Branch& rhs)
{
	if (this != &rhs)
	{
		this->AccountsArray = rhs.AccountsArray;
		this->TotalBalance = rhs.TotalBalance;
		this->ArrSize = rhs.ArrSize;
	}
	return *this;
}
bool Branch::operator==(Branch& ref)
{
	if (this->AccountsArray == ref.AccountsArray && this->ArrSize == ref.ArrSize && this->TotalBalance == ref.TotalBalance) {
		return true;
	}
	else {
		return false;
	}
}
bool Branch::operator!=(Branch& ref)
{
	return !operator==(ref);
}
void Branch::AddAccount()
{
	int choice = 0;
	BankAccount* temp= nullptr;
	cout << "Choose Account Type" << endl;
	cout << "Press 1 to add Saving Account" << endl;
	cout << "Press 2 to add Checking Account" << endl;
	cout << "Press 3 to add Current Account" << endl;
	cout << "Press 4 to add Investment Account" << endl;
	cin >> choice;
	cout << "-------------------------------------------" << endl;
	cout << endl;
	char* title = new char[10];
	char* accnum = new char[20];
	double balance = 0;
	double ir = 0;
	double fee;
	double minbal = 0;
	double pp = 0;
	if (choice == 1)
	{
		cout << "Enter Title: ";cin >> title;
		cout << "Enter Account Number: " ;cin >> accnum;
		cout << "Enter Balance: " ;cin >> balance;
		cout << "Enter Interest Rate: " ;cin >> ir;
		/*cout << "Enter" << endl;*/
		SavingsAccount* obj/*(ir, accnum,title, balance);*/ = new SavingsAccount;
		obj->SetAccTitle(title);
		obj->SetAccNum(accnum);
		obj->SetAccBalance(balance);
		obj->SetInterestRate(ir);
		AccountsArray[this->ArrSize++] = obj;
		/*cout << obj.GetAccTitle() << endl;*/
		cout << "Account Created SuccessFully !!" << endl;
		TotalBalance += obj->GetAccBalance();
	}
	if (choice == 2) 
	{
		cout << "Enter Title: " ;cin >> title;
		cout << "Enter Account Number: " ;cin >> accnum;
		cout << "Enter Balance: " ;cin >> balance;
		cout << "Enter Charges: " ;cin >> fee;

		CheckingAccount* obj1= new CheckingAccount;
		obj1->SetAccTitle(title);
		obj1->SetAccNum(accnum);
		obj1->SetAccBalance(balance);
		obj1->SetFee(fee);
		AccountsArray[this->ArrSize+1] = obj1;
		cout << endl;
		cout << "Account Created SuccessFully !!" << endl;
		TotalBalance += obj1->GetAccBalance();
	}
	if (choice == 3) 
	{
		cout << "Enter Title: " ;cin >> title;
		cout << "Enter Account Number: ";cin >> accnum;
		cout << "Enter Balance: " ;cin >> balance;
		cout << "Enter Charges: " ;cin >> fee;
		cout << "Enter Minimum Balance: ";cin >> minbal;

		CurrentAccount* obj1= new CurrentAccount;
		obj1->SetAccTitle(title);
		obj1->SetAccNum(accnum);
		obj1->SetAccBalance(balance);
		obj1->SetFee(fee);
		obj1->SetMinimumBalance(minbal);
		AccountsArray[this->ArrSize++] = obj1;
		cout << "Account Created SuccessFully!" << endl;
		TotalBalance += obj1->GetAccBalance();
	}
	if (choice == 4)
	{
		cout << "Enter Title: " ;cin >> title;
		cout << "Enter Account Number: ";cin >> accnum;
		cout << "Enter Balance: ";cin >> balance;
		cout << "Enter Charges: " ;cin >> fee;
		cout << "Enter Minimum Balance: ";cin >> minbal;
		cout << "Enter Profit%: ";cin >> pp;

		InvestmentAccount* obj1 = new InvestmentAccount;
		obj1->SetAccTitle(title);
		obj1->SetAccNum(accnum);
		obj1->SetAccBalance(balance);
		obj1->SetFee(fee);
		obj1->SetMinimumBalance(minbal);
		obj1->SetProfit(pp);
		AccountsArray[this->ArrSize++] = obj1;
		cout << "Account Created SuccessFully!" << endl;
		TotalBalance += obj1->GetAccBalance();
	}
	cout << endl;
}
void Branch::DeleteAccount(char* t)
{
	int flag = 0;
	int index=0;
	for (int i = 0; i < ArrSize; i++) 
	{
		if (!strcmp(AccountsArray[i]->GetAccTitle(),t)) 
		{
			index = i;
			flag = 1;
			break;
		}
	}
	if (flag) 
	{
		for (int i = index; i < ArrSize; i++) 
		{
			AccountsArray[i] = AccountsArray[i + 1];
		}
		AccountsArray[ArrSize - 1] = nullptr;
		this->ArrSize--;
		cout << "Account Deleted SuccessFully!" << endl;
	}
	else
	{
		cout << "No Account Found !" << endl;
	}
}
void Branch::UpdateAccount(char* t)
{
	int flag = 0;
	int index = 0;
	for (int i = 0; i < ArrSize; i++)
	{
		if (!strcmp(AccountsArray[i]->GetAccTitle(), t))
		{
			index = i;
			flag = 1;
			break;
		}
	}
	if (flag) 
	{
		char* title = new char[20];
		cout << "Enter Update Title: ";cin >> title;
		char* accnum = new char[20];
		cout << "Enter Update Account Number: ";cin >> accnum;
		double balance = 0;
		cout << "Enter Update Balance: ";cin >> balance;
		cout << endl;
		cout << "Account Updated Successfully!" << endl;
		for (int i = index; i < ArrSize; i++) 
		{
			AccountsArray[i]->SetAccTitle(title);
			AccountsArray[i]->SetAccNum(accnum);
			AccountsArray[i]->SetAccBalance(balance);
			cout <<"Title: "<< AccountsArray[i]->GetAccTitle() << endl;
			cout << "Account Number: " << AccountsArray[i]->GetAccNum() << endl;
			cout << "Balance: " << AccountsArray[i]->GetAccBalance() << endl;
			cout << "Account Updated SuccessFully !!" << endl;
		}
		
		cout << endl;
	}
	else
	{
		cout << "No Account Found!" << endl;
	}
}
void Branch::FindAccountTitle(char* t)
{
	int flag = 0;
	int index = 0;
	/*cout << "1" << endl;*/
	for (int i = 0; i < ArrSize; i++)
	{
		/*cout << "2" << endl;*/
		if (!strcmp(AccountsArray[i]->/*Get*/AccTitle, t)) 
		{
			index = i;
			flag = 1;
			break;
		}
		/*cout << "3" << endl;*/
	}
	cout << index << endl;
	if (flag) 
	{
		/*cout << "Account With Same Name" << endl;*/
		for (int i = index; i < ArrSize; i++) {
			cout << "Title: " << AccountsArray[i]->AccTitle << endl;
			cout << "Account Number: " << AccountsArray[i]->AccNum << endl;
			cout << "Balance: " << AccountsArray[i]->AccBalance << endl;
		}
		cout << endl;
	}
	else
	{
		cout << "No Account Found!" << endl;
	}
}
void Branch::FindAccountNumber(char* a)
{
	int flag = 0;
	int index = 0;
	for (int i = 0; i < ArrSize; i++) 
	{
		if (!strcmp(AccountsArray[i]->GetAccNum(), a)) 
		{
			index = i;
			flag = 1;
			break;
		}
	}
	if (flag)
	{
		cout << "Account Details" << endl;
		cout << "---------------------" << endl;
		for (int i = index; i < ArrSize; i++) 
		{
			cout << "Title: " << AccountsArray[i]->GetAccTitle() << endl;
			cout << "Account Number: " << AccountsArray[i]->GetAccNum() << endl;
			cout << "Balance: " << AccountsArray[i]->GetAccBalance() << endl;
		}
		cout << endl;
	}
	else 
	{
		cout << "No Account Found !!" << endl;
	}
}
int Branch::Menu()
{
	int c;
	cout << "^^What do you desire^^" << endl;
	cout << "Press 1 to Add New Account" << endl;
	cout << "Press 2 to Delete An Account" << endl;
	cout << "Press 3 to Update Account" << endl;
	cout << "Press 4 to Find Account By Account Number" << endl;
	cout << "Press 5 to Find All Accounts By Account Title" << endl;
	cout << "Press 6 to Display Accounts" << endl;
	cout << "Press 0 to Exit" << endl;
	cout << "---------------------------------------------------------" << endl;
	cin >> c;
	return c;
}

Branch::~Branch()
{
	delete[] AccountsArray;
	AccountsArray = nullptr;
}

