#include<bits/stdc++.h>
using namespace std;

void swap_(int i,int j, int ar[],int d);
void leftRotation(int st, int size, int ar[], int d){
if(d == 0 || d == size)
 return;
if(d == size-d){
    swap_(st,size-d,ar,d);
    return;
}
if(d<size-d){
     swap_(st,size-d,ar,d);
     leftRotation(st,size-d,ar,d);
 }
else{
     swap_(st,d,ar,size-d);
     leftRotation(st+size-d,d,ar,2*d-size);
   }
}

void swap_(int fi,int si, int ar[],int d){
    int temp;
    for(int i = 0; i < d; i++) 
    { 
        temp = ar[fi + i]; 
        ar[fi + i] = ar[si + i]; 
        ar[si + i] = temp; 
    } 
}


int main(){
    int n,d;
    cin>>n;
    int*ar= new int[n];
    for(int i=0;i<n;i++)
    cin>>ar[i];
    cin>>d;
    leftRotation(0,n,ar,d);
    for(int i=0;i<n;i++)
    cout<<ar[i]<<" ";
    cout<<endl;
    return 0;
}