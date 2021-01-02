#include<bits/stdc++.h>
using namespace std;

int binaryCheck(int ar[],int n,int k){
    int high, low, pos,mid;
    high = n-1;
    low = 0;
    while(low<=high){
        mid = low +(high-low)/2;
        cout<<low << " "<<high;
        cout<<mid<<endl;
        if(ar[mid]>k){
             low = mid+1;
         }
         else if(ar[mid]<k){
             high = mid-1;
         }
         else if(ar[mid] == k){
             return mid;
         }
    }
    return -1;
}

int main(){
    int n,k;
    cin>>n;
    int *ar = new int[n];
    for(int i =0 ;i<n;i++){
        cin>>ar[i];
    }
    sort(ar,ar+n);
    cin>>k;
    cout<<binaryCheck(ar,n,k)<<endl;
    return 0; 
}