#include<bits/stdc++.h>
using namespace std;


int rotationCount(int ar[],int low,int high){
    if(high<low)
    return 0;
    if(high == low)
    return low;
    int mid  = low + (high-low)/2;
    if(ar[mid]<ar[mid-1] && mid>low)
    return mid;
    if(ar[mid]>ar[mid+1] && mid<high)
    return mid+1;
    if(ar[mid]<ar[high])
    return rotationCount(ar,low,mid-1);
    return rotationCount(ar,mid+1,high);
}
// Cyclic Rotation By 1
int main(){
    int n;
    cin>>n;
    int *ar = new int[n];
    for(int i =0;i<n;i++)
    cin>>ar[i];
    cout<<rotationCount(ar,0,n-1)<<endl;
    // for(int i =0;i<n;i++)
    // cout<<ar[i]<<" ";
    //cout<<endl;
    return 0;
}  