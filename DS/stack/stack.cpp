#include<bits/stdc++.h>
using namespace std;

int top = -1;
void push (int stack[],int n){
    top +=1;
    stack[top] = n;
}

int pop(int stack[])
{
    int temp = stack[top];
    top = top-1;
    return temp;
}
bool IsEmpty()
{
    if(top ==1)
        return true;
    else
        return false;    
}
void printStack(int stack[])
{
    if(!IsEmpty())
    {
        for (int i=top;i>-1;i--)
            cout<<stack[i]<<endl;
    }
    
}
int main()
{
    int stack[100];
    push(stack,2);
    push(stack,6);
    push(stack,10);
    printStack(stack);
    cout<<pop(stack)<<endl;
    return 0;

}