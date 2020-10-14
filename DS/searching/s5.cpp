#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,temp,sum = 0,counter =0;
    cin>>n>>k;
    temp =  (240-k)/5;
    for(int i = 1;i<=n;i++)
    {
        sum += i;
        if(sum<=temp)
        counter++;
        else
        break;
    }
    cout<<counter<<endl;
    return 0; 
}