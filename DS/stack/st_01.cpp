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
    if(top == -1)
        return true;
    else
        return false;    
}

int main()
{
    int t,len;
    string str;
    cin>>t;
    while(t--)
    {
        cin>>str;
        len = str.length();
        int *stack =  new int[len];
        for(int i =0;i<len;i++)
        {
            if(top != -1)
            {
                if(stack[top] == str[i])
                    pop(stack);
                else
                    push(stack,str[i]);   
            }
            else if(top ==-1 && i!= len)
            {
                push(stack,str[i]);
            }
        } 

        if(top!= -1)
        {
            string res;
            while(top !=-1)
            {
               res.push_back(pop(stack));
           }
            reverse(res.begin(),res.end());
            cout<<res<<endl;
        }
        else{
            cout<<"KHALI"<<endl;
        }
        delete [] stack;
    }
    
    return 0;

}