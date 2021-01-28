#include<bits/stdc++.h>
using namespace std;

//Two Pointer - Sliding Window
int main(){
    int n,k;
    cin>>n;
    int *ar = new int[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    cin>>k;
    int min_ = 0;
    for(int i=0;i<n;i++){
        if(ar[i]<=k)
        min_++;
    }
    int ct = 0;
    for(int i=0;i<min_;i++){
        if(ar[i]>k)
            ct++;
    }
    int val = ct;
    for(int i=0,j=min_;i<n-min_;i++,j++){
        if(ar[i]>k)
        ct--;
        if(ar[j]>k)
        ct++;
    }
    cout<<min(val,ct)<<endl;
return 0;
}