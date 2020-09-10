#include<bits/stdc++.h>
using namespace std;
#define SIZE 4

class Queue{
    private:
    int ar[SIZE], FRONT, REAR;
    public :
    Queue()
    {
        FRONT = -1;
        REAR = -1;
    }

    bool isFull()
    {
        if (REAR == SIZE-1)
            return true;
        else 
            return false;    
    }

    bool isEmpty()
    {
        if(FRONT == -1)
            return true;
        else
            return false;    
    }

    void enQueue(int val)
    {
        cout<<"Enqueue"<<endl;
        if(!isFull())
        {
            if(REAR ==-1)
            {
                FRONT++;
                REAR++;
            }
            else
            {
                REAR++;
            }
            ar[REAR] = val;
        }
        else
        {
            cout<<"Overflow"<<endl;
        }
    }

    void deQueue()
    {
        cout<<"DeQueue"<<endl;
        if(!isEmpty())
        {
            if(FRONT>=REAR)
            {
                FRONT = -1;
                REAR = -1;
            }
            else    
            {
                cout<<ar[FRONT]<<endl;
                FRONT++;
            }
            
        }
        else
        {
            cout<<"Nothing to delete"<<endl;
        }
    }

    void showQueue()
    {
        cout<<"showQueue"<<endl;
        if(!isEmpty())
        {
            if(FRONT == REAR)
            {
                cout<<ar[FRONT]<<endl;
            }
            else
            {
                for(int i = FRONT;i<=REAR;i++)
                {
                    cout<<ar[i]<<endl;
                }
            }
        }
        else
        {
            cout<<"Nothing to Show Empty"<<endl;
        }
    }
};

int main()
{
    Queue q;
    q.enQueue(2);
    q.enQueue(4);
    q.showQueue();
    q.enQueue(10);
    q.enQueue(15);
    q.enQueue(20);
    q.showQueue();
    q.deQueue();
    q.deQueue();
    q.showQueue();
    return 0;
}