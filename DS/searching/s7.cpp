#include<bits/stdc++.h>
using namespace std;

long int returnNumber(long int ar[],long int n)
{
    long int d =  ar[1] - ar[0];
    long int diff;
    int counter = -1;

    for(long int i =1;i<n;i++){
       if(d == (ar[i]-ar[i-1])){
           counter++;
       }
       else if(d != (ar[i]-ar[i-1])){
           counter--;
           d = ar[i]-ar[i-1];
       }
       if(counter  == 1){ 
           diff = d;
           break;
       }
    } 
    cout<<d<<endl;   
    for(long int i = 1;i<n;i++)
    {
        if(i == 1)
        {
            if((ar[i] - ar[i-1]) != d)
            return ar[i] - d;

        }
        else if((ar[i] - ar[i-1]) != d){
            return (ar[i-1] + d);
        }
    }
}

int main()
{
   int t;
   long int n;
   cin>>t;
   while(t--)
   {
       cin>>n;
       long int *ar = new long int [n];
       for(int i =0;i<n;i++){
           cin>>ar[i];
       }
       cout<<returnNumber(ar,n)<<endl;
   }
    return 0; 
}