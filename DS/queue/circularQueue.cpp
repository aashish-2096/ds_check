#include<bits/stdc++.h>
using namespace std;
#define SIZE 4

class CircularQueue{
    public:
    int ar[SIZE], FRONT, REAR;
    public :
    CircularQueue()
    {
        FRONT = -1;
        REAR = -1;
    }

    void showFront()
    {
        cout<<FRONT<<" "<<REAR<<endl;
    }
    bool isFull()
    {
        if(((FRONT-REAR)%SIZE) == 1)
            return true;
        else if (FRONT == 0 && REAR == SIZE-1)
            return true;    
        else 
            return false;    
    }

    bool isEmpty()
    {
        if(FRONT == REAR)
        {
            if(FRONT ==-1)
                return true;
            else
                return false;    
        }
        else
            return false;    
    }

    void enQueue(int val)
    {
        if(!isFull())
        {
            if(REAR == FRONT)
            {
                if(REAR == -1)
                {
                  REAR++;
                  FRONT++;
                  ar[REAR] = val;  
                }
                else{
                    REAR = (REAR+1)%SIZE;
                    ar[REAR] = val;
                }
            }
            else
            {
                 REAR = (REAR+1)%SIZE;
                 ar[REAR] = val;
            }
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
            if(FRONT==REAR)
            {
                cout<<ar[FRONT]<<endl;
                FRONT = -1;
                REAR = -1;
            }
            else    
            {
                cout<<ar[FRONT]<<endl;
                FRONT = (FRONT+1)%SIZE;
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
                int i;
                for(i =FRONT;i!=REAR;i=(i+1)%SIZE)
                {

                    cout<<ar[i]<<endl;
                }
                cout<<ar[i]<<endl;
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
    CircularQueue q;
    q.enQueue(2);
    q.enQueue(4);
    q.showQueue();
    q.enQueue(10); 
    q.showQueue();
    q.enQueue(15);
    q.showFront();
    q.deQueue();
    q.showQueue();
    q.enQueue(20);
    q.showQueue();
    q.deQueue();
    q.deQueue();
    q.showQueue();
    q.showFront();
   
    return 0;
}