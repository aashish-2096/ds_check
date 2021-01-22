#include<bits/stdc++.h>
using namespace std;


int * reArrange(int *ar,int n){
    int *arr =  new int[n];
   for(int i=0;i<n;i++)
   arr[i] = -1;
    for(int i = 0;i<n;i++){
       if(ar[i]>-1)
       {
          arr[ar[i]] = ar[i];
       }
   }
   return arr;
}
// Cyclic Rotation By 1
int main(){
    int n;
    cin>>n;
    int *ar = new int[n];
    for(int i =0;i<n;i++)
    cin>>ar[i];
    int *b = reArrange(ar,n);
    for (int i =0;i<n;i++)
    cout<<b[i]<<" ";
    cout<<endl;
    return 0;
}  