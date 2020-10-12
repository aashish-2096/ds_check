#include<bits/stdc++.h>
using namespace std;

long int findIndex(long int ar[],long int low,long int high, long int x)
{
    if(low>high)
    return -1;
    else
    {
        long int mid = (high+low)/2;
        if(ar[mid] == x)
            return mid;
        else if( x > ar[mid] && x<ar[mid+1])
            return mid;
        else if(x>ar[mid])
            return findIndex(ar,mid+1,high,x);
        else if(x<ar[mid])
            return findIndex(ar,low,mid-1,x);           
    }
}

int main(){ 
    long int t,N,x;
    cin>>t;
    while(t--)
    {
     cin>>N;
     cin>>x;
     long int *ar = new long int[N]; 
     for(long int i =0;i<N;i++){
         cin>>ar[i];
    }
     cout<<findIndex(ar,0,N,x)<<endl;
    }
    return 0; 
}