#include<iostream>
using namespace std;
template <class T>
class Queue
{
    T*  Array;    
    int Size;   
    int CurrentLocation;    
    int front;        
    int Rear;         
public:
    Queue()     
    {
         Array = new T[10];
        Size = 10;
        CurrentLocation = 0;
        front = -1;        
        Rear = -1;
    }
    Queue(int s)   
    {
         Array = new T[s];
        Size = s;
        CurrentLocation = 0;
        front = -1;         
        Rear = -1;
    }
    bool IsEmpty()
    {
        if (CurrentLocation == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool IsFull() 
    {
        int s = Size - 1;
        if (CurrentLocation == Size)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
   
    T DeQueue() 
    {
        bool flag = IsEmpty();
        if (flag == false)
        {
            T num =  Array[front];
             Array[front] =  Array[Rear - 1];
            Array[Rear - 1] =  Array[Rear];
             Array[Rear] = 0;
            CurrentLocation = Rear;
            Rear-=1;
            cout << "DeQueue:" << num << endl;
            cout << "new Queue " << endl;
            for (int i = CurrentLocation - 1; i >= 0; i--)
            {
                cout <<  Array[i] << endl;
            }
            return num;
        }
        else
        {
            cout << "Queue is Empty"<<endl;
            return 0;
        }
    }
    void EnQueue(T num) 
    {
        bool flag;
        flag = IsFull();
        if (flag == false)
        {
            Array[CurrentLocation] = num;
            cout << Array[CurrentLocation] << endl;
            CurrentLocation++;
            if (front == -1)
            {
                front++;
            }
            Rear++;
        }
        else
        {
            cout << "Queue is Full"<<endl;
        }
    }
    ~Queue()   
    {
        delete[]  Array;
        Array = nullptr;
    }
};

int main()
{
    Queue <int>obj(5);   
    cout << "Queue is: " << endl;
    obj.EnQueue(3);
    obj.EnQueue(6);
    obj.EnQueue(4);
    int value = obj.DeQueue();
    return 0;
}