#include<iostream>
using namespace std;
template <class type>
class Stack
{
	type* Array;	// dynamic array to store elements
	int Size;	// Size of Stack
	int CurrentLocation;	// No. of elements currently stored in Stack (initially ZERO)
public:
	Stack()
	{
		Size = 10;
		CurrentLocation = 0;
		Array = new  type[10];
	}// making a Stack of maxsize = 10;
	Stack(int si)
	{
		Size = si;
		CurrentLocation = 0;
		Array = new  type[Size];
	}
	// this function will add a number into stack maintaining LIFO behavior
	bool IsEmpty()
	{
		bool check = false;
		if (CurrentLocation == 0)
		{
			check = true;
		}
		else
		{
			check = false;
		}
		return check;
	} // return true if stack is empty otherwise return false
	bool IsFull()
	{
		bool flag = false;
		if (Size == CurrentLocation)
		{
			flag = true;
		}
		else
		{
			flag = false;
		}
		return flag;
	}// return true if stack is full otherwise return false
	
	type getTop()
	{
		type var = Array[Size];
		return var;
	} 	// get the top most element of the stack without removing it.
	type pop()
	{
		bool check;
		check = IsEmpty();
		if (check == false)
		{
			type temp;


			type* ptr = new type[Size];
			for (int i = 0; i < Size; i++)
			{
				ptr[i] = Array[i];
			}
			temp = Array[CurrentLocation - 1];
			CurrentLocation--;


			for (int i = 0; i < CurrentLocation; i++)
			{
				Array[i] = ptr[i];
			}
			delete[]ptr;
			ptr = nullptr;
			return temp;
		}
		else
		{
			cout << "Stack is Empty"<<endl;
		}
	}
	// this function will remove a number from stack maintaining LIFO behavior
	void push(type num)
	{
		bool check;
		check = IsFull();
		if (check == false)
		{
			Array[CurrentLocation] = num;

			CurrentLocation++;
		}
		else
		{
			cout << "Stack is full"<<endl;
		}
	}
	
	~Stack()
	{
		delete[]Array;
		Array = nullptr;
	}	// release all dynamic memories hold by Stack Object
};
int main()
{
	Stack<int> st_obj(5);	// Stack of Size 5
	st_obj.push(3);
	// After inserting 3 into stack, it will be like:
	st_obj.push(6);
	// After inserting 6 into stack, it will be like:
	st_obj.push(4);
	// After inserting 4 into stack, it will be like:
	int value = st_obj.pop();
	cout << value;
	// After removing one value from stack, it will be like:
	st_obj.push(-9);
}
