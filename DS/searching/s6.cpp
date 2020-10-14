#include<bits/stdc++.h>
using namespace std;

long int returnIndex(long int ar[],long int n)
{
    long int max_l = -1, max_r =-1;
    for(int i = 0;i<n-1;i++){
           if(i==0){
               max_r= ar[1];
               if(ar[i]>max_r)
               return i;

           }
           else if(i == n-1){
               max_l =  ar[i-1];
               if(ar[i]>max_l)
               return i;
           }
           else{
               max_l = ar[i-1];
               max_r = ar[i+1];
               if(ar[i]>max_l && ar[i]>max_r)
               return i;
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
       cout<<returnIndex(ar,n)<<endl;
   }
    return 0; 
}